// /Script/AIModule.CrowdFollowingComponent
// Derives from: UPathFollowingComponent > UActorComponent > UObject
// size 0x298, declared in Engine/Source/Runtime/AIModule/Classes/Navigation/CrowdFollowingComponent.h

UCLASS(Config=Engine)
class UCrowdFollowingComponent : public UPathFollowingComponent, public ICrowdAgentInterface
{
public:
    UPROPERTY() FVector CrowdAgentMoveDirection;  // 0x0268, size 0xC
protected:
    TWeakInterfacePtr<IRVOAvoidanceInterface> AvoidanceInterface;  // 0x0258, not reflected
    uint8 : 1 bAffectFallingVelocity;  // 0x0274, not reflected
    uint8 : 1 bEnableAnticipateTurns;  // 0x0274, not reflected
    uint8 : 1 bEnableCrowdSimulation;  // 0x0274, not reflected
    uint8 : 1 bEnableObstacleAvoidance;  // 0x0274, not reflected
    uint8 : 1 bRegisteredWithCrowdSimulation;  // 0x0274, not reflected
    uint8 : 1 bRotateToVelocity;  // 0x0274, not reflected
    uint8 : 1 bSuspendCrowdSimulation;  // 0x0274, not reflected
    uint8 : 1 bUpdateDirectMoveVelocity;  // 0x0274, not reflected
    uint8 : 1 bCanCheckMovingTooFar;  // 0x0275, not reflected
    uint8 : 1 bCanUpdatePathPartInTick;  // 0x0275, not reflected
    uint8 : 1 bEnableOptimizeTopology;  // 0x0275, not reflected
    uint8 : 1 bEnableOptimizeVisibility;  // 0x0275, not reflected
    uint8 : 1 bEnablePathOffset;  // 0x0275, not reflected
    uint8 : 1 bEnableSeparation;  // 0x0275, not reflected
    uint8 : 1 bEnableSlowdownAtGoal;  // 0x0275, not reflected
    uint8 : 1 bFinalPathPart;  // 0x0275, not reflected
    uint8 : 1 bCheckMovementAngle;  // 0x0276, not reflected
    uint8 : 1 bEnableSimulationReplanOnResume;  // 0x0276, not reflected
    TEnumAsByte<enum ECrowdAvoidanceQuality::Type> AvoidanceQuality;  // 0x0277, not reflected
    ECrowdSimulationState SimulationState;  // 0x0278, not reflected
    float SeparationWeight;  // 0x027C, not reflected
    float CollisionQueryRange;  // 0x0280, not reflected
    float PathOptimizationRange;  // 0x0284, not reflected
    float AvoidanceRangeMultiplier;  // 0x0288, not reflected
    int32 PathStartIndex;  // 0x028C, not reflected
    int32 LastPathPolyIndex;  // 0x0290, not reflected
public:
    UFUNCTION(BlueprintCallable) void SuspendCrowdSteering(bool bSuspend);  // parameters 0x1

    // Virtual functions that start here:
    //   ApplyCrowdAgentPosition, ApplyCrowdAgentVelocity, OnNavNodeChanged, SetCrowdSimulation
    //   SetCrowdSimulationState, ShouldTrackMovingGoal, SuspendCrowdSteering, UpdateCachedGoal
};
