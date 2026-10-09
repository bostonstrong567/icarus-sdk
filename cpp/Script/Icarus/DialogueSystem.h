// /Script/Icarus.DialogueSystem
// Derives from: UActorComponent > UObject
// size 0xD8, declared in Icarus/Source/Icarus/Subsystems/World/DialogueSystem.h

UCLASS(Config=Engine)
class UDialogueSystem : public UActorComponent
{
public:
    UPROPERTY(BlueprintAssignable) FPlayDialogue OnPlayDialogue;  // 0x00B0, size 0x10
    UPROPERTY(BlueprintAssignable) FClearDialogues OnClearDialogues;  // 0x00C0, size 0x10
private:
    bool bDialogueEnabled;  // 0x00D0, not reflected
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, BlueprintNativeEvent) void ClearAllDialogues();
    UFUNCTION(BlueprintCallable) void LocalClearAllDialogues();
    UFUNCTION(BlueprintCallable) void LocalTriggerDialogue(const FDialogueRowHandle& Dialogue);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void LocalTriggerDialogueFromPool(const FDialoguePoolRowHandle& DialoguePool);  // parameters 0x18
    UFUNCTION(NetMulticast, Reliable, BlueprintNativeEvent) void Multi_TriggerDialogue(FDialogueRowHandle Dialogue);  // parameters 0x18
    UFUNCTION(NetMulticast, Reliable, BlueprintNativeEvent) void Multi_TriggerTrackDialogue(FDialogueRowHandle Dialogue);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void TriggerDialogue(const FDialogueRowHandle& Dialogue);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void TriggerDialogueFromPool(const FDialoguePoolRowHandle& DialoguePool);  // parameters 0x18

    // Virtual functions that start here:
    //   ClearAllDialogues_Implementation, Multi_TriggerDialogue_Implementation
    //   Multi_TriggerTrackDialogue_Implementation
};
