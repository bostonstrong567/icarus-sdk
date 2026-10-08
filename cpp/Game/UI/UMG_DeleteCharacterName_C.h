// /Game/UI/UMG_DeleteCharacterName.UMG_DeleteCharacterName_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DeleteCharacterName_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* EditIcon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* ProspectNameTextbox;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ConfirmationText;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnConfirmTextMatched OnConfirmTextMatched;  // 0x0290, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnConfirmTextUnmatched OnConfirmTextUnmatched;  // 0x02A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WasMatching;  // 0x02B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnCommitText OnCommitText;  // 0x02B8, size 0x10

    UFUNCTION() void BndEvt__UMG_DeleteCharacterName_ProspectNameTextbox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_DeleteCharacterName_ProspectNameTextbox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION() void ExecuteUbergraph_UMG_DeleteCharacterName(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FocusTextField();
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasEnteredConfirmText(bool& Entered);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnCommitText__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnConfirmTextMatched__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnConfirmTextUnmatched__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
