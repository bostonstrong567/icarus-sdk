// /Game/UI/Components/UMG_DialogueLine.UMG_DialogueLine_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DialogueLine_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeInOutHalfStrength;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeIn;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeOut;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Dialogue;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0288, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_DialogueLine(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceFadeOut();
    UFUNCTION(BlueprintCallable) void Start(FText Name, FText Dialogue, float AudioLength, bool ForceQuickFade);  // parameters 0x35
};
