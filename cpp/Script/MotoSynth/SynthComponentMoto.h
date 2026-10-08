// /Script/MotoSynth.SynthComponentMoto
// Derives from: USynthComponent > USceneComponent > UActorComponent > UObject
// size 0x780, declared in Engine/Plugins/Experimental/MotoSynth/Source/MotoSynth/Classes/SynthComponents/SynthComponentMoto.h

UCLASS(Config=Engine)
class USynthComponentMoto : public USynthComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMotoSynthPreset* MotoSynthPreset;  // 0x06C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RPM;  // 0x06C8, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCriticalSection;  // 0x06D0, private
    FVector2D RPMRange;  // 0x06F8, private
    TSharedPtr<ISoundGenerator,1> MotoSynthEngine;  // 0x0700, private
    FMotoSynthRuntimeSettings OverrideSettings;  // 0x0710, private
    bool bSettingsOverridden;  // 0x0778, private

    UFUNCTION(BlueprintCallable) void GetRPMRange(float& OutMinRPM, float& OutMaxRPM);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsEnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetRPM(float InRPM, float InTimeSec);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSettings(const FMotoSynthRuntimeSettings& InSettings);  // parameters 0x68
};
