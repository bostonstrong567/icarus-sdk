// /Script/Niagara.NiagaraDataInterfaceTexture
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x48, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceTexture.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) UTexture* Texture;  // 0x0038, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FIntPoint TextureSize;  // 0x0040, protected
};
