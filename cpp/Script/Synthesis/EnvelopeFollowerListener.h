// /Script/Synthesis.EnvelopeFollowerListener
// Derives from: UActorComponent > UObject
// size 0xD0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectEnvelopeFollower.h

UCLASS(Config=Engine)
class UEnvelopeFollowerListener : public UActorComponent
{
public:
    UPROPERTY(BlueprintAssignable) FOnEnvelopeFollowerUpdate OnEnvelopeFollowerUpdate;  // 0x00B0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    bool bRegistered;  // 0x00C0, protected
    uint32 PresetUniqueId;  // 0x00C4, protected
    IEnvelopeFollowerNotifier * EnvelopeFollowerNotifier;  // 0x00C8, protected
};
