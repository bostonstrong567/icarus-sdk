// /Script/Icarus.MilkFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Milk/MilkFunctionLibrary.h

UCLASS(MinimalAPI)
class UMilkFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static int32 FillContainerWithMilk(int32 Units, UInventory* Inventory, int32 Location);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static int32 FillContainerWithMilkActor(UObject* WorldContextObject, int32 Units, AIcarusItem* Item);  // parameters 0x1C
    UFUNCTION() static void UpdateAlterations(const FAlterationsEnum& ExternalAlteration, FCustomProperties& CustomProperties, const FItemData& Item);  // parameters 0x250
};
