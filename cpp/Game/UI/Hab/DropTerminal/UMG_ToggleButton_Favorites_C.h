// /Game/UI/Hab/DropTerminal/UMG_ToggleButton_Favorites.UMG_ToggleButton_Favorites_C
// Derives from: UUMG_ToggleButtonBase_C > UUMG_ButtonBase_C > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x828, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ToggleButton_Favorites_C : public UUMG_ToggleButtonBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ImageButton;  // 0x07F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ImageIcon;  // 0x0800, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* SizeBox;  // 0x0808, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterCreationDataRowHandle CharacterCustomisationRow;  // 0x0810, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ToggleButton_Favorites(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetImageButton(UButton*& ImageButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnHover();
    UFUNCTION(BlueprintCallable) void OnUnhover();
    UFUNCTION(BlueprintCallable) void SetButtonImages(UMaterialInstance* Normal, UMaterialInstance* Hovered, UMaterialInstance* Pressed, UMaterialInstance* Disabled);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetInitialState(bool Toggled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void VisuallyToggleButton(bool VisualToggledState);  // parameters 0x1
};
