// /Script/Icarus.MissionNPCHeldItem
// size 0x60, declared in Icarus/Source/Icarus/AI/MissionNPCData.h

USTRUCT()
struct FMissionNPCHeldItem
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStreamableRenderAsset> HeldItemMesh;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AttachSocketName;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform RelativeTransformOffset;  // 0x0030, size 0x30
};
