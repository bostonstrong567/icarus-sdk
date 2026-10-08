// /Game/UI/Components/FieldGuide/UMG_FieldGuide_List_Category.UMG_FieldGuide_List_Category_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuide_List_Category_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* CategoryButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* List;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* UMG_ButtonIcon;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText CategoryText;  // 0x0288, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClicked Clicked;  // 0x02A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Selected;  // 0x02B0, size 0x1

    UFUNCTION(BlueprintCallable) void AddWidget(UUserWidget* Widget);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Category_CategoryButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Category_UMG_ButtonIcon_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ClearChildren();
    UFUNCTION(BlueprintCallable) void ClearSelection();
    UFUNCTION(BlueprintCallable) void ClickedInternal();
    UFUNCTION(BlueprintCallable) void Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuide_List_Category(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Expand();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSelected(bool Selected);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ToggleExpand();
    UFUNCTION(BlueprintCallable) void UpdateCategoryButtonImage();
};
