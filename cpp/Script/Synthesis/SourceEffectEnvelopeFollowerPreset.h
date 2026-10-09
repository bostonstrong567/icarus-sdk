// /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
// Derives from: USoundEffectSourcePreset > USoundEffectPreset > UObject
// size 0xA8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectEnvelopeFollower.h

UCLASS(EditInlineNew)
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
    FWindowsCriticalSection SettingsCritSect;  // 0x0068, not reflected
    FSourceEffectEnvelopeFollowerSettings SettingsCopy;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSourceEffectEnvelopeFollowerSettings Settings;  // 0x009C, size 0xC

    UFUNCTION(BlueprintCallable) void RegisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSettings(const FSourceEffectEnvelopeFollowerSettings& InSettings);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void UnregisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);  // parameters 0x8
};
