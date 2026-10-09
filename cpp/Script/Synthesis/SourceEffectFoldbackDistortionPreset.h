// /Script/Synthesis.SourceEffectFoldbackDistortionPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xA8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectFoldbackDistortion.h

UCLASS(EditInlineNew)
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSourceEffectFoldbackDistortionSettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectFoldbackDistortionSettings Settings;  // 0x009C, size 0xC

    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectFoldbackDistortionSettings& InSettings);  // parameters 0xC
};
