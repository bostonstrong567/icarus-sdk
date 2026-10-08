// /Game/UI/Popups/UMG_BedToolTip.UMG_BedToolTip_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BedToolTip_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pointer;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text;  // 0x02B8, size 0x8
};
