// /Script/Icarus.VoxelSaveData
// size 0x38, declared in Icarus/Source/Icarus/Objects/VoxelStructs.h

USTRUCT()
struct FVoxelSaveData
{
    UPROPERTY(SaveGame) TArray<FVoxelMinedSphere> MinedSpheres;  // 0x0000, size 0x10
    UPROPERTY(SaveGame) bool bIsVoxelFullyMined;  // 0x0010, size 0x1
    UPROPERTY(SaveGame) int32 TotalUnminedVoxels;  // 0x0014, size 0x4
    UPROPERTY(SaveGame) int32 CurrentUnminedVoxels;  // 0x0018, size 0x4
    UPROPERTY(SaveGame) int32 NumResourcesGranted;  // 0x001C, size 0x4
    UPROPERTY(SaveGame) FVector VoxelActorLocation;  // 0x0020, size 0xC
    UPROPERTY(SaveGame) float TotalResourceCount;  // 0x002C, size 0x4
    UPROPERTY(SaveGame) FName VoxelResourceOverride;  // 0x0030, size 0x8
};
