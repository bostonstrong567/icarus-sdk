// /Script/Icarus.AIVocalisationComponent
// Derives from: UVocalisationComponent > UActorComponent > UObject
// size 0x110, declared in Icarus/Source/Icarus/Audio/AIVocalisationComponent.h

UCLASS(Config=Engine)
class UAIVocalisationComponent : public UVocalisationComponent
{
private:
    TOptional<enum EAIAudioState> PendingInitState;  // 0x0108, not reflected
    EAIAudioState CurrentState;  // 0x010A, not reflected
public:
    UFUNCTION(BlueprintCallable) void PlayAIVocalisation(EAIVocalisationType Type);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAIState(EAIAudioState State);  // parameters 0x1
};
