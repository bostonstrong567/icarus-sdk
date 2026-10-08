// /Script/Niagara.NiagaraDataInterfaceSkeletalMesh
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0xC8, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceSkeletalMesh.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) ENDISkeletalMesh_SourceMode SourceMode;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere) AActor* Source;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) FNiagaraUserParameterBinding MeshUserParameter;  // 0x0048, size 0x20
    UPROPERTY(Transient, Instanced) USkeletalMeshComponent* SourceComponent;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere) ENDISkeletalMesh_SkinningMode SkinningMode;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere) TArray<FName> SamplingRegions;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere) int32 WholeMeshLOD;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere) TArray<FName> FilteredBones;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere) TArray<FName> FilteredSockets;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere) FName ExcludeBoneName;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere) uint8 bExcludeBone : 1;  // 0x00B8, mask 0x01
    UPROPERTY(EditAnywhere) int32 UvSetIndex;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere) bool bRequireCurrentFrameData;  // 0x00C0, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    uint32 ChangeId;  // 0x00C4
};
