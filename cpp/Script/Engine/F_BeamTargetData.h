// /Script/Engine.BeamTargetData
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h

USTRUCT()
struct FBeamTargetData
{
public:
    UPROPERTY(EditAnywhere) FName TargetName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) float TargetPercentage;  // 0x0008, size 0x4
};
