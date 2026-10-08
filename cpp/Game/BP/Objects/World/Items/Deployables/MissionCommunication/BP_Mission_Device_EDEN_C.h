// /Game/BP/Objects/World/Items/Deployables/MissionCommunication/BP_Mission_Device_EDEN.BP_Mission_Device_EDEN_C
// Derives from: ABP_Mission_Communication_Upgradeable_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x8A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Device_EDEN_C : public ABP_Mission_Communication_Upgradeable_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0898, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mission_Device_EDEN(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnInventoryItemChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
};
