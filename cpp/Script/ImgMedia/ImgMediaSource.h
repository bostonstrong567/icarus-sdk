// /Script/ImgMedia.ImgMediaSource
// Derives from: UBaseMediaSource > UMediaSource > UObject
// size 0xC8, declared in Engine/Plugins/Media/ImgMedia/Source/ImgMedia/Public/ImgMediaSource.h

UCLASS(EditInlineNew)
class UImgMediaSource : public UBaseMediaSource
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool IsPathRelativeToProjectRoot;  // 0x0088, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFrameRate FrameRateOverride;  // 0x008C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ProxyOverride;  // 0x0098, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FDirectoryPath SequencePath;  // 0x00A8, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<FImgMediaMipMapInfo,1> MipMapInfo;  // 0x00B8, protected

    UFUNCTION(BlueprintCallable) void AddGlobalCamera(AActor* InActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AddTargetObject(AActor* InActor, float Width);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetProxies(TArray<FString>& OutProxies) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetSequencePath() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveGlobalCamera(AActor* InActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveTargetObject(AActor* InActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetMipLevelDistance(float Distance);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSequencePath(FString Path);  // parameters 0x10
};
