// /Game/BP/UI/InventoryPlayer/UMG_CardText.UMG_CardText_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CardText_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_31;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText CardText;  // 0x0268, size 0x18
};
