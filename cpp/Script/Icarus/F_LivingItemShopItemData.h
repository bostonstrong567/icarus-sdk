// /Script/Icarus.LivingItemShopItemData
// size 0x128, declared in Icarus/Source/Icarus/Traits/Behaviours/LivingItem/LivingItemShopItemData.h

USTRUCT()
struct FLivingItemShopItemData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle ItemTemplate;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWorkshopCost> Cost;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> ItemImage;  // 0x0040, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> ItemBackground;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> ShopBackground;  // 0x0090, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> BossIcon;  // 0x00B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Biomass;  // 0x00E0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDLCPackageDataRowHandle RequiredPackageToPurchase;  // 0x00F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccountFlagsRowHandle RequiredAccountFlag;  // 0x0110, size 0x18
};
