// /Script/Engine.TextureRenderTarget2D
// Derives from: UTextureRenderTarget > UTexture > UStreamableRenderAsset > UObject
// size 0x1B0, declared in Engine/Source/Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h

UCLASS(MinimalAPI)
class UTextureRenderTarget2D : public UTextureRenderTarget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 SizeX;  // 0x0180, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 SizeY;  // 0x0184, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor ClearColor;  // 0x0188, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TextureAddress> AddressX;  // 0x0198, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TextureAddress> AddressY;  // 0x0199, size 0x1
    UPROPERTY() uint8 bForceLinearGamma : 1;  // 0x019A, mask 0x01
    UPROPERTY(Deprecated) uint8 bHDR : 1;  // 0x019A, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bGPUSharedFlag : 1;  // 0x019A, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ETextureRenderTargetFormat> RenderTargetFormat;  // 0x019B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAutoGenerateMips : 1;  // 0x019C, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<TextureFilter> MipsSamplerFilter;  // 0x019D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<TextureAddress> MipsAddressU;  // 0x019E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<TextureAddress> MipsAddressV;  // 0x019F, size 0x1
    UPROPERTY() TEnumAsByte<EPixelFormat> OverrideFormat;  // 0x01A0, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    int32 NumMips;  // 0x01A4, private
};
