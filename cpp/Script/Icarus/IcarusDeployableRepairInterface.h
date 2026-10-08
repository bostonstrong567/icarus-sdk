// /Script/Icarus.IcarusDeployableRepairInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Objects/IIcarusDeployableRepairAbility.h

UCLASS(Abstract)
class UIcarusDeployableRepairInterface : public UInterface
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool CanRepairItem(const FItemData& Item) const;  // parameters 0x1F1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool RepairHasShelter(AIcarusPlayerCharacter* CraftingPlayer) const;  // parameters 0x9
};
