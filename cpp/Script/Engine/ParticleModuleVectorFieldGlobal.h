// /Script/Engine.ParticleModuleVectorFieldGlobal
// Derives from: UParticleModuleVectorFieldBase > UParticleModule > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldGlobal.h

UCLASS(EditInlineNew)
class UParticleModuleVectorFieldGlobal : public UParticleModuleVectorFieldBase
{
public:
    UPROPERTY(EditAnywhere) uint8 bOverrideGlobalVectorFieldTightness : 1;  // 0x0030, mask 0x01
    UPROPERTY(EditAnywhere) float GlobalVectorFieldScale;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) float GlobalVectorFieldTightness;  // 0x0038, size 0x4
};
