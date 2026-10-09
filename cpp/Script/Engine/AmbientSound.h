// /Script/Engine.AmbientSound
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Sound/AmbientSound.h

UCLASS(Config=Engine)
class AAmbientSound : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UAudioComponent* AudioComponent;  // 0x0220, size 0x8
public:
    UFUNCTION(BlueprintCallable) void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void FadeIn(float FadeInDuration, float FadeVolumeLevel);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void FadeOut(float FadeOutDuration, float FadeVolumeLevel);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Play(float StartTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Stop();
};
