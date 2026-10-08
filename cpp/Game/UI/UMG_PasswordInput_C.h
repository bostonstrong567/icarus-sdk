// /Game/UI/UMG_PasswordInput.UMG_PasswordInput_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PasswordInput_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* EditIcon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* PasswordTextField;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PasswordVisibilityControl_C* UMG_PasswordVisibilityControl;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnCommitText OnCommitText;  // 0x0280, size 0x10

    UFUNCTION() void BndEvt__UMG_PasswordInput_ProspectNameTextbox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PasswordInput(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FocusText();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPasswordString(FString& Pasword);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCommitText__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void VisibilityControlClicked(bool Selected);  // parameters 0x1
};
