// /Script/HairStrandsCore.HairCollisionConstraint
// size 0xA8, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetPhysics.h

USTRUCT()
struct FHairCollisionConstraint
{
    UPROPERTY(EditAnywhere) bool SolveCollision;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) bool ProjectCollision;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere) float StaticFriction;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float KineticFriction;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float StrandsViscosity;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) FIntVector GridDimension;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere) float CollisionRadius;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere) FRuntimeFloatCurve RadiusScale;  // 0x0020, size 0x88
};
