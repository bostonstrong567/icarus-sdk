// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Fertalize_Crops.BP_ActionableBehaviour_Fertalize_Crops_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x340, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Fertalize_Crops_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacterSurvival* OwningPlayer;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USurvivalCharacterState* SurvivalStateRef;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Eat;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Drink;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Crop_Plot_Base_C* As_BP_Crop_Plot_Base;  // 0x0338, size 0x8, named "As BP Crop Plot Base"

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Fertalize_Crops(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void PlayConsumeSound(AIcarusMountCharacter* Mount, UFMODEvent* Sound);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void Setup(AActor* OwningActor);  // parameters 0x8
};
