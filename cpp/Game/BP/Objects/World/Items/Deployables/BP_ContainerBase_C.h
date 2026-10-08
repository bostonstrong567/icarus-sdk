// /Game/BP/Objects/World/Items/Deployables/BP_ContainerBase.BP_ContainerBase_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x338, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ContainerBase_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* ItemRemovedSound;  // 0x0330, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ContainerBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnItemRemoved(UInventory* Inventory, int32 Location, const FItemData& Item);  // parameters 0x200
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
