// /Game/UI/Components/UMG_TopLevelButton_NewGame.UMG_TopLevelButton_NewGame_C
// Derives from: UUMG_ButtonBase_C > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x874, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TopLevelButton_NewGame_C : public UUMG_ButtonBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0470, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HoverAnimation;  // 0x0478, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ExpandDrawer;  // 0x0480, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* CornerHovers;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_Main;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ButtonDescription;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ButtonText;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HoverCorners;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_3;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_48;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Gradient;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ImageButton;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* MainSizeBox;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OuterFrame;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_AvailableResourceList_C* UMG_AvailableResourceList_144;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ZoomOnHoverImage_C* UMG_ZoomOnHoverImage;  // 0x04F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle NormalStyle;  // 0x0500, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Width;  // 0x0778, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush CategoryImageVariable;  // 0x0780, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsOrange;  // 0x0808, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText SetDescriptionText;  // 0x0810, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WantsDrawerHidden;  // 0x0828, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ExpandDrawerOnSelect;  // 0x0829, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor AccentColor;  // 0x082C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnHovered OnHovered;  // 0x0840, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnUnhovered OnUnhovered;  // 0x0850, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ResourceAvailabilityData> AvailableResources;  // 0x0860, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ImageZoom;  // 0x0870, size 0x4

    UFUNCTION() void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_TopLevelButton_ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_TopLevelButton_NewGame(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusUpdated(bool bNewFocus);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor GetAccentColor();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetButtonText(UTextBlock*& ButtonText);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetImageButton(UButton*& ImageButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnDrawerAnimationComplete();
    UFUNCTION(BlueprintCallable) void OnHovered__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnUnhovered__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OrangeButton();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void ToggleDrawer();
};
