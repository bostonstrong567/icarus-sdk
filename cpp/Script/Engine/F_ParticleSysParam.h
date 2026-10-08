// /Script/Engine.ParticleSysParam
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleSystemComponent.h

USTRUCT()
struct FParticleSysParam
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EParticleSysParamType> ParamType;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Scalar;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Scalar_Low;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Vector;  // 0x0014, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Vector_Low;  // 0x0020, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor Color;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Actor;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* Material;  // 0x0038, size 0x8

    // Not reflected:
    FTransform AsyncActorToWorld;  // 0x0040
    FVector AsyncActorVelocity;  // 0x0070
    bool bAsyncDataCopyIsValid;  // 0x007C
};
