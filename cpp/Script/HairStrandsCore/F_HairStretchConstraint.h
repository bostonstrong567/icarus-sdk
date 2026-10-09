// /Script/HairStrandsCore.HairStretchConstraint
// size 0x98, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetPhysics.h

USTRUCT()
struct FHairStretchConstraint
{
public:
    UPROPERTY(EditAnywhere) bool SolveStretch;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) bool ProjectStretch;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere) float StretchDamping;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float StretchStiffness;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve StretchScale;  // 0x0010, size 0x88
};
