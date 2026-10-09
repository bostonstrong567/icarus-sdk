// /Game/BP/Building/SoftBuildingGroupArray.SoftBuildingGroupArray
// size 0x18

USTRUCT()
struct SoftBuildingGroupArray
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName BuildingTypeName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<SoftBuildingData> BuildingsTypes;  // 0x0008, size 0x10
};
