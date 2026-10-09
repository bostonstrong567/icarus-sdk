// /Script/Niagara.NiagaraMeshMaterialOverride
// size 0x28, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraMeshRendererProperties.h

USTRUCT()
struct FNiagaraMeshMaterialOverride
{
public:
    UPROPERTY(EditAnywhere) UMaterialInterface* ExplicitMat;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FNiagaraUserParameterBinding UserParamBinding;  // 0x0008, size 0x20
};
