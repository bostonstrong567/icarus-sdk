// /Script/Icarus.DeviceDataRow
// size 0x48, declared in Icarus/Source/Icarus/Systems/ResourceNetworks/ResourceNetworkInspectorData.h

USTRUCT()
struct FDeviceDataRow
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RowId;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DeviceName;  // 0x0008, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDeviceState DeviceState;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText FlowRateText;  // 0x0028, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsInRate;  // 0x0040, size 0x1
};
