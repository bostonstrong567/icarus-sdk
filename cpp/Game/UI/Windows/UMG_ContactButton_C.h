// /Game/UI/Windows/UMG_ContactButton.UMG_ContactButton_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ContactButton_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HoverBorder;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BackgroundImage;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button_122;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_97;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBoxHoverBorder;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Name;  // 0x02A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image;  // 0x02B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClicked Clicked;  // 0x02E0, size 0x10

    UFUNCTION() void BndEvt__UMG_ContactButton_Button_122_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_ContactButton_Button_122_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_ContactButton_Button_122_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ContactButton(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
