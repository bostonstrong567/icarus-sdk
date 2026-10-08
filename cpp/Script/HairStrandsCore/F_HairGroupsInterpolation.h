// /Script/HairStrandsCore.HairGroupsInterpolation
// size 0x14, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomBuilder.h

USTRUCT()
struct FHairGroupsInterpolation
{
    UPROPERTY(EditAnywhere) FHairDecimationSettings DecimationSettings;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FHairInterpolationSettings InterpolationSettings;  // 0x0008, size 0xC
};
