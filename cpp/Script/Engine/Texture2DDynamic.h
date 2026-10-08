// /Script/Engine.Texture2DDynamic
// Derives from: UTexture > UStreamableRenderAsset > UObject
// size 0x190, declared in Engine/Source/Runtime/Engine/Classes/Engine/Texture2DDynamic.h

UCLASS(MinimalAPI)
class UTexture2DDynamic : public UTexture
{
public:
    UPROPERTY(Transient) TEnumAsByte<EPixelFormat> Format;  // 0x0180, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    int32 SizeX;  // 0x0178
    int32 SizeY;  // 0x017C
    uint8 : 1 bIsResolveTarget;  // 0x0181
    int32 NumMips;  // 0x0184
    ESamplerAddressMode SamplerAddressMode;  // 0x0188
};
