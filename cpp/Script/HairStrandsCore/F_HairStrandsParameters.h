// /Script/HairStrandsCore.HairStrandsParameters
// size 0x98, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetPhysics.h

USTRUCT()
struct FHairStrandsParameters
{
    UPROPERTY(EditAnywhere) EGroomStrandsSize StrandsSize;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) float StrandsDensity;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float StrandsSmoothing;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float StrandsThickness;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve ThicknessScale;  // 0x0010, size 0x88
};
