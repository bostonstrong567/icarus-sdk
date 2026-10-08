// /Script/HairStrandsCore.HairGroupsPhysics
// size 0x2C8, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomAssetPhysics.h

USTRUCT()
struct FHairGroupsPhysics
{
    UPROPERTY(EditAnywhere) FHairSolverSettings SolverSettings;  // 0x0000, size 0x38
    UPROPERTY(EditAnywhere) FHairExternalForces ExternalForces;  // 0x0038, size 0x1C
    UPROPERTY(EditAnywhere) FHairMaterialConstraints MaterialConstraints;  // 0x0058, size 0x1D8
    UPROPERTY(EditAnywhere) FHairStrandsParameters StrandsParameters;  // 0x0230, size 0x98
};
