// /Game/UI/Components/FieldGuide/UMG_FieldGuideItemResourceIcon.UMG_FieldGuideItemResourceIcon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItemResourceIcon_C : public UUserWidget
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
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* CraftAt;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CraftIcon;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HiddenIcon;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InteractableFrame;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemIconDynamic;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ItemSlot;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MasterOverlay;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Stack;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TalentRequiredIcon_C* UMG_TalentRequiredIcon;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle ItemRow;  // 0x0300, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFieldGuideCategoriesRowHandle CategoryRow;  // 0x0318, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ItemCount;  // 0x0330, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFilterItems FilterItems;  // 0x0338, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsBench;  // 0x0348, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Exotic;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Exotic_Hovered;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Normal;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ExoticItem;  // 0x0368, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Hovered;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAlterationsRowHandle Alteration;  // 0x0378, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle ItemIconOverride;  // 0x0390, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagContainer GeneratedTags;  // 0x03A8, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LegendaryItem;  // 0x03C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Legendary;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInterface* ItemSlot_Legendary_Hovered;  // 0x03D8, size 0x8

    UFUNCTION() void BndEvt__UMG_FieldGuideItemResourceIcon_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_FieldGuideItemResourceIcon_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_FieldGuideItemResourceIcon_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItemResourceIcon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FilterItems__DelegateSignature(FFieldGuideCategoriesRowHandle Category, FItemsStaticRowHandle Item);  // parameters 0x30
};
