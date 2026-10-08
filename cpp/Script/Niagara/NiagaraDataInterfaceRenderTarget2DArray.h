// /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
// Derives from: UNiagaraDataInterfaceRWBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x158, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceRenderTarget2DArray.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{
public:
    UPROPERTY(EditAnywhere) FIntVector Size;  // 0x00D8, size 0xC
    UPROPERTY(EditAnywhere) TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;  // 0x00E4, size 0x1
    UPROPERTY(EditAnywhere) uint8 bInheritUserParameterSettings : 1;  // 0x00E5, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOverrideFormat : 1;  // 0x00E5, mask 0x02
    UPROPERTY(EditAnywhere) FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0x00E8, size 0x20
    UPROPERTY(Transient) TMap<uint64, UTextureRenderTarget2DArray*> ManagedRenderTargets;  // 0x0108, size 0x50
};
