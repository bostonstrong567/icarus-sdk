// /Game/UI/Windows/GreatHunt/UMG_LegendaryItem_Button.UMG_LegendaryItem_Button_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_LegendaryItem_Button_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Hover;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* WeaponBackground;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* WeaponBackgroundHover;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* WeaponBorder;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* WeaponBorderHover;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* WeaponButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WeaponFront;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WeaponName;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FItemClicked ItemClicked;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLivingItemShopItemsRowHandle LegendaryItem;  // 0x02B8, size 0x18

    UFUNCTION() void BndEvt__UMG_GreatHunt_Interface_WeaponButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_GreatHunt_Interface_WeaponButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_LegendaryItem_Button_WeaponButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_LegendaryItem_Button(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ItemClicked__DelegateSignature(FLivingItemShopItemsRowHandle LegendaryItem);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetItem(FLivingItemShopItemsRowHandle LivingItem);  // parameters 0x18
};
