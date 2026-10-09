// /Game/BP/Building/SoftBuildingData.SoftBuildingData
// size 0x40

USTRUCT()
struct SoftBuildingData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBuildingTypesRowHandle BuildingType;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<ABP_Building_Base_C> SoftBuildingClass;  // 0x0018, size 0x28
};
