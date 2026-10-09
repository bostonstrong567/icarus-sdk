// /Script/Niagara.NiagaraDataInterfaceCubeTexture
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x48, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceCubeTexture.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) UTextureCube* Texture;  // 0x0038, size 0x8
protected:
    FIntPoint TextureSize;  // 0x0040, not reflected
};
