// /Script/Engine.Texture
// Derives from: UStreamableRenderAsset > UObject
// size 0x180, declared in Engine/Source/Runtime/Engine/Classes/Engine/Texture.h

UCLASS(Abstract, MinimalAPI)
class UTexture : public UStreamableRenderAsset, public IInterface_AssetUserData
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LODBias;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TextureCompressionSettings> CompressionSettings;  // 0x007C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TextureFilter> Filter;  // 0x007D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ETextureMipLoadOptions MipLoadOptions;  // 0x007E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TextureGroup> LODGroup;  // 0x007F, size 0x1
    UPROPERTY(EditAnywhere) FPerPlatformFloat Downscale;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) ETextureDownscaleOptions DownscaleOptions;  // 0x0084, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 SRGB : 1;  // 0x0085, mask 0x01
    UPROPERTY() uint8 bNoTiling : 1;  // 0x0085, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 VirtualTextureStreaming : 1;  // 0x0085, mask 0x04
    UPROPERTY() uint8 CompressionYCoCg : 1;  // 0x0085, mask 0x08
    UPROPERTY(Transient) uint8 bNotOfflineProcessed : 1;  // 0x0085, mask 0x10
    TFieldPtrAccessor<FTextureResource> Resource;  // 0x00B0, not reflected
    FTextureReference TextureReference;  // 0x0140, not reflected
    FRenderCommandFence ReleaseFence;  // 0x0168, not reflected
protected:
    UPROPERTY(EditAnywhere) TArray<UAssetUserData*> AssetUserData;  // 0x0088, size 0x10
private:
    UPROPERTY() FGuid LightingGuid;  // 0x0068, size 0x10
    UPROPERTY(Transient) uint8 bAsyncResourceReleaseHasBeenStarted : 1;  // 0x0085, mask 0x20
    FTextureResource * PrivateResource;  // 0x0098, not reflected
    FTextureResource * PrivateResourceRenderThread;  // 0x00A0, not reflected

    // Virtual functions that start here:
    //   CalcTextureMemorySizeEnum, CreateResource, GetAverageBrightness, GetCookedPlatformData
    //   GetExternalTextureGuid, GetMaterialType, GetRunningPlatformData, GetSurfaceHeight, GetSurfaceWidth
    //   GetVirtualTextureBuildSettings, IsCurrentlyVirtualTextured, UpdateResource
};
