// /Script/Engine.ParticleCurvePair
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleModule.h

USTRUCT()
struct FParticleCurvePair
{
public:
    UPROPERTY() FString CurveName;  // 0x0000, size 0x10
    UPROPERTY() UObject* CurveObject;  // 0x0010, size 0x8
};
