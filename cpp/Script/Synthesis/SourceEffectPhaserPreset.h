// /Script/Synthesis.SourceEffectPhaserPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xB0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectPhaser.h

UCLASS(EditInlineNew)
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSourceEffectPhaserSettings Settings;  // 0x00A0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSourceEffectPhaserSettings SettingsCopy;  // 0x0090

    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectPhaserSettings& InSettings);  // parameters 0x10
};
