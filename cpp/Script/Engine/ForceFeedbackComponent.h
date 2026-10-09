// /Script/Engine.ForceFeedbackComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x2E0, declared in Engine/Source/Runtime/Engine/Classes/Components/ForceFeedbackComponent.h

UCLASS(Config=Engine)
class UForceFeedbackComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UForceFeedbackEffect* ForceFeedbackEffect;  // 0x01F8, size 0x8
    UPROPERTY() uint8 bAutoDestroy : 1;  // 0x0200, mask 0x01
    UPROPERTY() uint8 bStopWhenOwnerDestroyed : 1;  // 0x0200, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bLooping : 1;  // 0x0200, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIgnoreTimeDilation : 1;  // 0x0200, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverrideAttenuation : 1;  // 0x0200, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float IntensityMultiplier;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UForceFeedbackAttenuation* AttenuationSettings;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FForceFeedbackAttenuationSettings AttenuationOverrides;  // 0x0210, size 0xB0
    UPROPERTY(BlueprintAssignable) FOnForceFeedbackFinished OnForceFeedbackFinished;  // 0x02C0, size 0x10
private:
    float PlayTime;  // 0x02D0, not reflected
public:
    UFUNCTION(BlueprintCallable) void AdjustAttenuation(const FForceFeedbackAttenuationSettings& InAttenuationSettings);  // parameters 0xB0
    UFUNCTION(BlueprintCallable, BlueprintPure) bool BP_GetAttenuationSettingsToApply(FForceFeedbackAttenuationSettings& OutAttenuationSettings) const;  // parameters 0xB1
    UFUNCTION(BlueprintCallable) void Play(float StartTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetForceFeedbackEffect(UForceFeedbackEffect* NewForceFeedbackEffect);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetIntensityMultiplier(float NewIntensityMultiplier);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Stop();

    // Virtual functions that start here:
    //   Play, Stop
};
