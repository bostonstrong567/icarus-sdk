// /Script/HairStrandsCore.HairGroupInfo
// size 0x18, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAsset.h

USTRUCT()
struct FHairGroupInfo
{
    UPROPERTY(EditAnywhere) int32 GroupID;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) int32 NumCurves;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) int32 NumGuides;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) int32 NumCurveVertices;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) int32 NumGuideVertices;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float MaxCurveLength;  // 0x0014, size 0x4
};
