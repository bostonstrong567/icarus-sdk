// /Script/HairStrandsCore.HairMaterialConstraints
// size 0x1D8, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetPhysics.h

USTRUCT()
struct FHairMaterialConstraints
{
    UPROPERTY(EditAnywhere) FHairBendConstraint BendConstraint;  // 0x0000, size 0x98
    UPROPERTY(EditAnywhere) FHairStretchConstraint StretchConstraint;  // 0x0098, size 0x98
    UPROPERTY(EditAnywhere) FHairCollisionConstraint CollisionConstraint;  // 0x0130, size 0xA8
};
