// /Game/UI/Components/FieldGuide/UMG_FieldGuide_List_Button_Item.UMG_FieldGuide_List_Button_Item_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuide_List_Button_Item_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSelectedItem SelectedItem;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* HoverSound;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Selected;  // 0x0290, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle ItemRow;  // 0x0294, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFieldGuideCategoriesRowHandle CategoryRow;  // 0x02AC, size 0x18

    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Bestiary_Creature_Button_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuide_List_Button_Item(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SelectedItem__DelegateSignature(FFieldGuideCategoriesRowHandle Category, FFieldGuideSubcategoriesRowHandle Subcategory, FItemsStaticRowHandle Item);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void SetSelected(bool Selected);  // parameters 0x1
};
