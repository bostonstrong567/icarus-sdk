// /Script/UMG.WidgetAnimationPlayCallbackProxy
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/UMG/Public/Animation/WidgetAnimationPlayCallbackProxy.h

UCLASS(MinimalAPI)
class UWidgetAnimationPlayCallbackProxy : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FWidgetAnimationResult Finished;  // 0x0028, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<UWorld,FWeakObjectPtr> WorldPtr;  // 0x0038, private
    FDelegateHandle OnFinishedHandle;  // 0x0040, private

    UFUNCTION(BlueprintCallable) static UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);  // parameters 0x38
};
