// /Game/UI/Hab/CharacterCreation/UMG_ToggleButton_ColorSelect.UMG_ToggleButton_ColorSelect_C
// Derives from: UUMG_ToggleButtonBase_C > UUMG_ButtonBase_C > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0xAC4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ToggleButton_ColorSelect_C : public UUMG_ToggleButtonBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_ColourContainer;  // 0x07F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ImageButton;  // 0x0800, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox;  // 0x0808, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle NormalStyle;  // 0x0810, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterCreationDataRowHandle CharacterCustomisationRow;  // 0x0A88, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPreviewCameraSettingsEnum CameraFocus;  // 0x0AA0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RotateColourDisplay;  // 0x0AB0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor OverrideColor;  // 0x0AB4, size 0x10

    UFUNCTION(BlueprintCallable) void AddColorSegment(FLinearColor Colour);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ToggleButton_ColorSelect(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusUpdated(bool bNewFocus);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetImageButton(UButton*& ImageButton);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
