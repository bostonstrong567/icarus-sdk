// /Script/AIModule.AIController
// Derives from: AController > AActor > UObject
// size 0x328, declared in Engine/Source/Runtime/AIModule/Classes/AIController.h

UCLASS(NotPlaceable, Config=Engine)
class AAIController : public AController, public IAIPerceptionListenerInterface, public IGameplayTaskOwnerInterface, public IGenericTeamAgentInterface, public IVisualLoggerDebugSnapshotInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bStartAILogicOnPossess : 1;  // 0x02D0, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bStopAILogicOnUnposses : 1;  // 0x02D0, mask 0x02
    UPROPERTY() uint8 bLOSflag : 1;  // 0x02D0, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSkipExtraLOSChecks : 1;  // 0x02D0, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAllowStrafe : 1;  // 0x02D0, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bWantsPlayerState : 1;  // 0x02D0, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSetControlRotationFromPawnOrientation : 1;  // 0x02D0, mask 0x40
    UPROPERTY(EditAnywhere, Instanced) UPathFollowingComponent* PathFollowingComponent;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBrainComponent* BrainComponent;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, Instanced) UAIPerceptionComponent* PerceptionComponent;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadOnly) UPawnActionsComponent* ActionsComp;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadOnly) UBlackboardComponent* Blackboard;  // 0x02F8, size 0x8
    UPROPERTY(Instanced) UGameplayTasksComponent* CachedGameplayTasksComponent;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UNavigationQueryFilter> DefaultNavigationFilterClass;  // 0x0308, size 0x8
    UPROPERTY(BlueprintAssignable) FAIMoveCompletedSignature ReceiveMoveCompleted;  // 0x0310, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FGameplayResourceSet ScriptClaimedResources;  // 0x02B8, private
    FFocusKnowledge FocusInformation;  // 0x02C0, protected
    FGenericTeamId TeamID;  // 0x0320, private

    UFUNCTION(BlueprintCallable) void ClaimTaskResource(TSubclassOf<UGameplayTaskResource> ResourceClass);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UAIPerceptionComponent* GetAIPerceptionComponent();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetFocalPoint() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetFocalPointOnActor(AActor* Actor) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetFocusActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetImmediateMoveDestination() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<EPathFollowingStatus> GetMoveStatus() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) UPathFollowingComponent* GetPathFollowingComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasPartialPath() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void K2_ClearFocus();
    UFUNCTION(BlueprintCallable) void K2_SetFocalPoint(FVector FP);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void K2_SetFocus(AActor* NewFocus);  // parameters 0x8
    UFUNCTION(BlueprintCallable) TEnumAsByte<EPathFollowingRequestResult> MoveToActor(AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);  // parameters 0x1A
    UFUNCTION(BlueprintCallable) TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(const FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);  // parameters 0x22
    UFUNCTION() void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnUsingBlackBoard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset);  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool RunBehaviorTree(UBehaviorTree* BTAsset);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetMoveBlockDetection(bool bEnable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPathFollowingComponent(UPathFollowingComponent* NewPFComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UnclaimTaskResource(TSubclassOf<UGameplayTaskResource> ResourceClass);  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool UseBlackboard(UBlackboardData* BlackboardAsset, UBlackboardComponent*& BlackboardComponent);  // parameters 0x11

    // Virtual functions that start here:
    //   ActorsPerceptionUpdated, ClearFocus, FindPathForMoveRequest, GetDebugIcon, GetFocalPointOnActor
    //   InitializeBlackboard, MoveTo, OnGameplayTaskResourcesClaimed, OnMoveCompleted, PreparePathfinding
    //   RequestMove, RequestPathAndMove, RunBehaviorTree, SetFocalPoint, SetFocus, ShouldSyncBlackboardWith
    //   UpdateControlRotation
};
