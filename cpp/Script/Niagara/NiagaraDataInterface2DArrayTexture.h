// /Script/Niagara.NiagaraDataInterface2DArrayTexture
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x50, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterface2DArrayTexture.h

UCLASS(EditInlineNew)
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) UTexture2DArray* Texture;  // 0x0038, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FIntVector TextureSize;  // 0x0040, protected
};
