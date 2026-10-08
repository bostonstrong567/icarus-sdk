// /Game/UI/Components/UMG_DropshipButton.UMG_DropshipButton_C
// Derives from: UUMG_ButtonBase_C > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x7F8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DropshipButton_C : public UUMG_ButtonBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ButtonText;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ImageButton;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* IUNUSE;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* LOADOUT;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* SelectedBorder;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle NormalStyle;  // 0x04A0, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DropshipIndex;  // 0x0718, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InUse;  // 0x071C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InLoadout;  // 0x071D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSelected;  // 0x071E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColour_Selected;  // 0x0720, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor TextColour_Base;  // 0x0748, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateBrush Normal;  // 0x0770, size 0x88

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_DropshipButton(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusUpdated(bool bNewFocus);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetButtonText(UTextBlock*& ButtonText);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetImageButton(UButton*& ImageButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetNormalTextColour(FSlateColor& Colour);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SetSelected(bool Selected);  // parameters 0x1
};
