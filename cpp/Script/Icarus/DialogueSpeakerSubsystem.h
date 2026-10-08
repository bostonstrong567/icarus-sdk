// /Script/Icarus.DialogueSpeakerSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x80, declared in Icarus/Source/Icarus/Systems/Dialogue/DialogueSpeakerSubsystem.h

UCLASS()
class UDialogueSpeakerSubsystem : public UWorldSubsystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TMap<FDialogueSpeakerRowHandle,UFMODAudioComponent *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDialogueSpeakerRowHandle,UFMODAudioComponent *,0> > DialogueSpeakers;  // 0x0030, private

    UFUNCTION(BlueprintCallable) void RegisterSpeakerAudioComponent(FDialogueSpeakerRowHandle Speaker, UFMODAudioComponent* AudioComponent);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void UnregisterSpeakerAudioComponent(FDialogueSpeakerRowHandle Speaker, UFMODAudioComponent* AudioComponent);  // parameters 0x20
};
