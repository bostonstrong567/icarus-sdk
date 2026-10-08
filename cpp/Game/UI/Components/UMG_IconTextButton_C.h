// /Game/UI/Components/UMG_IconTextButton.UMG_IconTextButton_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x458, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_IconTextButton_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ButtonText;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ImageButton;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* Spacer_186;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClicked Clicked;  // 0x0290, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFont* TextFont;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Text_Size;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Text;  // 0x02B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Bold;  // 0x02C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Italic;  // 0x02C9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Uppercase;  // 0x02CA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Normal;  // 0x02D0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Hovered;  // 0x02F8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Disabled;  // 0x0320, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Pressed;  // 0x0348, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* Image_Normal;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* Image_Pressed;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* Image_Hovered;  // 0x0380, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* Image_Disabled;  // 0x0388, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Orange;  // 0x0390, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Orange_Disabled;  // 0x0398, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Orange_Pressed;  // 0x03C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Orange_Normal;  // 0x03E8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Text_Orange_Hovered;  // 0x0410, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Button_Icon;  // 0x0438, size 0x8, named "Button Icon"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* Sound_OnClicked;  // 0x0440, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* Sound_Hover;  // 0x0448, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ButtonSize;  // 0x0450, size 0x8

    UFUNCTION() void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_IconTextButton(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FSlateColor Get_ButtonText_ColorAndOpacity_0();  // parameters 0x28
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetButtonImages(UMaterialInstance* Normal, UMaterialInstance* Hovered, UMaterialInstance* Pressed, UMaterialInstance* Disabled);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetDisabled(bool NewParam);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetText(FText Text);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetTextSize(int32 TextSize);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTextStyle(bool Bold, bool Italic);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void UpdateSpacer();
    UFUNCTION(BlueprintCallable) void UpdateTextColour(FLinearColor Colour);  // parameters 0x10
};
