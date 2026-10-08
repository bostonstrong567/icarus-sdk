// /Game/BP/Dialogue/BP_DialogueManager.BP_DialogueManager_C
// Derives from: ADialogueManager > AActor > UObject
// size 0x278, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DialogueManager_C : public ADialogueManager
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0270, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_DialogueManager(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetDialogueWidget(UUMG_Dialogue_C*& DialogueWidget);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnDialogueCleared();
    UFUNCTION(BlueprintImplementableEvent) void OnDialoguePlayed(FDialogueRowHandle Dialogue);  // parameters 0x18
};
