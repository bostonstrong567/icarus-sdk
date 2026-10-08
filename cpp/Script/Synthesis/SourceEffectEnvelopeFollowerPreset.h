// /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xA8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectEnvelopeFollower.h

UCLASS(EditInlineNew)
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectEnvelopeFollowerSettings Settings;  // 0x009C, size 0xC

    // Not reflected: the engine's scripting cannot see these.
    FWindowsCriticalSection SettingsCritSect;  // 0x0068
    FSourceEffectEnvelopeFollowerSettings SettingsCopy;  // 0x0090

    UFUNCTION(BlueprintCallable) void RegisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectEnvelopeFollowerSettings& InSettings);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void UnregisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);  // parameters 0x8
};
