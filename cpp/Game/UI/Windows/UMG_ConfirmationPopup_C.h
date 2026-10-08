// /Game/UI/Windows/UMG_ConfirmationPopup.UMG_ConfirmationPopup_C
// Derives from: UConfirmationPopupBase > UUserWidget > UWidget > UVisual > UObject
// size 0x314, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ConfirmationPopup_C : public UConfirmationPopupBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* ContentSlot;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_96;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* OptionAButton;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* OptionBButton;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RichText;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_Main;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* ClickSoundDefault_A;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* ClickSoundDefault_B;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* CachedOptionAImage;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* CachedOptionBImage;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor CachedOptionATint;  // 0x02F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor CachedOptionBTint;  // 0x0300, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredWidth;  // 0x0310, size 0x4

    UFUNCTION() void BndEvt__OptionAButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__OptionBButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CallCancel();
    UFUNCTION() void ExecuteUbergraph_UMG_ConfirmationPopup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDefaultClickSound(UUMG_IconTextButton_C* Button, UFMODEvent*& ClickSound);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnInitialized();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetOption(UUMG_IconTextButton_C* Button, FText Text, UFMODEvent* FMODEvent, UTexture2D* Image, FLinearColor Tint);  // parameters 0x40
    UFUNCTION(BlueprintImplementableEvent) void SetPromptDetails(const FConfirmationPopupDetails& ConfirmationPopupDetails);  // parameters 0x98
};
