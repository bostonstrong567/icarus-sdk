// /Script/Engine.ParticleModuleLocationSkelVertSurface
// Derives from: UParticleModuleLocationBase > UParticleModule > UObject
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h

UCLASS(EditInlineNew)
class UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<ELocationSkelVertSurfaceSource> SourceType;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) FVector UniversalOffset;  // 0x0034, size 0xC
    UPROPERTY(EditAnywhere) uint8 bUpdatePositionEachFrame : 1;  // 0x0040, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOrientMeshEmitters : 1;  // 0x0040, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bInheritBoneVelocity : 1;  // 0x0040, mask 0x04
    UPROPERTY(EditAnywhere) float InheritVelocityScale;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere) FName SkelMeshActorParamName;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere) TArray<FName> ValidAssociatedBones;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere) uint8 bEnforceNormalCheck : 1;  // 0x0060, mask 0x01
    UPROPERTY(EditAnywhere) FVector NormalToCompare;  // 0x0064, size 0xC
    UPROPERTY(EditAnywhere) float NormalCheckToleranceDegrees;  // 0x0070, size 0x4
    UPROPERTY() float NormalCheckTolerance;  // 0x0074, size 0x4
    UPROPERTY(EditAnywhere) TArray<int32> ValidMaterialIndices;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere) uint8 bInheritVertexColor : 1;  // 0x0088, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bInheritUV : 1;  // 0x0088, mask 0x02
    UPROPERTY(EditAnywhere) uint32 InheritUVChannel;  // 0x008C, size 0x4
};
