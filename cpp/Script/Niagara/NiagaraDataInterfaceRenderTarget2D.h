// /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
// Derives from: UNiagaraDataInterfaceRWBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x1A8, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceRenderTarget2D.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
public:
    UPROPERTY(EditAnywhere) FIntPoint Size;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere) ENiagaraMipMapGeneration MipMapGeneration;  // 0x00E0, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;  // 0x00E1, size 0x1
    UPROPERTY(EditAnywhere) uint8 bInheritUserParameterSettings : 1;  // 0x00E2, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOverrideFormat : 1;  // 0x00E2, mask 0x02
    UPROPERTY(EditAnywhere) FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0x00E8, size 0x20
    UPROPERTY(Transient) TMap<uint64, UTextureRenderTarget2D*> ManagedRenderTargets;  // 0x0158, size 0x50

    // Not reflected: the engine's scripting cannot see these.
    TMap<unsigned __int64,FRenderTarget2DRWInstanceData_GameThread *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned __int64,FRenderTarget2DRWInstanceData_GameThread *,0> > SystemInstancesToProxyData_GT;  // 0x0108, protected
};
