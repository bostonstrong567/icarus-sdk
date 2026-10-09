// /Script/Niagara.NiagaraMaterialOverride
// size 0x18, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponent.h

USTRUCT()
struct FNiagaraMaterialOverride
{
public:
    UPROPERTY() UMaterialInterface* Material;  // 0x0000, size 0x8
    UPROPERTY() uint32 MaterialSubIndex;  // 0x0008, size 0x4
    UPROPERTY() UNiagaraRendererProperties* EmitterRendererProperty;  // 0x0010, size 0x8
};
