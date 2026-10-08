// /Game/UI/Windows/UMG_InventoryItemWithBackgroundImage.UMG_InventoryItemWithBackgroundImage_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InventoryItemWithBackgroundImage_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* OverlayImage;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItemSlow_C* UMG_InventoryItemSlow;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0270, size 0x8

    UFUNCTION(BlueprintCallable) void Initialise(UInventory* BoundInventory, int32 Location, UTexture2D* Image);  // parameters 0x18
};
