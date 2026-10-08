// /Script/Niagara.NiagaraMeshRendererMeshProperties
// size 0x28, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraMeshRendererProperties.h

USTRUCT()
struct FNiagaraMeshRendererMeshProperties
{
    UPROPERTY(EditAnywhere) UStaticMesh* Mesh;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FVector Scale;  // 0x0008, size 0xC
    UPROPERTY(EditAnywhere) FVector PivotOffset;  // 0x0014, size 0xC
    UPROPERTY(EditAnywhere) ENiagaraMeshPivotOffsetSpace PivotOffsetSpace;  // 0x0020, size 0x1
};
