// /Game/UI/Components/UMG_Dialogue.UMG_Dialogue_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x27C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Dialogue_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* LineBox;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) USubtitleQueue* Queue;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MaxNumberLines;  // 0x0278, size 0x4

    UFUNCTION(BlueprintCallable) void AddDialogue(FDialogueRowHandle DialogueRow);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void AddLine(FSubtitle& Subtitle);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void AddLineQuickFade(FSubtitle& Subtitle);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void AddLineToBox(UUMG_DialogueLine_C* Line);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ClearAllDialogue();
    UFUNCTION() void ExecuteUbergraph_UMG_Dialogue(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceFadePlayingLines();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnInitialized();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
