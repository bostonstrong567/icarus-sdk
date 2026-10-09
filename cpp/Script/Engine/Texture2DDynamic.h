// /Script/Engine.Texture2DDynamic
// Derives from: UTexture > UStreamableRenderAsset > UObject
// size 0x190, declared in Engine/Source/Runtime/Engine/Classes/Engine/Texture2DDynamic.h

UCLASS(MinimalAPI)
class UTexture2DDynamic : public UTexture
{
public:
    int32 SizeX;  // 0x0178, not reflected
    int32 SizeY;  // 0x017C, not reflected
    UPROPERTY(Transient) TEnumAsByte<EPixelFormat> Format;  // 0x0180, size 0x1
    uint8 : 1 bIsResolveTarget;  // 0x0181, not reflected
    int32 NumMips;  // 0x0184, not reflected
    ESamplerAddressMode SamplerAddressMode;  // 0x0188, not reflected
};
