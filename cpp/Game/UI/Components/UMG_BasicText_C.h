// /Game/UI/Components/UMG_BasicText.UMG_BasicText_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BasicText_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Text;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Text;  // 0x0268, size 0x18
};
