// /Script/Engine.FXSystemAsset
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleSystem.h

UCLASS(Abstract, MinimalAPI)
class UFXSystemAsset : public UObject
{
public:
    UPROPERTY(EditAnywhere) uint32 MaxPoolSize;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) uint32 PoolPrimeSize;  // 0x002C, size 0x4
};
