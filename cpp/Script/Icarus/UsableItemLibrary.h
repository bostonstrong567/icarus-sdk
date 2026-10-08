// /Script/Icarus.UsableItemLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Inventory/UsableItemLibrary.h

UCLASS()
class UUsableItemLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static bool CanUse(FUseCondition UseCondition, AIcarusPlayerCharacter* Target);  // parameters 0x59
    UFUNCTION(BlueprintCallable) static bool CanUseInventoryItem(UInventory* SourceInventory, int32 SourceLocation, FUsesEnum Use, AIcarusPlayerCharacter* Target);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static bool UseItem(AIcarusPlayerCharacter* Source, UInventory* SourceInventory, int32 SourceLocation, FUsesEnum Use, AIcarusCharacter* Target);  // parameters 0x31
};
