// /Game/UI/Components/UMG_ToggleButtonBase.UMG_ToggleButtonBase_C
// Derives from: UUMG_ButtonBase_C > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x7EC, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ToggleButtonBase_C : public UUMG_ButtonBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsToggled;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FToggled Toggled;  // 0x0480, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsRadioToggle;  // 0x0490, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanUntoggleSelf;  // 0x0491, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FUntoggled Untoggled;  // 0x0498, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Toggled_Text_Normal;  // 0x04A8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Toggled_Text_Hovered;  // 0x04D0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Toggled_Text_Pressed;  // 0x04F8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Toggled_Text_Disabled;  // 0x0520, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* Toggled_Image_Normal;  // 0x0548, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* Toggled_Image_Hovered;  // 0x0550, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* Toggled_Image_Pressed;  // 0x0558, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* Toggled_Image_Disabled;  // 0x0560, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle CachedImageButtonStyle;  // 0x0568, size 0x278
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPanelWidget* RadioParent;  // 0x07E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WidthOverride;  // 0x07E8, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ToggleButtonBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDisabledTextColour(FSlateColor& Colour);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetHoveredTextColour(FSlateColor& Colour);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetNormalTextColour(FSlateColor& Colour);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPressedTextColour(FSlateColor& Colour);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnClickEvent(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetToggled(bool Toggled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UntoggleOthers(UPanelWidget* InRadioParent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Untoggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void VisuallyToggleButton(bool VisualToggledState);  // parameters 0x1
};
