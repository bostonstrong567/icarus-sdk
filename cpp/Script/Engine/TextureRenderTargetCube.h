// /Script/Engine.TextureRenderTargetCube
// Derives from: UTextureRenderTarget > UTexture > UStreamableRenderAsset > UObject
// size 0x1A0, declared in Engine/Source/Runtime/Engine/Classes/Engine/TextureRenderTargetCube.h

UCLASS(MinimalAPI)
class UTextureRenderTargetCube : public UTextureRenderTarget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SizeX;  // 0x0180, size 0x4
    UPROPERTY() FLinearColor ClearColor;  // 0x0184, size 0x10
    UPROPERTY() TEnumAsByte<EPixelFormat> OverrideFormat;  // 0x0194, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bHDR : 1;  // 0x0195, mask 0x01
    UPROPERTY() uint8 bForceLinearGamma : 1;  // 0x0195, mask 0x02
};
