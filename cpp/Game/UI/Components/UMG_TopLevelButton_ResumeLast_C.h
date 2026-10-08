// /Game/UI/Components/UMG_TopLevelButton_ResumeLast.UMG_TopLevelButton_ResumeLast_C
// Derives from: UUMG_ButtonBase_C > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x824, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TopLevelButton_ResumeLast_C : public UUMG_ButtonBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0470, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* CornerHovers;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ButtonText;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DescriptionText;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* DescriptionTextBox;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HostName;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HoverCorners;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_3;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_48;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ImageButton;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* MainSizeBox;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OuterFrame;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ZoomOnHoverImage_C* UMG_ZoomOnHoverImage;  // 0x04E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle NormalStyle;  // 0x04E8, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Width;  // 0x0760, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush CategoryImageVariable;  // 0x0768, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsOrange;  // 0x07F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText SetDescriptionText;  // 0x07F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FHovered Hovered;  // 0x0810, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ImageZoom;  // 0x0820, size 0x4

    UFUNCTION() void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_TopLevelButton_ResumeLast(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusUpdated(bool bNewFocus);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetButtonText(UTextBlock*& ButtonText);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetImageButton(UButton*& ImageButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Hovered__DelegateSignature(UTexture2D* Image);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnFailure_9E404D7D4F41CF9DD68EC3BCCAD3C47E(FGetIcarusPlayerPersonaResult Result);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void OnSuccess_9E404D7D4F41CF9DD68EC3BCCAD3C47E(FGetIcarusPlayerPersonaResult Result);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void OrangeButton();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLastProspectInfo(FAssociatedProspectInfo AssociatedProspect);  // parameters 0xD8
};
