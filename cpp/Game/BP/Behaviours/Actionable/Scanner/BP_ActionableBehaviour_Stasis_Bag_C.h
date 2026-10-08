// /Game/BP/Behaviours/Actionable/Scanner/BP_ActionableBehaviour_Stasis_Bag.BP_ActionableBehaviour_Stasis_Bag_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x390, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Stasis_Bag_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HitTraceDistance;  // 0x0318, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* OwningPlayer;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TSubclassOf<AActor>, FItemTemplateRowHandle> NPC;  // 0x0328, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle ItemToPickup;  // 0x0378, size 0x18

    UFUNCTION(BlueprintCallable) EViewTraceResultPriority BP_ActionableBehaviour_Scanner_Medical_AutoGenFunc(const FViewTraceResult& Result);  // parameters 0x8D
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Stasis_Bag(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetItem(UObject* Object, FItemTemplateRowHandle& Value);  // parameters 0x21
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
