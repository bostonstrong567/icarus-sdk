// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Inject_FEV.BP_ActionableBehaviour_Inject_FEV_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x338, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Inject_FEV_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacterSurvival* OwningPlayer;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USurvivalCharacterState* SurvivalStateRef;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Eat;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Drink;  // 0x0330, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Inject_FEV(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Client, Reliable) void Owner_PlayDrinkSound(ACharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Client, Reliable) void Owner_PlayEatSound(ACharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void PlayConsumeSound(ACharacter* Character, UFMODEvent* Sound);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void Setup(AActor* OwningActor);  // parameters 0x8
};
