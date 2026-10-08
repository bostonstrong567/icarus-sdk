// /Game/UI/Components/FieldGuide/UMG_FieldGuideItem_ResourceNetwork_Item.UMG_FieldGuideItem_ResourceNetwork_Item_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x378, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItem_ResourceNetwork_Item_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Corner_Animation;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AmountText;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button_0;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Corner;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_1;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_2;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_3;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_4;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* RecievingProgressBar;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ResourceIcon;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor OxygenWhite;  // 0x02B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor FuelGreen;  // 0x02E0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor WaterBlue;  // 0x0308, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor EnergyYellow;  // 0x0330, size 0x28
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FResourceClicked ResourceClicked;  // 0x0358, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum Resource;  // 0x0368, size 0x10

    UFUNCTION() void BndEvt__UMG_FieldGuideItem_ResourceNetwork_Item_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_FieldGuideItem_ResourceNetwork_Item_Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_FieldGuideItem_ResourceNetwork_Item_Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItem_ResourceNetwork_Item(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ResourceClicked__DelegateSignature(FFieldGuideCategoriesRowHandle CategoryRow, FItemsStaticRowHandle Item);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void Setup(FIcarusResourcesEnum ResourceType, int32 Amount, EResourceNetworkFlowType FlowType);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void SetupTooltip();
    UFUNCTION(BlueprintCallable) void Setup_IconNumber(FIcarusResourcesEnum ResourceType, int32 Amount);  // parameters 0x14
};
