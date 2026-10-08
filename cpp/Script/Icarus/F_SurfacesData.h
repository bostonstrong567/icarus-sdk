// /Script/Icarus.SurfacesData
// size 0xA8, declared in Icarus/Source/Icarus/IcarusGenerated/Surfaces/SurfacesRowHandle.h

USTRUCT()
struct FSurfacesData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UPhysicalMaterial> PhysicalMaterial;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EPhysicalSurface> SurfaceType;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UParticleSystem> ParticleSystem;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UNiagaraSystem* NiagaraSystem;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPlayerFootstepAudioDataRowHandle PlayerFootstepAudioData;  // 0x0078, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESurfaceFMODParam FMODParam;  // 0x0090, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSurfaceAudioReflectionData AudioReflectionData;  // 0x0094, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AIPerceptionVolumeMultiplier;  // 0x00A0, size 0x4
};
