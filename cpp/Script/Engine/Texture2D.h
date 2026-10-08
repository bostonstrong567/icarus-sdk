// /Script/Engine.Texture2D
// Derives from: UTexture > UStreamableRenderAsset > UObject
// size 0x1A0, declared in Engine/Source/Runtime/Engine/Classes/Engine/Texture2D.h

UCLASS(MinimalAPI)
class UTexture2D : public UTexture
{
public:
    UPROPERTY(Transient) int32 LevelIndex;  // 0x0178, size 0x4
    UPROPERTY() int32 FirstResourceMemMip;  // 0x017C, size 0x4
    UPROPERTY(Transient) uint8 bTemporarilyDisableStreaming : 1;  // 0x0180, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TextureAddress> AddressX;  // 0x0181, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TextureAddress> AddressY;  // 0x0182, size 0x1
    UPROPERTY() FIntPoint ImportedSize;  // 0x0184, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FTexturePlatformData * PlatformData;  // 0x0190
    FTexture2DResourceMem * ResourceMem;  // 0x0198

    UFUNCTION(BlueprintCallable, BlueprintPure) int32 Blueprint_GetSizeX() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 Blueprint_GetSizeY() const;  // parameters 0x4

    // Virtual functions that start here:
    //   IsVirtualTexturedWithContinuousUpdate, IsVirtualTexturedWithSinglePhysicalSpace
    //   RefreshSamplerStates
};
