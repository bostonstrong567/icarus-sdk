// /Game/BP/Behaviours/Modifiers/BP_Modifier_HeatOverload.BP_Modifier_HeatOverload_C
// Derives from: UBP_ModifierStateBehaviour_AfflictionHeat_C > UBP_Modifier_TemperatureClear_C > UBP_Modifier_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x408, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_HeatOverload_C : public UBP_ModifierStateBehaviour_AfflictionHeat_C
{
public:
    UFUNCTION(BlueprintCallable) void CanHeal(bool& CanHeal);  // parameters 0x1
};
