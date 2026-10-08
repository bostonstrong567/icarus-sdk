// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Milk_Cow.BP_ActionableBehaviour_Milk_Cow_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x338, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Milk_Cow_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HitTraceDistance;  // 0x0318, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* OwningPlayer;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAlterationsEnum MilkAlteration;  // 0x0328, size 0x10

    UFUNCTION(BlueprintCallable) EViewTraceResultPriority BP_ActionableBehaviour_Scanner_Medical_AutoGenFunc(const FViewTraceResult& Result);  // parameters 0x8D
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Milk_Cow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ManualAction();
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
