// /Script/AIModule.PathFollowingComponent
// Derives from: UActorComponent > UObject
// size 0x250, declared in Engine/Source/Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h

UCLASS(Config=Engine)
class UPathFollowingComponent : public UActorComponent, public IAIResourceInterface, public IPathFollowingAgentInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    TDelegate<void __cdecl(UPathFollowingComponent *,FVector &),FDefaultDelegateUserPolicy> PostProcessMove;  // 0x00C0, not reflected
    TMulticastDelegate<void __cdecl(FAIRequestID,FPathFollowingResult const &),FDefaultDelegateUserPolicy> OnRequestFinished;  // 0x00D0, not reflected
protected:
    UPROPERTY(Transient, Instanced) UNavMovementComponent* MovementComp;  // 0x00E8, size 0x8
    FWeakObjectPtr CurrentCustomLinkOb;  // 0x00F0, not reflected
    UPROPERTY(Transient) ANavigationData* MyNavData;  // 0x00F8, size 0x8
    TSharedPtr<FNavigationPath,1> Path;  // 0x0100, not reflected
    float MyDefaultAcceptanceRadius;  // 0x0110, not reflected
    float AcceptanceRadius;  // 0x0114, not reflected
    float CurrentAcceptanceRadius;  // 0x0118, not reflected
    float MinAgentRadiusPct;  // 0x011C, not reflected
    float MinAgentHalfHeightPct;  // 0x0120, not reflected
    float WaitingTimeout;  // 0x0124, not reflected
    TSharedPtr<FMoveRequestCustomData,1> GameData;  // 0x0128, not reflected
    TWeakObjectPtr<AActor,FWeakObjectPtr> DestinationActor;  // 0x0138, not reflected
    const INavAgentInterface * DestinationAgent;  // 0x0140, not reflected
    FBasedPosition CurrentDestination;  // 0x0148, not reflected
    FVector CurrentMoveInput;  // 0x0180, not reflected
    FVector MoveOffset;  // 0x018C, not reflected
    FVector LocationWhenPaused;  // 0x0198, not reflected
    FVector OriginalMoveRequestGoalLocation;  // 0x01A4, not reflected
    float PathTimeWhenPaused;  // 0x01B0, not reflected
    int32 PreciseAcceptanceRadiusCheckStartNodeIndex;  // 0x01B4, not reflected
    TEnumAsByte<enum EPathFollowingStatus::Type> Status;  // 0x01B8, not reflected
    uint8 : 1 bCollidedWithGoal;  // 0x01B9, not reflected
    uint8 : 1 bIsUsingMetaPath;  // 0x01B9, not reflected
    uint8 : 1 bLastMoveReachedGoal;  // 0x01B9, not reflected
    uint8 : 1 bMoveToGoalOnLastSegment;  // 0x01B9, not reflected
    uint8 : 1 bReachTestIncludesAgentRadius;  // 0x01B9, not reflected
    uint8 : 1 bReachTestIncludesGoalRadius;  // 0x01B9, not reflected
    uint8 : 1 bStopMovementOnFinish;  // 0x01B9, not reflected
    uint8 : 1 bUseBlockDetection;  // 0x01B9, not reflected
    uint8 : 1 bIsDecelerating;  // 0x01BA, not reflected
    uint8 : 1 bWalkingNavLinkStart;  // 0x01BA, not reflected
    float BlockDetectionDistance;  // 0x01BC, not reflected
    float BlockDetectionInterval;  // 0x01C0, not reflected
    int32 BlockDetectionSampleCount;  // 0x01C4, not reflected
    float LastSampleTime;  // 0x01C8, not reflected
    int32 NextSampleIdx;  // 0x01CC, not reflected
    TArray<FBasedPosition,TSizedDefaultAllocator<32> > LocationSamples;  // 0x01D0, not reflected
    int32 MoveSegmentStartIndex;  // 0x01E0, not reflected
    int32 MoveSegmentEndIndex;  // 0x01E4, not reflected
    uint64 MoveSegmentStartRef;  // 0x01E8, not reflected
    uint64 MoveSegmentEndRef;  // 0x01F0, not reflected
    FVector MoveSegmentDirection;  // 0x01F8, not reflected
    float CachedBrakingDistance;  // 0x0204, not reflected
    float CachedBrakingMaxSpeed;  // 0x0208, not reflected
    int32 DecelerationSegmentIndex;  // 0x020C, not reflected
    FAIResourceLock ResourceLock;  // 0x0210, not reflected
    FTimerHandle WaitingForPathTimer;  // 0x0228, not reflected
private:
    FAIRequestID CurrentRequestId;  // 0x0230, not reflected
    FNavLocation CurrentNavLocation;  // 0x0238, not reflected
public:
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
