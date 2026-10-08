// /Game/BP/Behaviours/Equippable/BP_EquippableModifier.BP_EquippableModifier_C
// Derives from: UEquippableModifier > UActorComponent > UObject
// size 0xF8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_EquippableModifier_C : public UEquippableModifier
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ItemName;  // 0x00E0, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ItemEquipped();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ItemUnequipped();  // parameters 0x1
};
