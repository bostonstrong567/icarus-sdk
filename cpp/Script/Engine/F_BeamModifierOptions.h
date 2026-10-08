// /Script/Engine.BeamModifierOptions
// size 0x4, declared in Engine/Source/Runtime/Engine/Classes/Particles/Beam/ParticleModuleBeamModifier.h

USTRUCT()
struct FBeamModifierOptions
{
    UPROPERTY(EditAnywhere) uint8 bModify : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bScale : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bLock : 1;  // 0x0000, mask 0x04
};
