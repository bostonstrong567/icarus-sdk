// /Script/Icarus.PendingTypeChange
// size 0x40, declared in Icarus/Source/Icarus/Objects/VoxelResource.h

USTRUCT()
struct FPendingTypeChange
{
    UPROPERTY() FVoxelSetupDataRowHandle NewSetupRow;  // 0x0000, size 0x18
    UPROPERTY() TSoftObjectPtr<UMaterialInterface> NewMaterialOverride;  // 0x0018, size 0x28
};
