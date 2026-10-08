// /Game/UI/Components/Inventory/UMG_InventoryStatusBox.UMG_InventoryStatusBox_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InventoryStatusBox_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_58;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* ScrollBox_Container;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ModifierStateContainer_C* UMG_ModifierStateContainer;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMargin InPadding;  // 0x0278, size 0x10
};
