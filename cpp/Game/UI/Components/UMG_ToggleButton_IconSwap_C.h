// /Game/UI/Components/UMG_ToggleButton_IconSwap.UMG_ToggleButton_IconSwap_C
// Derives from: UUMG_ToggleButtonBase_C > UUMG_ButtonBase_C > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0xAF0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ToggleButton_IconSwap_C : public UUMG_ToggleButtonBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07F0, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ToggleAnimation;  // 0x07F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0800, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_ToggleConfirm;  // 0x0808, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ImageButton;  // 0x0810, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox;  // 0x0818, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_ButtonText;  // 0x0820, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_ButtonText;  // 0x0828, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle NormalStyle;  // 0x0830, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* ButtonIcon;  // 0x0AA8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* ToggledButtonIcon;  // 0x0AB0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowText;  // 0x0AB8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ToggleText;  // 0x0AC0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText NonToggleText;  // 0x0AD8, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ToggleButton_IconSwap(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusUpdated(bool bNewFocus);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetImageButton(UButton*& ImageButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnClickEvent(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateToggleText();
    UFUNCTION(BlueprintCallable) void VisuallyToggleButton(bool VisualToggledState);  // parameters 0x1
};
