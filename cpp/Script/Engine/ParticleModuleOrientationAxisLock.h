// /Script/Engine.ParticleModuleOrientationAxisLock
// Derives from: UParticleModuleOrientationBase > UParticleModule > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Particles/Orientation/ParticleModuleOrientationAxisLock.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EParticleAxisLock> LockAxisFlags;  // 0x0030, size 0x1

    // Virtual functions that start here:
    //   SetLockAxis
};
