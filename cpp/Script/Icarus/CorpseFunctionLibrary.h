// /Script/Icarus.CorpseFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Misc/CorpseFunctionLibrary.h

UCLASS()
class UCorpseFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static bool IsProjectilePickable(AActor* AttachedActor, bool bSkipAllowPickUp);  // parameters 0xA
    UFUNCTION(BlueprintCallable) static void MoveActorArrowsToCorpseInventory(AActor* Deadin, FInventoryIDEnum InventoryID);  // parameters 0x18
};
