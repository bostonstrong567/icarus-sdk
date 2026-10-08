// /Game/BP/Objects/World/Items/Deployables/Networks/BPS_FlowMeterData.BPS_FlowMeterData
// size 0x28

USTRUCT()
struct BPS_FlowMeterData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum NetworkType;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ValidNetwork;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Supply;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Demand;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentStored;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxStorage;  // 0x0020, size 0x4
};
