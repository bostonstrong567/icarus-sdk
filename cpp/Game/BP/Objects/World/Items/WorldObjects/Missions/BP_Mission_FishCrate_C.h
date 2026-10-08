// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_FishCrate.BP_Mission_FishCrate_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x350, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_FishCrate_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) int32 CurrentWeight;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AFishBoardController* FishingController;  // 0x0348, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mission_FishCrate(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InventoryUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
};
