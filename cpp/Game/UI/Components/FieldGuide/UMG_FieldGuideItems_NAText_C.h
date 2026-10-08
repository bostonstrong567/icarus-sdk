// /Game/UI/Components/FieldGuide/UMG_FieldGuideItems_NAText.UMG_FieldGuideItems_NAText_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x268, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItems_NAText_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DescriptionText;  // 0x0260, size 0x8
};
