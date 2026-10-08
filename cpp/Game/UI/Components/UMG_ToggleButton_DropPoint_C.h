// /Game/UI/Components/UMG_ToggleButton_DropPoint.UMG_ToggleButton_DropPoint_C
// Derives from: UUMG_ToggleButtonBase_C > UUMG_ButtonBase_C > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0xAE8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ToggleButton_DropPoint_C : public UUMG_ToggleButtonBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07F0, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Hover;  // 0x07F8, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Selected;  // 0x0800, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Glow;  // 0x0808, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ImageButton;  // 0x0810, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ImageIcon;  // 0x0818, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ImageIcon_Selected;  // 0x0820, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_DropName;  // 0x0828, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FButtonStyle NormalStyle;  // 0x0830, size 0x278
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* ButtonIcon;  // 0x0AA8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDropGroupsRowHandle DropPointRowHandle;  // 0x0AB0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDropGroupData DropGroupData;  // 0x0AC8, size 0x20

    UFUNCTION() void BndEvt__UMG_ToggleButton_DropPoint_ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_ToggleButton_DropPoint_ImageButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ToggleButton_DropPoint(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusUpdated(bool bNewFocus);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetImageButton(UButton*& ImageButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnAnimationComplete();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void VisuallyToggleButton(bool VisualToggledState);  // parameters 0x1
};
