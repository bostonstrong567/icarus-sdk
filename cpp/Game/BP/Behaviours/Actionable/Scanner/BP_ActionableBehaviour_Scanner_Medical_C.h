// /Game/BP/Behaviours/Actionable/Scanner/BP_ActionableBehaviour_Scanner_Medical.BP_ActionableBehaviour_Scanner_Medical_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x328, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Scanner_Medical_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HitTraceDistance;  // 0x0318, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* OwningPlayer;  // 0x0320, size 0x8

    UFUNCTION(BlueprintCallable) EViewTraceResultPriority BP_ActionableBehaviour_Scanner_Medical_AutoGenFunc(const FViewTraceResult& Result);  // parameters 0x8D
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Scanner_Medical(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetScannedActor(AActor*& HitActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
