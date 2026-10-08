// /Game/UI/UMG_DirectConnectInput.UMG_DirectConnectInput_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DirectConnectInput_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* EditIcon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* IPTextField;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnCommitText OnCommitText;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString IntitialString;  // 0x0288, size 0x10

    UFUNCTION() void BndEvt__UMG_PasswordInput_ProspectNameTextbox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_DirectConnectInput(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FocusText();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetConnectString(FString& Pasword);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCommitText__DelegateSignature();
};
