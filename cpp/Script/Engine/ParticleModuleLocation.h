// /Script/Engine.ParticleModuleLocation
// Derives from: UParticleModuleLocationBase > UParticleModule > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocation.h

UCLASS(EditInlineNew)
class UParticleModuleLocation : public UParticleModuleLocationBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector StartLocation;  // 0x0030, size 0x48
    UPROPERTY(EditAnywhere) float DistributeOverNPoints;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere) float DistributeThreshold;  // 0x007C, size 0x4

    // Virtual functions that start here:
    //   SpawnEx
};
