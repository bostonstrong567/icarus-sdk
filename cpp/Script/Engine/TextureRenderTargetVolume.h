// /Script/Engine.TextureRenderTargetVolume
// Derives from: UTextureRenderTarget > UTexture > UStreamableRenderAsset > UObject
// size 0x1A0, declared in Engine/Source/Runtime/Engine/Classes/Engine/TextureRenderTargetVolume.h

UCLASS(MinimalAPI)
class UTextureRenderTargetVolume : public UTextureRenderTarget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SizeX;  // 0x0180, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SizeY;  // 0x0184, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SizeZ;  // 0x0188, size 0x4
    UPROPERTY() FLinearColor ClearColor;  // 0x018C, size 0x10
    UPROPERTY() TEnumAsByte<EPixelFormat> OverrideFormat;  // 0x019C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bHDR : 1;  // 0x019D, mask 0x01
    UPROPERTY() uint8 bForceLinearGamma : 1;  // 0x019D, mask 0x02
};
