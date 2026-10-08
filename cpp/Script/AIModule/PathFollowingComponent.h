// /Script/AIModule.PathFollowingComponent
// Derives from: UActorComponent > UObject
// size 0x250, declared in Engine/Source/Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h

UCLASS(Config=Engine)
class UPathFollowingComponent : public UActorComponent, public IAIResourceInterface, public IPathFollowingAgentInterface
{
public:
    UPROPERTY(Transient, Instanced) UNavMovementComponent* MovementComp;  // 0x00E8, size 0x8
    UPROPERTY(Transient) ANavigationData* MyNavData;  // 0x00F8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(UPathFollowingComponent *,FVector &),FDefaultDelegateUserPolicy> PostProcessMove;  // 0x00C0
    TMulticastDelegate<void __cdecl(FAIRequestID,FPathFollowingResult const &),FDefaultDelegateUserPolicy> OnRequestFinished;  // 0x00D0
    FWeakObjectPtr CurrentCustomLinkOb;  // 0x00F0, protected
    TSharedPtr<FNavigationPath,1> Path;  // 0x0100, protected
    float MyDefaultAcceptanceRadius;  // 0x0110, protected
    float AcceptanceRadius;  // 0x0114, protected
    float CurrentAcceptanceRadius;  // 0x0118, protected
    float MinAgentRadiusPct;  // 0x011C, protected
    float MinAgentHalfHeightPct;  // 0x0120, protected
    float WaitingTimeout;  // 0x0124, protected
    TSharedPtr<FMoveRequestCustomData,1> GameData;  // 0x0128, protected
    TWeakObjectPtr<AActor,FWeakObjectPtr> DestinationActor;  // 0x0138, protected
    const INavAgentInterface * DestinationAgent;  // 0x0140, protected
    FBasedPosition CurrentDestination;  // 0x0148, protected
    FVector CurrentMoveInput;  // 0x0180, protected
    FVector MoveOffset;  // 0x018C, protected
    FVector LocationWhenPaused;  // 0x0198, protected
    FVector OriginalMoveRequestGoalLocation;  // 0x01A4, protected
    float PathTimeWhenPaused;  // 0x01B0, protected
    int32 PreciseAcceptanceRadiusCheckStartNodeIndex;  // 0x01B4, protected
    TEnumAsByte<enum EPathFollowingStatus::Type> Status;  // 0x01B8, protected
    uint8 : 1 bReachTestIncludesAgentRadius;  // 0x01B9, protected
    uint8 : 1 bReachTestIncludesGoalRadius;  // 0x01B9, protected
    uint8 : 1 bMoveToGoalOnLastSegment;  // 0x01B9, protected
    uint8 : 1 bUseBlockDetection;  // 0x01B9, protected
    uint8 : 1 bCollidedWithGoal;  // 0x01B9, protected
    uint8 : 1 bLastMoveReachedGoal;  // 0x01B9, protected
    uint8 : 1 bStopMovementOnFinish;  // 0x01B9, protected
    uint8 : 1 bIsUsingMetaPath;  // 0x01B9, protected
    uint8 : 1 bWalkingNavLinkStart;  // 0x01BA, protected
    uint8 : 1 bIsDecelerating;  // 0x01BA, protected
    float BlockDetectionDistance;  // 0x01BC, protected
    float BlockDetectionInterval;  // 0x01C0, protected
    int32 BlockDetectionSampleCount;  // 0x01C4, protected
    float LastSampleTime;  // 0x01C8, protected
    int32 NextSampleIdx;  // 0x01CC, protected
    TArray<FBasedPosition,TSizedDefaultAllocator<32> > LocationSamples;  // 0x01D0, protected
    int32 MoveSegmentStartIndex;  // 0x01E0, protected
    int32 MoveSegmentEndIndex;  // 0x01E4, protected
    uint64 MoveSegmentStartRef;  // 0x01E8, protected
    uint64 MoveSegmentEndRef;  // 0x01F0, protected
    FVector MoveSegmentDirection;  // 0x01F8, protected
    float CachedBrakingDistance;  // 0x0204, protected
    float CachedBrakingMaxSpeed;  // 0x0208, protected
    int32 DecelerationSegmentIndex;  // 0x020C, protected
    FAIResourceLock ResourceLock;  // 0x0210, protected
    FTimerHandle WaitingForPathTimer;  // 0x0228, protected
    FAIRequestID CurrentRequestId;  // 0x0230, private
    FNavLocation CurrentNavLocation;  // 0x0238, private

    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<EPathFollowingAction> GetPathActionType() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetPathDestination() const;  // parameters 0xC
    UFUNCTION() void OnActorBump(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xA4
    UFUNCTION() void OnNavDataRegistered(ANavigationData* NavData);  // parameters 0x8

    // Virtual functions that start here:
    //   AbortMove, Cleanup, DetermineCurrentTargetPathPoint, DetermineStartingPathPoint, DisplayDebug
    //   FinishUsingCustomLink, FollowPathSegment, GetCurrentPathElement, GetDebugString
    //   GetDebugStringTokens, GetMoveFocus, HandlePathUpdateEvent, HasReachedCurrentTarget
    //   HasReachedDestination, Initialize, IsOnPath, IsPathFollowingAllowed, OnActorBump
    //   OnNavigationInitDone, OnNewPawn, OnPathFinished, OnPathUpdated, OnPathfindingQuery
    //   OnSegmentFinished, OnWaitingPathTimeout, PauseMove, RequestMove, Reset, ResumeMove, SetMoveSegment
    //   SetMovementComponent, ShouldCheckPathOnResume, StartUsingCustomLink, UpdateBlockDetection
    //   UpdateCachedComponents, UpdateDecelerationData, UpdateMove, UpdateMovementComponent
    //   UpdatePathSegment
};
