// /Script/Engine.ParticleModuleMeshMaterial
// Derives from: UParticleModuleMaterialBase > UParticleModule > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Particles/Material/ParticleModuleMeshMaterial.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleMeshMaterial : public UParticleModuleMaterialBase
{
public:
    UPROPERTY(EditAnywhere) TArray<UMaterialInterface*> MeshMaterials;  // 0x0030, size 0x10
};
