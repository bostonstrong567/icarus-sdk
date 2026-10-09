// /Script/Engine.Texture2D
// Derives from: UTexture > UStreamableRenderAsset > UObject
// size 0x1A0, declared in Engine/Source/Runtime/Engine/Classes/Engine/Texture2D.h

UCLASS(MinimalAPI)
class UTexture2D : public UTexture
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Transient) int32 LevelIndex;  // 0x0178, size 0x4
    UPROPERTY() int32 FirstResourceMemMip;  // 0x017C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TextureAddress> AddressX;  // 0x0181, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TextureAddress> AddressY;  // 0x0182, size 0x1
    FTexturePlatformData * PlatformData;  // 0x0190, not reflected
    FTexture2DResourceMem * ResourceMem;  // 0x0198, not reflected
private:
    UPROPERTY(Transient) uint8 bTemporarilyDisableStreaming : 1;  // 0x0180, mask 0x01
    UPROPERTY() FIntPoint ImportedSize;  // 0x0184, size 0x8
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 Blueprint_GetSizeX() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 Blueprint_GetSizeY() const;  // parameters 0x4

    // Virtual functions that start here:
    //   IsVirtualTexturedWithContinuousUpdate, IsVirtualTexturedWithSinglePhysicalSpace
    //   RefreshSamplerStates
};
