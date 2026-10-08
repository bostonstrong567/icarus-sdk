// /Script/Engine.ParticleModuleAccelerationDragScaleOverLife
// Derives from: UParticleModuleAccelerationBase > UParticleModule > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleAccelerationDragScaleOverLife : public UParticleModuleAccelerationBase
{
public:
    UPROPERTY(Instanced, Deprecated) UDistributionFloat* DragScale;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) FRawDistributionFloat DragScaleRaw;  // 0x0040, size 0x30
};
