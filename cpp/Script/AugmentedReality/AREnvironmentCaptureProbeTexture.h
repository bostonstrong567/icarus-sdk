// /Script/AugmentedReality.AREnvironmentCaptureProbeTexture
// Derives from: UTextureCube > UTexture > UStreamableRenderAsset > UObject
// size 0x1F0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTextures.h

UCLASS(Abstract)
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
public:
    UPROPERTY(BlueprintReadOnly) EARTextureType TextureType;  // 0x01D0, size 0x1
    UPROPERTY(BlueprintReadOnly) float Timestamp;  // 0x01D4, size 0x4
    UPROPERTY(BlueprintReadOnly) FGuid ExternalTextureGuid;  // 0x01D8, size 0x10
    UPROPERTY(BlueprintReadOnly) FVector2D Size;  // 0x01E8, size 0x8
};
