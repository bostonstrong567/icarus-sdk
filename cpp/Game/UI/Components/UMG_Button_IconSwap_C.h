// /Game/UI/Components/UMG_Button_IconSwap.UMG_Button_IconSwap_C
// Derives from: UUMG_ButtonBase_C > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x758, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Button_IconSwap_C : public UUMG_ButtonBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0470, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ToggleAnimation;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_ToggleConfirm;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ImageButton;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox_ButtonText;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_ButtonText;  // 0x04A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle NormalStyle;  // 0x04B0, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowText;  // 0x0728, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<SwapButtonOption> ButtonOptions;  // 0x0730, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DefaultStartingOption;  // 0x0740, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentOptionIndex;  // 0x0744, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSwapped Swapped;  // 0x0748, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Button_IconSwap(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusUpdated(bool bNewFocus);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetImageButton(UButton*& ImageButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnClicked();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSelectedOption(int32 OptionIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Swapped__DelegateSignature(int32 NewOptionIndex, SwapButtonOption Option);  // parameters 0x28
};
