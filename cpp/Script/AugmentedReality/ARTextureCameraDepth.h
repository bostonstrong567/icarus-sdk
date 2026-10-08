// /Script/AugmentedReality.ARTextureCameraDepth
// Derives from: UARTexture > UTexture > UStreamableRenderAsset > UObject
// size 0x1A0, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTextures.h

UCLASS(Abstract)
class UARTextureCameraDepth : public UARTexture
{
public:
    UPROPERTY(BlueprintReadOnly) EARDepthQuality DepthQuality;  // 0x0198, size 0x1
    UPROPERTY(BlueprintReadOnly) EARDepthAccuracy DepthAccuracy;  // 0x0199, size 0x1
    UPROPERTY(BlueprintReadOnly) bool bIsTemporallySmoothed;  // 0x019A, size 0x1
};
