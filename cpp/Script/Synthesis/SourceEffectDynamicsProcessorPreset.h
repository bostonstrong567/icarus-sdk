// /Script/Synthesis.SourceEffectDynamicsProcessorPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xE0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectDynamicsProcessor.h

UCLASS(EditInlineNew)
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSourceEffectDynamicsProcessorSettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectDynamicsProcessorSettings Settings;  // 0x00B8, size 0x28

    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectDynamicsProcessorSettings& InSettings);  // parameters 0x28
};
