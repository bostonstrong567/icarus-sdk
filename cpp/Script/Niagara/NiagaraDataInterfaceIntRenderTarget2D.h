// /Script/Niagara.NiagaraDataInterfaceIntRenderTarget2D
// Derives from: UNiagaraDataInterfaceRWBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x150, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceIntRenderTarget2D.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) FIntPoint Size;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere) FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0x00E0, size 0x20
protected:
    UPROPERTY(Transient) TMap<uint64, UTextureRenderTarget2D*> ManagedRenderTargets;  // 0x0100, size 0x50
};
