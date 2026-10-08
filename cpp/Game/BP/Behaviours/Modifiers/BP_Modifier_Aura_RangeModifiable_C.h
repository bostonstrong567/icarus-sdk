// /Game/BP/Behaviours/Modifiers/BP_Modifier_Aura_RangeModifiable.BP_Modifier_Aura_RangeModifiable_C
// Derives from: UBP_Modifier_Aura_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x3D1, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_Aura_RangeModifiable_C : public UBP_Modifier_Aura_Base_C
{
public:

    UFUNCTION(BlueprintCallable) void UpdateAuraRange(int32 NewRange);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateAuraRangePercent(float NewRangePercent);  // parameters 0x4
};
