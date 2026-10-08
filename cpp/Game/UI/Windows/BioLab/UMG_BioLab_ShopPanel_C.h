// /Game/UI/Windows/BioLab/UMG_BioLab_ShopPanel.UMG_BioLab_ShopPanel_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_ShopPanel_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ComingSoon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CenterAlignedHorizontal_C* General;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_56;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGridPanel* ShopGrid;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Special;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ShopGridRowSize;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ShopGridSpacingVertical;  // 0x0294, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ShopGridSpacingHorizontal;  // 0x0298, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EventsRegistered;  // 0x029C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FShowItem ShowItem;  // 0x02A0, size 0x10

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_ShopPanel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FillShopGrid(TArray<FLivingItemShopItemsRowHandle>& ShopItemsToShow);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetItemsToShow(TArray<FLivingItemShopItemsRowHandle>& ItemsToShow);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnMetaCurrencyChanged();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RegisterEvents();
    UFUNCTION(BlueprintCallable) void ShowItem__DelegateSignature(FLivingItemShopItemsRowHandle Weapon);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UMG_BioLab_ShopPanel_AutoGenFunc(FLivingItemShopItemsRowHandle Weapon);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UnregisterEvents();
};
