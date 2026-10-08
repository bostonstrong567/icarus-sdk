// /Script/Icarus.DialogueManager
// Derives from: AActor > UObject
// size 0x270, declared in Icarus/Source/Icarus/Systems/Dialogue/DialogueManager.h

UCLASS(Config=Engine)
class ADialogueManager : public AActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* InterruptFMODEvent;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterruptionDelayLength;  // 0x0228, size 0x4
    UPROPERTY(Instanced) UFMODAudioComponent* DefaultAudioComponent;  // 0x0230, size 0x8
    UPROPERTY(Instanced) UFMODAudioComponent* CurrentAudioComponent;  // 0x0250, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FDialogueRowHandle CurrentDialogue;  // 0x0238, private
    FTimerHandle PlayDelayTimer;  // 0x0258, private
    TArray<FDialogueRowHandle,TSizedDefaultAllocator<32> > Queue;  // 0x0260, private

    UFUNCTION() void ClearAllDialogues();
    UFUNCTION() void ClearCurrentDialogue();
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentDialogueLength() const;  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnDialogueCleared();
    UFUNCTION(BlueprintImplementableEvent) void OnDialoguePlayed(FDialogueRowHandle Dialogue);  // parameters 0x18
    UFUNCTION() void QueueDialogue(const FDialogueRowHandle& Dialogue);  // parameters 0x18
};
