// /Script/Synthesis.SourceEffectFoldbackDistortionPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xA8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectFoldbackDistortion.h

UCLASS(EditInlineNew)
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectFoldbackDistortionSettings Settings;  // 0x009C, size 0xC

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSourceEffectFoldbackDistortionSettings SettingsCopy;  // 0x0090

    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectFoldbackDistortionSettings& InSettings);  // parameters 0xC
};
