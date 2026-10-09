// /Script/Synthesis.SourceEffectPhaserPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xB0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectPhaser.h

UCLASS(EditInlineNew)
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSourceEffectPhaserSettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSourceEffectPhaserSettings Settings;  // 0x00A0, size 0x10

    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectPhaserSettings& InSettings);  // parameters 0x10
};
