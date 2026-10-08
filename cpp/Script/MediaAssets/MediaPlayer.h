// /Script/MediaAssets.MediaPlayer
// Derives from: UObject
// size 0x138, declared in Engine/Source/Runtime/MediaAssets/Public/MediaPlayer.h

UCLASS()
class UMediaPlayer : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FOnMediaPlayerMediaEvent OnEndReached;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMediaPlayerMediaEvent OnMediaClosed;  // 0x0038, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMediaPlayerMediaOpened OnMediaOpened;  // 0x0048, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMediaPlayerMediaOpenFailed OnMediaOpenFailed;  // 0x0058, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMediaPlayerMediaEvent OnPlaybackResumed;  // 0x0068, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMediaPlayerMediaEvent OnPlaybackSuspended;  // 0x0078, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMediaPlayerMediaEvent OnSeekCompleted;  // 0x0088, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMediaPlayerMediaEvent OnTracksChanged;  // 0x0098, size 0x10
    UPROPERTY(BlueprintReadWrite) FTimespan CacheAhead;  // 0x00A8, size 0x8
    UPROPERTY(BlueprintReadWrite) FTimespan CacheBehind;  // 0x00B0, size 0x8
    UPROPERTY(BlueprintReadWrite) FTimespan CacheBehindGame;  // 0x00B8, size 0x8
    UPROPERTY(BlueprintReadWrite) bool NativeAudioOut;  // 0x00C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PlayOnOpen;  // 0x00C1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 Shuffle : 1;  // 0x00C4, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 Loop : 1;  // 0x00C4, mask 0x02
    UPROPERTY(Transient, BlueprintReadOnly) UMediaPlaylist* Playlist;  // 0x00C8, size 0x8
    UPROPERTY(BlueprintReadOnly) int32 PlaylistIndex;  // 0x00D0, size 0x4
    UPROPERTY(BlueprintReadOnly) FTimespan TimeDelay;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere) float HorizontalFieldOfView;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere) float VerticalFieldOfView;  // 0x00E4, size 0x4
    UPROPERTY(EditAnywhere) FRotator ViewRotation;  // 0x00E8, size 0xC
    UPROPERTY() FGuid PlayerGuid;  // 0x0120, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    UMediaPlayer::FOnMediaEvent MediaEvent;  // 0x00F8, private
    TSharedPtr<FMediaPlayerFacade,1> PlayerFacade;  // 0x0110, private
    bool PlayOnNext;  // 0x0130, private
    bool RegisteredWithMediaModule;  // 0x0131, private

    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanPause() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool CanPlaySource(UMediaSource* MediaSource);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool CanPlayUrl(FString Url);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void Close();
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetAudioTrackType(int32 TrackIndex, int32 FormatIndex) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetDesiredPlayerName() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FTimespan GetDuration() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetHorizontalFieldOfView() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetMediaName() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumTrackFormats(EMediaPlayerTrack TrackType, int32 TrackIndex) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumTracks(EMediaPlayerTrack TrackType) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetPlayerName() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UMediaPlaylist* GetPlaylist() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPlaylistIndex() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRate() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetSelectedTrack(EMediaPlayerTrack TrackType) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) FTimespan GetTime() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FTimespan GetTimeDelay() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UMediaTimeStampInfo* GetTimeStamp() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32 TrackIndex) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32 TrackIndex) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetUrl() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetVerticalFieldOfView() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetVideoTrackAspectRatio(int32 TrackIndex, int32 FormatIndex) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FIntPoint GetVideoTrackDimensions(int32 TrackIndex, int32 FormatIndex) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FFloatRange GetVideoTrackFrameRates(int32 TrackIndex, int32 FormatIndex) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetVideoTrackType(int32 TrackIndex, int32 FormatIndex) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetViewRotation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasError() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsBuffering() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsClosed() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsConnecting() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLooping() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPaused() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlaying() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPreparing() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsReady() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool Next();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool OpenFile(FString FilePath);  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool OpenPlaylist(UMediaPlaylist* InPlaylist);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool OpenPlaylistIndex(UMediaPlaylist* InPlaylist, int32 Index);  // parameters 0xD
    UFUNCTION(BlueprintCallable) bool OpenSource(UMediaSource* MediaSource);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OpenSourceLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UMediaSource* MediaSource, const FMediaPlayerOptions& Options, bool& bSuccess);  // parameters 0x59
    UFUNCTION(BlueprintCallable) bool OpenSourceWithOptions(UMediaSource* MediaSource, const FMediaPlayerOptions& Options);  // parameters 0x39
    UFUNCTION(BlueprintCallable) bool OpenUrl(FString Url);  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool Pause();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool Play();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void PlayAndSeek();
    UFUNCTION(BlueprintCallable) bool Previous();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool Reopen();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool Rewind();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool Seek(const FTimespan& Time);  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool SelectTrack(EMediaPlayerTrack TrackType, int32 TrackIndex);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetBlockOnTime(const FTimespan& Time);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetDesiredPlayerName(FName PlayerName);  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool SetLooping(bool Looping);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetMediaOptions(UMediaSource* Options);  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool SetNativeVolume(float Volume);  // parameters 0x5
    UFUNCTION(BlueprintCallable) bool SetRate(float Rate);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetTimeDelay(FTimespan TimeDelay);  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool SetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex);  // parameters 0xD
    UFUNCTION(BlueprintCallable) bool SetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float FrameRate);  // parameters 0xD
    UFUNCTION(BlueprintCallable) bool SetViewField(float Horizontal, float Vertical, bool Absolute);  // parameters 0xA
    UFUNCTION(BlueprintCallable) bool SetViewRotation(const FRotator& Rotation, bool Absolute);  // parameters 0xE
    UFUNCTION(BlueprintCallable, BlueprintPure) bool SupportsRate(float Rate, bool Unthinned) const;  // parameters 0x6
    UFUNCTION(BlueprintCallable, BlueprintPure) bool SupportsScrubbing() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool SupportsSeeking() const;  // parameters 0x1

    // Virtual functions that start here:
    //   GetMediaName
};
