// /Game/BP/Settlement/UMG/UMG_Settlement_EventPrompt.UMG_Settlement_EventPrompt_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Settlement_EventPrompt_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Decisions;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_EventDescription;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_EventTitle;  // 0x0298, size 0x8

    UFUNCTION(BlueprintCallable) void CloseUI();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Settlement_EventPrompt(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDecisionMade(int32 DecisionIndex);  // parameters 0x4
};
