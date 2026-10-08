// /Script/Engine.TimelineComponent
// Derives from: UActorComponent > UObject
// size 0x150, declared in Engine/Source/Runtime/Engine/Classes/Components/TimelineComponent.h

UCLASS(MinimalAPI, Config=Engine)
class UTimelineComponent : public UActorComponent
{
public:
    UPROPERTY(Replicated, ReplicatedUsing) FTimeline TheTimeline;  // 0x00B0, size 0x98
    UPROPERTY() uint8 bIgnoreTimeDilation : 1;  // 0x0148, mask 0x01

    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetIgnoreTimeDilation() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPlayRate() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPlaybackPosition() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTimelineLength() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLooping() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlaying() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsReversing() const;  // parameters 0x1
    UFUNCTION() void OnRep_Timeline();
    UFUNCTION(BlueprintCallable) void Play();
    UFUNCTION(BlueprintCallable) void PlayFromStart();
    UFUNCTION(BlueprintCallable) void Reverse();
    UFUNCTION(BlueprintCallable) void ReverseFromEnd();
    UFUNCTION(BlueprintCallable) void SetFloatCurve(UCurveFloat* NewFloatCurve, FName FloatTrackName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetIgnoreTimeDilation(bool bNewIgnoreTimeDilation);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLinearColorCurve(UCurveLinearColor* NewLinearColorCurve, FName LinearColorTrackName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetLooping(bool bNewLooping);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetNewTime(float NewTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPlayRate(float NewRate);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPlaybackPosition(float NewPosition, bool bFireEvents, bool bFireUpdate);  // parameters 0x6
    UFUNCTION(BlueprintCallable) void SetTimelineLength(float NewLength);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTimelineLengthMode(TEnumAsByte<ETimelineLengthMode> NewLengthMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetVectorCurve(UCurveVector* NewVectorCurve, FName VectorTrackName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Stop();
};
