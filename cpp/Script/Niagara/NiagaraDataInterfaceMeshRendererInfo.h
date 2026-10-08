// /Script/Niagara.NiagaraDataInterfaceMeshRendererInfo
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x50, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceMeshRendererInfo.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) UNiagaraMeshRendererProperties* MeshRenderer;  // 0x0038, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<FNDIMeshRendererInfo,1> Info;  // 0x0040, protected
};
