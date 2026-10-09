// /Script/Icarus.DialogueManager
// Derives from: AActor > UObject
// size 0x270, declared in Icarus/Source/Icarus/Systems/Dialogue/DialogueManager.h

UCLASS(Config=Engine)
class ADialogueManager : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* InterruptFMODEvent;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterruptionDelayLength;  // 0x0228, size 0x4
private:
    UPROPERTY(Instanced) UFMODAudioComponent* DefaultAudioComponent;  // 0x0230, size 0x8
    FDialogueRowHandle CurrentDialogue;  // 0x0238, not reflected
    UPROPERTY(Instanced) UFMODAudioComponent* CurrentAudioComponent;  // 0x0250, size 0x8
    FTimerHandle PlayDelayTimer;  // 0x0258, not reflected
    TArray<FDialogueRowHandle,TSizedDefaultAllocator<32> > Queue;  // 0x0260, not reflected
public:
    UFUNCTION() void ClearAllDialogues();
    UFUNCTION() void ClearCurrentDialogue();
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentDialogueLength() const;  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnDialogueCleared();
    UFUNCTION(BlueprintImplementableEvent) void OnDialoguePlayed(FDialogueRowHandle Dialogue);  // parameters 0x18
    UFUNCTION() void QueueDialogue(const FDialogueRowHandle& Dialogue);  // parameters 0x18
};
