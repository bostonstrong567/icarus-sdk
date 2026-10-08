// /Game/UI/Components/FieldGuide/UMG_FieldGuideItemResourceDescription.UMG_FieldGuideItemResourceDescription_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x338, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItemResourceDescription_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BaseBorder;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CountContainer;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CountText;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InteractableFrame;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemIconDynamic;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ItemSlot;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MasterOverlay;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFilterItems FilterItems;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemableRowHandle Itemable;  // 0x02B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StackCount;  // 0x02D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText OverrideText;  // 0x02D8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFieldGuideCategoriesRowHandle CategoryRow;  // 0x02F0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle ItemRow;  // 0x0308, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAlterationsRowHandle Alteration;  // 0x0320, size 0x18

    UFUNCTION() void BndEvt__UMG_FieldGuideItemResourceDescription_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItemResourceDescription(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FilterItems__DelegateSignature(FFieldGuideCategoriesRowHandle Category, FItemsStaticRowHandle Item);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SetItemLinkInfo(FItemsStaticRowHandle Item, FFieldGuideCategoriesRowHandle Category);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SetSeed();
    UFUNCTION(BlueprintCallable) void SetupAlteration(FItemsStaticRowHandle Item, FAlterationsRowHandle Alteration);  // parameters 0x30
};
