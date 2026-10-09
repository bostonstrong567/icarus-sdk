// /Script/MediaAssets.MediaTexture
// Derives from: UTexture > UStreamableRenderAsset > UObject
// size 0x260, declared in Engine/Source/Runtime/MediaAssets/Public/MediaTexture.h

UCLASS()
class UMediaTexture : public UTexture
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TextureAddress> AddressX;  // 0x0178, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TextureAddress> AddressY;  // 0x0179, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AutoClear;  // 0x017A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ClearColor;  // 0x017C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool EnableGenMips;  // 0x018C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 NumMips;  // 0x018D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool NewStyleOutput;  // 0x018E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<MediaTextureOutputFormat> OutputFormat;  // 0x018F, size 0x1
    UPROPERTY(Transient, BlueprintReadOnly) float CurrentAspectRatio;  // 0x0190, size 0x4
    UPROPERTY(Transient, BlueprintReadOnly) TEnumAsByte<MediaTextureOrientation> CurrentOrientation;  // 0x0194, size 0x1
protected:
    UPROPERTY(EditAnywhere) UMediaPlayer* MediaPlayer;  // 0x0198, size 0x8
private:
    TSharedPtr<FMediaTextureClockSink,1> ClockSink;  // 0x01A0, not reflected
    FGuid CurrentGuid;  // 0x01B0, not reflected
    FGuid CurrentRenderedGuid;  // 0x01C0, not reflected
    TWeakObjectPtr<UMediaPlayer,FWeakObjectPtr> CurrentPlayer;  // 0x01D0, not reflected
    const FGuid DefaultGuid;  // 0x01D8, not reflected
    FIntPoint Dimensions;  // 0x01E8, not reflected
    FLinearColor LastClearColor;  // 0x01F0, not reflected
    bool LastSrgb;  // 0x0200, not reflected
    TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample> >,1> SampleQueue;  // 0x0208, not reflected
    uint64 Size;  // 0x0218, not reflected
    FWindowsCriticalSection CriticalSection;  // 0x0220, not reflected
    TAtomic<FTimespan> CachedNextSampleTime;  // 0x0248, not reflected
    int32 TextureNumMips;  // 0x0250, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetAspectRatio() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetHeight() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UMediaPlayer* GetMediaPlayer() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTextureNumMips() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetWidth() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);  // parameters 0x8
};
