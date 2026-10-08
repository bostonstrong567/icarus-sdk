// /Script/AugmentedReality.ARTexture
// Derives from: UTexture > UStreamableRenderAsset > UObject
// size 0x1A0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTextures.h

UCLASS(Abstract)
class UARTexture : public UTexture
{
public:
    UPROPERTY(BlueprintReadOnly) EARTextureType TextureType;  // 0x0178, size 0x1
    UPROPERTY(BlueprintReadOnly) float Timestamp;  // 0x017C, size 0x4
    UPROPERTY(BlueprintReadOnly) FGuid ExternalTextureGuid;  // 0x0180, size 0x10
    UPROPERTY(BlueprintReadOnly) FVector2D Size;  // 0x0190, size 0x8
};
