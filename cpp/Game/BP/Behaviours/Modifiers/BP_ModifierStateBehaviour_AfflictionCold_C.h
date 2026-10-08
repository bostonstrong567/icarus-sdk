// /Game/BP/Behaviours/Modifiers/BP_ModifierStateBehaviour_AfflictionCold.BP_ModifierStateBehaviour_AfflictionCold_C
// Derives from: UBP_Modifier_TemperatureClear_C > UBP_Modifier_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x400, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ModifierStateBehaviour_AfflictionCold_C : public UBP_Modifier_TemperatureClear_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAfflictionChanceRowHandle Affliction;  // 0x03E8, size 0x18

    UFUNCTION() void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionCold(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FrostnipTimer();
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPostProcessBlendWeights();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierApplied();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierRemoved();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartFrostnipTimer();
    UFUNCTION(BlueprintCallable) void UpdateBlend();
};
