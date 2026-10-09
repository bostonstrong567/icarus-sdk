// /Script/Icarus.IcarusItemFactory
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Actors/IcarusItemFactory.h

UCLASS(MinimalAPI)
class UIcarusItemFactory : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static AIcarusItem* FinishSpawningItemActor(AIcarusItem* SpawnedItem, const FTransform& SpawnTransform);  // parameters 0x48
    UFUNCTION(BlueprintCallable) static bool GetItemDataContextParams(const FItemData& ItemData, EIcarusItemContext ItemContext, TSubclassOf<AIcarusItem>& OutActorClass, TSoftObjectPtr<UStreamableRenderAsset>& OutMeshPtr);  // parameters 0x229
    UFUNCTION(BlueprintCallable) static AIcarusItem* SpawnItemActor(UObject* WorldContextObject, const FItemData& ItemData, EIcarusItemContext ItemContext, const FTransform& SpawnTransform, const FIcarusItemSpawnParameters& SpawnParameters, bool bAllowSpawningByClient);  // parameters 0x2D0
};
