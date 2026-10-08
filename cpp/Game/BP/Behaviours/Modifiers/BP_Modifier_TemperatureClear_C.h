// /Game/BP/Behaviours/Modifiers/BP_Modifier_TemperatureClear.BP_Modifier_TemperatureClear_C
// Derives from: UBP_Modifier_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x3D9, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_TemperatureClear_C : public UBP_Modifier_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Healing;  // 0x03D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HealTime;  // 0x03D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HealingEnabled;  // 0x03D8, size 0x1

    UFUNCTION(BlueprintCallable) void CanHeal(bool& CanHeal);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierApplied();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TemperatureUpdated(int32 NewTemperature);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TriggerCheck();
};
