// /Game/BP/DropShipEditor/BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C
// Derives from: ABP_DropShip_C > AIcarusRocket > AIcarusActor > AActor > UObject
// size 0x4E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DropShip_RespawnPod_C : public ABP_DropShip_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04D8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void CheckClientPartsReady(bool& PartsReady);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_DropShip_RespawnPod(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDropshipLoadoutItems(FItemData& TopPart, FItemData& MidPart, FItemData& BottomPart);  // parameters 0x5D0
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetInteraction(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnShipParts();
};
