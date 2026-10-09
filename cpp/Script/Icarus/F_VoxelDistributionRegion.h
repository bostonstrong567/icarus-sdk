// /Script/Icarus.VoxelDistributionRegion
// size 0x80, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/VoxelDistributionRegionLibrary.generated.h

USTRUCT()
struct FVoxelDistributionRegion : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FVoxelSetupDataRowHandle, int32> VoxelDistribution;  // 0x0018, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor VoxelColor;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Brightness;  // 0x0078, size 0x4
};
