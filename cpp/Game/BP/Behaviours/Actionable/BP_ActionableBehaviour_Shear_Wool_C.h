// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Shear_Wool.BP_ActionableBehaviour_Shear_Wool_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x334, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Shear_Wool_C : public UBP_ActionableBehaviour_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USurvivalCharacterState* SurvivalStateRef;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Eat;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Drink;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TraceDistance;  // 0x0330, size 0x4

    UFUNCTION(BlueprintCallable) int32 CalculateDurabilityDamage();  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Shear_Wool(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void PlayConsumeSound(AIcarusMountCharacter* Mount, UFMODEvent* Sound);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void PlaySwing(AIcarusPlayerCharacterSurvival* Target_Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void PlaySwingAnimation(AIcarusPlayerCharacterSurvival* Player);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
