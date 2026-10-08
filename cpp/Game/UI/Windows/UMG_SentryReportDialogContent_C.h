// /Game/UI/Windows/UMG_SentryReportDialogContent.UMG_SentryReportDialogContent_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x294, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SentryReportDialogContent_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UMultiLineEditableTextBox* ReportInput;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_CharacterCount;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ExternalTitleButton_C* UMG_ExternalDiscord;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ExternalTitleButton_C* UMG_ExternaUpvote;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MoodRow_C* UMG_MoodRow;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ReportMaxCharacterLength;  // 0x0290, size 0x4

    UFUNCTION() void BndEvt__UMG_SentryReportDialogContent_MultiLineEditableTextBox_130_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_SentryReportDialogContent_ReportInput_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION() void BndEvt__UMG_SentryReportDialogContent_UMG_ExternaUpvote_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_SentryReportDialogContent_UMG_ExternalDiscord_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_SentryReportDialogContent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateCharacterLimit();
};
