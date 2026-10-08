// /Script/Synthesis.SourceEffectRingModulationPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xD0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectRingModulation.h

UCLASS(EditInlineNew)
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectRingModulationSettings Settings;  // 0x00B0, size 0x20

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSourceEffectRingModulationSettings SettingsCopy;  // 0x0090

    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectRingModulationSettings& InSettings);  // parameters 0x20
};
