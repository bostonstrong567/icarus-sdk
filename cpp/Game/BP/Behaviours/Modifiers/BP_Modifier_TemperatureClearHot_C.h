// /Game/BP/Behaviours/Modifiers/BP_Modifier_TemperatureClearHot.BP_Modifier_TemperatureClearHot_C
// Derives from: UBP_Modifier_TemperatureClear_C > UBP_Modifier_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x3D9, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_TemperatureClearHot_C : public UBP_Modifier_TemperatureClear_C
{
public:
    UFUNCTION(BlueprintCallable) void CanHeal(bool& CanHeal);  // parameters 0x1
};
