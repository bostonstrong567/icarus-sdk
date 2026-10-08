// /Game/UI/Components/UMG_ToggleButton_MountSettingOption.UMG_ToggleButton_MountSettingOption_C
// Derives from: UUMG_ToggleButtonBase_C > UUMG_ButtonBase_C > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0xAD0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ToggleButton_MountSettingOption_C : public UUMG_ToggleButtonBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ButtonText;  // 0x07F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ImageButton;  // 0x0800, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_0;  // 0x0808, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Checkbox_C* UMG_Checkbox;  // 0x0810, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle NormalStyle;  // 0x0818, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle HighlightFlag;  // 0x0A90, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_QuestHelper_C* QuestHelper;  // 0x0AA8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) SwapButtonOption OptionData;  // 0x0AB0, size 0x20

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ToggleButton_MountSettingOption(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusUpdated(bool bNewFocus);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetButtonText(UTextBlock*& ButtonText);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetImageButton(UButton*& ImageButton);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void VisuallyToggleButton(bool VisualToggledState);  // parameters 0x1
};
