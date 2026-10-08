// /Script/Engine.AnimSingleNodeInstance
// Derives from: UAnimInstance > UObject
// size 0x2D0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimSingleNodeInstance.h

UCLASS(Transient)
class UAnimSingleNodeInstance : public UAnimInstance
{
public:
    UPROPERTY(Transient) UAnimationAsset* CurrentAsset;  // 0x02B8, size 0x8
    UPROPERTY(Transient) FPostEvaluateAnimEvent PostEvaluateAnimEvent;  // 0x02C0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure) UAnimationAsset* GetAnimationAsset() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) float GetLength();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayAnim(bool bIsLooping, float InPlayRate, float InStartPosition);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetAnimationAsset(UAnimationAsset* NewAsset, bool bIsLooping, float InPlayRate);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetBlendSpaceInput(const FVector& InBlendInput);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetLooping(bool bIsLooping);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPlayRate(float InPlayRate);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPlaying(bool bIsPlaying);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPosition(float InPosition, bool bFireNotifies);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetPositionWithPreviousTime(float InPosition, float InPreviousTime, bool bFireNotifies);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetPreviewCurveOverride(const FName& PoseName, float Value, bool bRemoveIfZero);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void SetReverse(bool bInReverse);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StopAnim();

    // Virtual functions that start here:
    //   GetAnimationAsset, RestartMontage, SetAnimationAsset
};
