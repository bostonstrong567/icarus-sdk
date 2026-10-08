// /Script/Niagara.NiagaraDataInterfaceRenderTargetCube
// Derives from: UNiagaraDataInterfaceRWBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x150, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceRenderTargetCube.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{
public:
    UPROPERTY(EditAnywhere) int32 Size;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;  // 0x00DC, size 0x1
    UPROPERTY(EditAnywhere) uint8 bInheritUserParameterSettings : 1;  // 0x00DD, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOverrideFormat : 1;  // 0x00DD, mask 0x02
    UPROPERTY(EditAnywhere) FNiagaraUserParameterBinding RenderTargetUserParameter;  // 0x00E0, size 0x20
    UPROPERTY(Transient) TMap<uint64, UTextureRenderTargetCube*> ManagedRenderTargets;  // 0x0100, size 0x50
};
