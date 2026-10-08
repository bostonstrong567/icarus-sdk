// /Game/UI/Components/FieldGuide/UMG_FieldGuideItemResourceQueryIcon.UMG_FieldGuideItemResourceQueryIcon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x330, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItemResourceQueryIcon_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Corner_Animation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BaseBorder;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Corner;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_1;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_2;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_3;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_4;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CountContainer;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InteractableFrame;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemIconDynamic;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ItemSlot;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MasterOverlay;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Stack;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ItemCount;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFilterItems FilterItems;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Exotic;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Normal;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ExoticItem;  // 0x0300, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Exotic_Hovered;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Hovered;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCraftingTagsRowHandle CraftingTagRow;  // 0x0318, size 0x18

    UFUNCTION() void BndEvt__UMG_FieldGuideItemResourceIcon_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_FieldGuideItemResourceIcon_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItemResourceQueryIcon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FilterItems__DelegateSignature(FFieldGuideCategoriesRowHandle Category, FItemsStaticRowHandle Item);  // parameters 0x30
};
