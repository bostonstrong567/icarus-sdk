// /Script/Engine.ParticleModuleLocationBoneSocket
// Derives from: UParticleModuleLocationBase > UParticleModule > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationBoneSocket.h

UCLASS(EditInlineNew)
class UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<ELocationBoneSocketSource> SourceType;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) FVector UniversalOffset;  // 0x0034, size 0xC
    UPROPERTY(EditAnywhere) TArray<FLocationBoneSocketInfo> SourceLocations;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) TEnumAsByte<ELocationBoneSocketSelectionMethod> SelectionMethod;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere) uint8 bUpdatePositionEachFrame : 1;  // 0x0054, mask 0x01
    UPROPERTY() uint8 bOrientMeshEmitters : 1;  // 0x0054, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bInheritBoneVelocity : 1;  // 0x0054, mask 0x04
    UPROPERTY(EditAnywhere) float InheritVelocityScale;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere) FName SkelMeshActorParamName;  // 0x005C, size 0x8
    UPROPERTY(EditAnywhere) int32 NumPreSelectedIndices;  // 0x0064, size 0x4
    EBoneSocketSourceIndexMode SourceIndexMode;  // 0x0068, not reflected
};
