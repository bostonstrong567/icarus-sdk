// /Game/BP/Behaviours/Equippable/BP_EquippableModifier_GlobalStat.BP_EquippableModifier_GlobalStat_C
// Derives from: UBP_EquippableModifier_C > UEquippableModifier > UActorComponent > UObject
// size 0xF8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_EquippableModifier_GlobalStat_C : public UBP_EquippableModifier_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ItemEquipped();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ItemUnequipped();  // parameters 0x1
};
