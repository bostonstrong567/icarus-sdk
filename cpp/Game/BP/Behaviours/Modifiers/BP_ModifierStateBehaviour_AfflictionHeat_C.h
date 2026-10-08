// /Game/BP/Behaviours/Modifiers/BP_ModifierStateBehaviour_AfflictionHeat.BP_ModifierStateBehaviour_AfflictionHeat_C
// Derives from: UBP_Modifier_TemperatureClear_C > UBP_Modifier_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x408, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ModifierStateBehaviour_AfflictionHeat_C : public UBP_Modifier_TemperatureClear_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Damage;  // 0x03E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamagePercentage;  // 0x03EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAfflictionChanceRowHandle Affliction;  // 0x03F0, size 0x18

    UFUNCTION(BlueprintCallable) void DealDamage();
    UFUNCTION() void ExecuteUbergraph_BP_ModifierStateBehaviour_AfflictionHeat(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPostProcessBlendWeights();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HeatstrokeTimer();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierApplied();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierRemoved();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartHeatstrokeTimer();
    UFUNCTION(BlueprintCallable) void UpdateBlend();
};
