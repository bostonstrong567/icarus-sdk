// /Script/Synthesis.EnvelopeFollowerListener
// Derives from: UActorComponent > UObject
// size 0xD0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectEnvelopeFollower.h

UCLASS(Config=Engine)
class UEnvelopeFollowerListener : public UActorComponent
{
public:
    UPROPERTY(BlueprintAssignable) FOnEnvelopeFollowerUpdate OnEnvelopeFollowerUpdate;  // 0x00B0, size 0x10
protected:
    bool bRegistered;  // 0x00C0, not reflected
    uint32 PresetUniqueId;  // 0x00C4, not reflected
    IEnvelopeFollowerNotifier * EnvelopeFollowerNotifier;  // 0x00C8, not reflected
};
