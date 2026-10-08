// /Game/BP/Objects/World/Items/Deployables/Containers/BP_IceBox.BP_IceBox_C
// Derives from: ABP_DeployableContainerBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x760, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IceBox_C : public ABP_DeployableContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0750, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Icebox;  // 0x0758, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_IceBox(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBecomeInteractedWith();
    UFUNCTION(BlueprintCallable) void OnGeneratorStateUpdated(bool IsActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnItemAdded(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnNoLongerInteractedWith();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
