// /Game/BP/Behaviours/Actionable/Scanner/BP_ActionableBehaviour_Scanner_Creature_Scanner.BP_ActionableBehaviour_Scanner_Creature_Scanner_C
// Derives from: UBP_ActionableBehaviour_Scanner_DeepOre_C > UBP_ActionableBehaviour_Scanner_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3C8, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Scanner_Creature_Scanner_C : public UBP_ActionableBehaviour_Scanner_DeepOre_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HitTraceDistance;  // 0x03B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* OwningPlayer;  // 0x03C0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Scanner_Creature_Scanner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetScannedActor(AActor*& HitActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) EViewTraceResultPriority ResultPriorityCallback(const FViewTraceResult& Result);  // parameters 0x8D
};
