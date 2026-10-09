// /Script/UMG.RadialBoxSettings
// size 0x10, declared in Engine/Source/Runtime/UMG/Public/Components/RadialBoxSettings.h

USTRUCT()
struct FRadialBoxSettings
{
public:
    UPROPERTY(EditAnywhere) float StartingAngle;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) bool bDistributeItemsEvenly;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere) float AngleBetweenItems;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float SectorCentralAngle;  // 0x000C, size 0x4
};
