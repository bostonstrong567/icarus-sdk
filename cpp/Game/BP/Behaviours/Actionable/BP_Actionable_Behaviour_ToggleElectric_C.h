// /Game/BP/Behaviours/Actionable/BP_Actionable_Behaviour_ToggleElectric.BP_Actionable_Behaviour_ToggleElectric_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x320, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_Actionable_Behaviour_ToggleElectric_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer;  // 0x0318, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Actionable_Behaviour_ToggleElectric(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void Setup(AActor* OwningActor);  // parameters 0x8
};
