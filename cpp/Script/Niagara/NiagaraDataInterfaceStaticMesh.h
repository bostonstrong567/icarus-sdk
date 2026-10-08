// /Script/Niagara.NiagaraDataInterfaceStaticMesh
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x88, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceStaticMesh.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) ENDIStaticMesh_SourceMode SourceMode;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere) UStaticMesh* DefaultMesh;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) AActor* Source;  // 0x0048, size 0x8
    UPROPERTY(Transient, Instanced) UStaticMeshComponent* SourceComponent;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) FNDIStaticMeshSectionFilter SectionFilter;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere) bool bUsePhysicsBodyVelocity;  // 0x0068, size 0x1
    UPROPERTY(EditAnywhere) TArray<FName> FilteredSockets;  // 0x0070, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    uint32 ChangeId;  // 0x0080
};
