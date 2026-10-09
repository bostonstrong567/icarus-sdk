// /Script/ImgMediaFactory.ImgMediaSettings
// Derives from: UObject
// size 0x68, declared in Engine/Plugins/Media/ImgMedia/Source/ImgMediaFactory/Public/ImgMediaSettings.h

UCLASS(Config=Engine)
class UImgMediaSettings : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Config) FFrameRate DefaultFrameRate;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, Config) float CacheBehindPercentage;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, Config) float CacheSizeGB;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 CacheThreads;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 CacheThreadStackSizeKB;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, Config) float GlobalCacheSizeGB;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, Config) bool UseGlobalCache;  // 0x0044, size 0x1
    UPROPERTY(EditAnywhere, Config) uint32 ExrDecoderThreads;  // 0x0048, size 0x4
private:
    UPROPERTY(EditAnywhere, Config) FString DefaultProxy;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, Config) bool UseDefaultProxy;  // 0x0060, size 0x1
};
