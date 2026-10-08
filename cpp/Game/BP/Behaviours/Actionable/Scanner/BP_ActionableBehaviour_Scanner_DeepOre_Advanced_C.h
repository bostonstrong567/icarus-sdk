// /Game/BP/Behaviours/Actionable/Scanner/BP_ActionableBehaviour_Scanner_DeepOre_Advanced.BP_ActionableBehaviour_Scanner_DeepOre_Advanced_C
// Derives from: UBP_ActionableBehaviour_Scanner_DeepOre_C > UBP_ActionableBehaviour_Scanner_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3E0, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Scanner_DeepOre_Advanced_C : public UBP_ActionableBehaviour_Scanner_DeepOre_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FOreDepositRowHandle SelectedOreType;  // 0x03B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FOreDepositRowHandle> OreTypes;  // 0x03D0, size 0x10

    UFUNCTION(BlueprintCallable) void CacheOreTypes();
    UFUNCTION(BlueprintCallable) void CycleOreType(bool Forward);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Scanner_DeepOre_Advanced(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) TArray<AActor*> ExtraNearbyFilter(TArray<AActor*>& InNearbyActors);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
