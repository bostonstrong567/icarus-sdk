// /Game/UI/Components/UMG_ButtonIcon.UMG_ButtonIcon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x398, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ButtonIcon_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ImageButton;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClicked Clicked;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFont* TextFont;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Colour_Normal;  // 0x0298, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Colour_Hovered;  // 0x02C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Colour_Disabled;  // 0x02E8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor Colour_Pressed;  // 0x0310, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* Image_Normal;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* Image_Pressed;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* Image_Hovered;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstance* Image_Disabled;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* IconImage;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Tooltip_Text_Field;  // 0x0360, size 0x18, named "Tooltip Text Field"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FHover Hover;  // 0x0378, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FUnhovered Unhovered;  // 0x0388, size 0x10

    UFUNCTION() void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_ButtonIcon_ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ButtonIcon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FSlateColor Get_ButtonText_ColorAndOpacity_0();  // parameters 0x28
    UFUNCTION(BlueprintCallable) void Hover__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ReInitialise();
    UFUNCTION(BlueprintCallable) void SetButtonImages(UMaterialInstance* Normal, UMaterialInstance* Hovered, UMaterialInstance* Pressed, UMaterialInstance* Disabled);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetDisabled(bool Disabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetText(FText Text);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetTextSize(int32 TextSize);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTextStyle(bool Bold, bool Italic);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void Unhovered__DelegateSignature();
    UFUNCTION(BlueprintCallable) void UpdateTextColour(FLinearColor Colour);  // parameters 0x10
};
