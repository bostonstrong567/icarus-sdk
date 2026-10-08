// /Script/Synthesis.SourceEffectDynamicsProcessorPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xE0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectDynamicsProcessor.h

UCLASS(EditInlineNew)
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectDynamicsProcessorSettings Settings;  // 0x00B8, size 0x28

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSourceEffectDynamicsProcessorSettings SettingsCopy;  // 0x0090

    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectDynamicsProcessorSettings& InSettings);  // parameters 0x28
};
