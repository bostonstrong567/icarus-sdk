// /Game/BP/Behaviours/Inventory/BPI_LinkedActorInventoryRedirector.BPI_LinkedActorInventoryRedirector_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPI_LinkedActorInventoryRedirector_C : public UInterface
{
public:
    UFUNCTION(BlueprintCallable) void GetRedirectedInventoryComponent(UInventoryComponent*& InventoryComponent);  // parameters 0x8
};
