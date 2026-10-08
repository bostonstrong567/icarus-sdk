// /Script/GeometryCache.GeometryCacheComponent
// Derives from: UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x4E0, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheComponent.h

UCLASS(Config=Engine)
class UGeometryCacheComponent : public UMeshComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UGeometryCache* GeometryCache;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) bool bRunning;  // 0x0480, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) bool bLooping;  // 0x0481, size 0x1
    UPROPERTY(EditAnywhere) bool bExtrapolateFrames;  // 0x0482, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float StartTimeOffset;  // 0x0484, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float PlaybackSpeed;  // 0x0488, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MotionVectorScale;  // 0x048C, size 0x4
    UPROPERTY(EditAnywhere) int32 NumTracks;  // 0x0490, size 0x4
    UPROPERTY(EditAnywhere, Transient) float ElapsedTime;  // 0x0494, size 0x4
    UPROPERTY(BlueprintReadOnly) float Duration;  // 0x04CC, size 0x4
    UPROPERTY(EditAnywhere) bool bManualTick;  // 0x04D0, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    FBoxSphereBounds LocalBounds;  // 0x0498, protected
    TArray<FTrackRenderData,TSizedDefaultAllocator<32> > TrackSections;  // 0x04B8, protected
    float PlayDirection;  // 0x04C8, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetAnimationTime() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetDuration() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMotionVectorScale() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumberOfFrames() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPlaybackDirection() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPlaybackSpeed() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetStartTimeOffset() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsExtrapolatingFrames() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLooping() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlaying() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlayingReversed() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Pause();
    UFUNCTION(BlueprintCallable) void Play();
    UFUNCTION(BlueprintCallable) void PlayFromStart();
    UFUNCTION(BlueprintCallable) void PlayReversed();
    UFUNCTION(BlueprintCallable) void PlayReversedFromEnd();
    UFUNCTION(BlueprintCallable) void SetExtrapolateFrames(bool bNewExtrapolating);  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool SetGeometryCache(UGeometryCache* NewGeomCache);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetLooping(bool bNewLooping);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetMotionVectorScale(float NewMotionVectorScale);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPlaybackSpeed(float NewPlaybackSpeed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetStartTimeOffset(float NewStartTimeOffset);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Stop();
    UFUNCTION(BlueprintCallable) void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);  // parameters 0x7
};
