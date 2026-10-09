// /Script/HairStrandsCore.HairBendConstraint
// size 0x98, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetPhysics.h

USTRUCT()
struct FHairBendConstraint
{
public:
    UPROPERTY(EditAnywhere) bool SolveBend;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) bool ProjectBend;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere) float BendDamping;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float BendStiffness;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve BendScale;  // 0x0010, size 0x88
};
