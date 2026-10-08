// /Game/BP/Behaviours/Actionable/Scanner/BP_ActionableBehaviour_Recovery_Beacon_Tracker.BP_ActionableBehaviour_Recovery_Beacon_Tracker_C
// Derives from: UBP_ActionableBehaviour_Scanner_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3D0, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Recovery_Beacon_Tracker_C : public UBP_ActionableBehaviour_Scanner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AActor* TrackedActor;  // 0x03B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FTrackedActorUpdated TrackedActorUpdated;  // 0x03C0, size 0x10

    UFUNCTION(BlueprintCallable) void CycleBeacon(bool Forward);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Recovery_Beacon_Tracker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FilterActors(const TArray<AActor*>& Actors, TArray<AActor*>& Filtered);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void ForceUpdate();
    UFUNCTION(BlueprintCallable) void GetActors(TArray<AActor*>& OutActors);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetTrackedActor(AActor*& Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_TrackedActor();
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TrackedActorUpdated__DelegateSignature();
    UFUNCTION(BlueprintCallable) void UpdateScanningIntensity();
    UFUNCTION(BlueprintCallable) void UpdateScanningIntensity_0();
};
