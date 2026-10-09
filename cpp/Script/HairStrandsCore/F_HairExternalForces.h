// /Script/HairStrandsCore.HairExternalForces
// size 0x1C, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetPhysics.h

USTRUCT()
struct FHairExternalForces
{
public:
    UPROPERTY(EditAnywhere) FVector GravityVector;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere) float AirDrag;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) FVector AirVelocity;  // 0x0010, size 0xC
};
