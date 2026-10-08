// /Script/Niagara.NiagaraBakerTextureSettings
// size 0x30, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraBakerSettings.h

USTRUCT()
struct FNiagaraBakerTextureSettings
{
    UPROPERTY(EditAnywhere) FName OutputName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FNiagaraBakerTextureSource SourceBinding;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) uint8 bUseFrameSize : 1;  // 0x0010, mask 0x01
    UPROPERTY(EditAnywhere) FIntPoint FrameSize;  // 0x0014, size 0x8
    UPROPERTY(EditAnywhere) FIntPoint TextureSize;  // 0x001C, size 0x8
    UPROPERTY(EditAnywhere) UTexture2D* GeneratedTexture;  // 0x0028, size 0x8
};
