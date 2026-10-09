// /Script/UMG.WidgetAnimation
// Derives from: UMovieSceneSequence > UMovieSceneSignedObject > UObject
// size 0x90, declared in Engine/Source/Runtime/UMG/Public/Animation/WidgetAnimation.h

UCLASS(MinimalAPI, Config=Engine)
class UWidgetAnimation : public UMovieSceneSequence
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Instanced) UMovieScene* MovieScene;  // 0x0060, size 0x8
    UPROPERTY() TArray<FWidgetAnimationBinding> AnimationBindings;  // 0x0068, size 0x10
private:
    UPROPERTY() bool bLegacyFinishOnStop;  // 0x0078, size 0x1
    UPROPERTY() FString DisplayLabel;  // 0x0080, size 0x10
public:
    UFUNCTION(BlueprintCallable) void BindToAnimationFinished(UUserWidget* Widget, FWidgetAnimationDynamicEvent Delegate);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void BindToAnimationStarted(UUserWidget* Widget, FWidgetAnimationDynamicEvent Delegate);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetEndTime() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetStartTime() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UnbindAllFromAnimationFinished(UUserWidget* Widget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UnbindAllFromAnimationStarted(UUserWidget* Widget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UnbindFromAnimationFinished(UUserWidget* Widget, FWidgetAnimationDynamicEvent Delegate);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UnbindFromAnimationStarted(UUserWidget* Widget, FWidgetAnimationDynamicEvent Delegate);  // parameters 0x18
};
