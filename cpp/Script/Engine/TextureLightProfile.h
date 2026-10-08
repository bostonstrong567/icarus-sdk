// /Script/Engine.TextureLightProfile
// Derives from: UTexture2D > UTexture > UStreamableRenderAsset > UObject
// size 0x1B0, declared in Engine/Source/Runtime/Engine/Classes/Engine/TextureLightProfile.h

UCLASS(MinimalAPI)
class UTextureLightProfile : public UTexture2D
{
public:
    UPROPERTY(EditAnywhere) float Brightness;  // 0x01A0, size 0x4
    UPROPERTY(EditAnywhere) float TextureMultiplier;  // 0x01A4, size 0x4
};
