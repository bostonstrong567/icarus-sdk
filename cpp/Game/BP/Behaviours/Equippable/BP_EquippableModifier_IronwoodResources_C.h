// /Game/BP/Behaviours/Equippable/BP_EquippableModifier_IronwoodResources.BP_EquippableModifier_IronwoodResources_C
// Derives from: UEquippableModifier > UActorComponent > UObject
// size 0xFC, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_EquippableModifier_IronwoodResources_C : public UEquippableModifier
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ItemName;  // 0x00E0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ID;  // 0x00F8, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ItemEquipped();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ItemUnequipped();  // parameters 0x1
};
