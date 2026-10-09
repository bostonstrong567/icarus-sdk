// /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume
// Derives from: UNiagaraDataInterfaceRWBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x158, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceRenderTargetVolume.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) FIntVector Size;  // 0x00D8, size 0xC
    UPROPERTY(EditAnywhere) TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;  // 0x00E4, size 0x1
    UPROPERTY(EditAnywhere) uint8 bInheritUserParameterSettings : 1;  // 0x00E5, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOverrideFormat : 1;  // 0x00E5, mask 0x02
    UPROPERTY(EditAnywhere) FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0x00E8, size 0x20
protected:
    UPROPERTY(Transient) TMap<uint64, UTextureRenderTargetVolume*> ManagedRenderTargets;  // 0x0108, size 0x50
};
