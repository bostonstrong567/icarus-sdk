// /Game/BP/Objects/Components/BP_ProxyMeshComponent.BP_ProxyMeshComponent_C
// Derives from: UProxyMeshComponent > UActorComponent > UObject
// size 0x180, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ProxyMeshComponent_C : public UProxyMeshComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0178, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_ProxyMeshComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetOwnerInventory(UInventoryComponent*& Inventory);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
