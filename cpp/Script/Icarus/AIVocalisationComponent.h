// /Script/Icarus.AIVocalisationComponent
// Derives from: UVocalisationComponent > UActorComponent > UObject
// size 0x110, declared in Icarus/Source/Icarus/Audio/AIVocalisationComponent.h

UCLASS(Config=Engine)
class UAIVocalisationComponent : public UVocalisationComponent
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TOptional<enum EAIAudioState> PendingInitState;  // 0x0108, private
    EAIAudioState CurrentState;  // 0x010A, private

    UFUNCTION(BlueprintCallable) void PlayAIVocalisation(EAIVocalisationType Type);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAIState(EAIAudioState State);  // parameters 0x1
};
