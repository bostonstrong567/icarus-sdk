// /Script/HairStrandsCore.HairDecimationSettings
// size 0x8, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetInterpolation.h

USTRUCT()
struct FHairDecimationSettings
{
public:
    UPROPERTY(EditAnywhere) float CurveDecimation;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float VertexDecimation;  // 0x0004, size 0x4
};
