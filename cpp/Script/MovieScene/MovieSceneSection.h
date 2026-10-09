// /Script/MovieScene.MovieSceneSection
// Derives from: UMovieSceneSignedObject > UObject
// size 0xE8, declared in Engine/Source/Runtime/MovieScene/Public/MovieSceneSection.h

UCLASS(Abstract, MinimalAPI)
class UMovieSceneSection : public UMovieSceneSignedObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) FMovieSceneSectionEvalOptions EvalOptions;  // 0x0050, size 0x2
    UPROPERTY(EditAnywhere) FMovieSceneEasingSettings Easing;  // 0x0058, size 0x38
    UPROPERTY(EditAnywhere) FMovieSceneFrameRange SectionRange;  // 0x0090, size 0x10
protected:
    UPROPERTY(Deprecated) float StartTime;  // 0x00B4, size 0x4
    UPROPERTY(Deprecated) float EndTime;  // 0x00B8, size 0x4
    UPROPERTY(Deprecated) float PreRollTime;  // 0x00BC, size 0x4
    UPROPERTY(Deprecated) float PostRollTime;  // 0x00C0, size 0x4
    UPROPERTY(Deprecated) uint8 bIsInfinite : 1;  // 0x00C4, mask 0x01
    UPROPERTY() bool bSupportsInfiniteRange;  // 0x00C8, size 0x1
    UPROPERTY() FOptionalMovieSceneBlendType BlendType;  // 0x00C9, size 0x2
    TSharedPtr<FMovieSceneChannelProxy,0> ChannelProxy;  // 0x00D0, not reflected
    EMovieSceneChannelProxyType ChannelProxyType;  // 0x00E0, not reflected
private:
    UPROPERTY(EditAnywhere) FFrameNumber PreRollFrames;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere) FFrameNumber PostRollFrames;  // 0x00A4, size 0x4
    UPROPERTY() int32 RowIndex;  // 0x00A8, size 0x4
    UPROPERTY() int32 OverlapPriority;  // 0x00AC, size 0x4
    UPROPERTY(EditAnywhere) uint8 bIsActive : 1;  // 0x00B0, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bIsLocked : 1;  // 0x00B0, mask 0x02
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FOptionalMovieSceneBlendType GetBlendType() const;  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) EMovieSceneCompletionMode GetCompletionMode() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetOverlapPriority() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPostRollFrames() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPreRollFrames() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetRowIndex() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsActive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLocked() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetBlendType(EMovieSceneBlendType InBlendType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetIsActive(bool bInIsActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetIsLocked(bool bInIsLocked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetOverlapPriority(int32 NewPriority);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPostRollFrames(int32 InPostRollFrames);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPreRollFrames(int32 InPreRollFrames);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetRowIndex(int32 NewRowIndex);  // parameters 0x4

    // Virtual functions that start here:
    //   CacheChannelProxy, GetAutoSizeRange, GetKeyStruct, GetOffsetTime, GetReferencedBindings
    //   GetSnapTimes, GetTotalWeightValue, InitialPlacement, InitialPlacementOnRow, OnBindingsUpdated
    //   OnDilated, OnMoved, OverlapsWithSections, SetBlendType, SetEndFrame, SetRange, SetStartFrame
    //   ShowCurveForChannel, SplitSection, TrimSection
};
