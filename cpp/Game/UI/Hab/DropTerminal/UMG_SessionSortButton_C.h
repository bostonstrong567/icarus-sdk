// /Game/UI/Hab/DropTerminal/UMG_SessionSortButton.UMG_SessionSortButton_C
// Derives from: UUMG_ButtonBase_C > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x77D, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SessionSortButton_C : public UUMG_ButtonBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* AdditionalBorder;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* AdditionalContent;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBackgroundBlur* BackgroundBlur_0;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ButtonText;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HighlightFlagOverlay;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ImageButton;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ImageSortDirection;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* ScaleBox_TextContainer;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox;  // 0x04B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle NormalStyle;  // 0x04C0, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Width;  // 0x0738, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Height;  // 0x073C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETextJustify> Justification;  // 0x0740, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle HighlightFlag;  // 0x0744, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_QuestHelper_C* QuestHelper;  // 0x0760, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Blur_Strength;  // 0x0768, size 0x4, named "Blur Strength"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMargin TextPadding;  // 0x076C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESessionSortType SortType;  // 0x077C, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_SessionSortButton(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusUpdated(bool bNewFocus);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetButtonText(UTextBlock*& ButtonText);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetImageButton(UButton*& ImageButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnHover();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateSortState(ESessionSortType Type, ESessionSortDirection Direction);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void UpdateTextColour();
};
