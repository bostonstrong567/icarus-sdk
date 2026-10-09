// /Script/Niagara.NDIStaticMeshSectionFilter
// size 0x10, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceStaticMesh.h

USTRUCT()
struct FNDIStaticMeshSectionFilter
{
public:
    UPROPERTY(EditAnywhere) TArray<int32> AllowedMaterialSlots;  // 0x0000, size 0x10
};
