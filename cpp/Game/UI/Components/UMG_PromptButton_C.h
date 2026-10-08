// /Game/UI/Components/UMG_PromptButton.UMG_PromptButton_C
// Derives from: UUMG_ButtonBase_C > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x775, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PromptButton_C : public UUMG_ButtonBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* AdditionalBorder;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* AdditionalContent;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBackgroundBlur* BackgroundBlur_0;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ButtonText;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HighlightFlagOverlay;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ImageButton;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Keybind_C* UMG_Keybind;  // 0x04B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle NormalStyle;  // 0x04B8, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Width;  // 0x0730, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETextJustify> Justification;  // 0x0734, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle HighlightFlag;  // 0x0738, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_QuestHelper_C* QuestHelper;  // 0x0750, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Blur_Strength;  // 0x0758, size 0x4, named "Blur Strength"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKeybindingsRowHandle In_Key;  // 0x075C, size 0x18, named "In Key"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Hold;  // 0x0774, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PromptButton(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusUpdated(bool bNewFocus);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetButtonText(UTextBlock*& ButtonText);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetImageButton(UButton*& ImageButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnHover();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateTextColour();
};
