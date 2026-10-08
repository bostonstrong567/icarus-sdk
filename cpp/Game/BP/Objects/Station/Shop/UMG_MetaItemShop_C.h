// /Game/BP/Objects/Station/Shop/UMG_MetaItemShop.UMG_MetaItemShop_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x388, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MetaItemShop_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* PurchaseClose;  // 0x0288, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* PurchaseLoad;  // 0x0290, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeLoadingScreen;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* FiltersBox;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* FiltersBox_1;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_3;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_4;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_5;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_6;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_62;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_88;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_92;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* MainInventory;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ShopClosed;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ShopClosedText;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGridPanel* ShopItems;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* Tab1;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* Tab1_1;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* Tab1_2;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* Tab1_3;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* Tab1_4;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PurchaseIndex;  // 0x0358, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText TempCost;  // 0x0360, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMargin ShopItemPadding;  // 0x0378, size 0x10

    UFUNCTION() void ExecuteUbergraph_UMG_MetaItemShop(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Opened();
    UFUNCTION(BlueprintCallable) void PurchaseItemConfirmed();
    UFUNCTION(BlueprintCallable) void PurchaseItemFailed();
    UFUNCTION(BlueprintCallable) void PurchaseMetaItem(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PurchaseOutcome(bool Success);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShopUpdated();
    UFUNCTION(BlueprintCallable) void Update();
};
