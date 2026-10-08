// /Game/UI/Components/UMG_ButtonBase.UMG_ButtonBase_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x470, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ButtonBase_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClicked Clicked;  // 0x02A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFont* TextFont;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Text_Size;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Text;  // 0x02C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Bold;  // 0x02D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Italic;  // 0x02D9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Uppercase;  // 0x02DA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Normal;  // 0x02E0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Hovered;  // 0x0308, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Pressed;  // 0x0330, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Disabled;  // 0x0358, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* Image_Normal;  // 0x0380, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* Image_Hovered;  // 0x0388, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* Image_Pressed;  // 0x0390, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* Image_Disabled;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Orange;  // 0x03A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Orange_Normal;  // 0x03A8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Orange_Hovered;  // 0x03D0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Orange_Pressed;  // 0x03F8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Orange_Disabled;  // 0x0420, size 0x28
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UTextBlock* ButtonTextRef;  // 0x0448, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UButton* ImageButtonRef;  // 0x0450, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* Sound_OnClick;  // 0x0458, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor CachedTextColor;  // 0x0460, size 0x10

    UFUNCTION(BlueprintCallable) void Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ButtonBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetButtonText(UTextBlock*& ButtonText);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDisabledTextColour(FSlateColor& Colour);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetHoveredTextColour(FSlateColor& Colour);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetImageButton(UButton*& ImageButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetNormalTextColour(FSlateColor& Colour);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPressedTextColour(FSlateColor& Colour);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsDisabled(bool& Disabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnClicked();
    UFUNCTION(BlueprintCallable) void OnHover();
    UFUNCTION(BlueprintCallable) void OnPressed();
    UFUNCTION(BlueprintCallable) void OnReleased();
    UFUNCTION(BlueprintCallable) void OnUnhover();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetButtonImages(UMaterialInstance* Normal, UMaterialInstance* Hovered, UMaterialInstance* Pressed, UMaterialInstance* Disabled);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetDisabled(bool Disabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetText(FText Text);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetTextColours(FSlateColor Normal, FSlateColor Hover, FSlateColor Pressed, FSlateColor Disabled);  // parameters 0xA0
    UFUNCTION(BlueprintCallable) void SetTextSize(int32 TextSize);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTextStyle(bool Bold, bool Italic);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void Update_Visuals();  // named "Update Visuals"
    UFUNCTION(BlueprintCallable) void UpdateTextColour();
};
