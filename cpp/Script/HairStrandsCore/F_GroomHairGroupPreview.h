// /Script/HairStrandsCore.GroomHairGroupPreview
// size 0x20, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomImportOptions.h

USTRUCT()
struct FGroomHairGroupPreview
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GroupID;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurveCount;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GuideCount;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHairGroupsInterpolation InterpolationSettings;  // 0x000C, size 0x14
};
