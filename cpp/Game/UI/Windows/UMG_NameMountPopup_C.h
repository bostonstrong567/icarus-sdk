// /Game/UI/Windows/UMG_NameMountPopup.UMG_NameMountPopup_C
// Derives from: UConfirmationPopupBase > UUserWidget > UWidget > UVisual > UObject
// size 0x324, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_NameMountPopup_C : public UConfirmationPopupBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* ContentSlot;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* EditableTextBox;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_96;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* OptionAButton;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* OptionBButton;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RichText;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* ClickSoundDefault_A;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* ClickSoundDefault_B;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* CachedOptionAImage;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* CachedOptionBImage;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor CachedOptionATint;  // 0x02F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor CachedOptionBTint;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString StartingName;  // 0x0310, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaximumMountNameLength;  // 0x0320, size 0x4

    UFUNCTION() void BndEvt__OptionAButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__OptionBButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_NameMountPopup_EditableTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void CallCancel();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_NameMountPopup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDefaultClickSound(UUMG_IconTextButton_C* Button, UFMODEvent*& ClickSound);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnInitialized();
    UFUNCTION(BlueprintCallable) void SetOption(UUMG_IconTextButton_C* Button, FText Text, UFMODEvent* FMODEvent, UTexture2D* Image, FLinearColor Tint);  // parameters 0x40
    UFUNCTION(BlueprintImplementableEvent) void SetPromptDetails(const FConfirmationPopupDetails& ConfirmationPopupDetails);  // parameters 0x98
    UFUNCTION(BlueprintCallable) void SetStartingName(FString StartingName);  // parameters 0x10
};
