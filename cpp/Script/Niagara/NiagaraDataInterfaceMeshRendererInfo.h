// /Script/Niagara.NiagaraDataInterfaceMeshRendererInfo
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x50, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceMeshRendererInfo.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) UNiagaraMeshRendererProperties* MeshRenderer;  // 0x0038, size 0x8
    TSharedPtr<FNDIMeshRendererInfo,1> Info;  // 0x0040, not reflected
};
