// /Script/Paper2D.PaperFlipbookComponent
// Derives from: UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x4C0, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperFlipbookComponent.h

UCLASS(Config=Engine)
class UPaperFlipbookComponent : public UMeshComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FFlipbookFinishedPlaySignature OnFinishedPlaying;  // 0x04B0, size 0x10
protected:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing) UPaperFlipbook* SourceFlipbook;  // 0x0478, size 0x8
    UPROPERTY(Deprecated) UMaterialInterface* Material;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere) float PlayRate;  // 0x0488, size 0x4
    UPROPERTY() uint8 bLooping : 1;  // 0x048C, mask 0x01
    UPROPERTY() uint8 bReversePlayback : 1;  // 0x048C, mask 0x02
    UPROPERTY() uint8 bPlaying : 1;  // 0x048C, mask 0x04
    UPROPERTY() float AccumulatedTime;  // 0x0490, size 0x4
    UPROPERTY() int32 CachedFrameIndex;  // 0x0494, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) FLinearColor SpriteColor;  // 0x0498, size 0x10
    UPROPERTY(Transient) UBodySetup* CachedBodySetup;  // 0x04A8, size 0x8
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UPaperFlipbook* GetFlipbook();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFlipbookFramerate() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFlipbookLength() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetFlipbookLengthInFrames() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPlayRate() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPlaybackPosition() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPlaybackPositionInFrames() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor GetSpriteColor() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLooping() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlaying() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsReversing() const;  // parameters 0x1
    UFUNCTION() void OnRep_SourceFlipbook(UPaperFlipbook* OldFlipbook);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Play();
    UFUNCTION(BlueprintCallable) void PlayFromStart();
    UFUNCTION(BlueprintCallable) void Reverse();
    UFUNCTION(BlueprintCallable) void ReverseFromEnd();
    UFUNCTION(BlueprintCallable) bool SetFlipbook(UPaperFlipbook* NewFlipbook);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetLooping(bool bNewLooping);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetNewTime(float NewTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPlayRate(float NewRate);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPlaybackPosition(float NewPosition, bool bFireEvents);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetPlaybackPositionInFrames(int32 NewFramePosition, bool bFireEvents);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetSpriteColor(FLinearColor NewColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Stop();

    // Virtual functions that start here:
    //   GetFlipbook, SetFlipbook
};
