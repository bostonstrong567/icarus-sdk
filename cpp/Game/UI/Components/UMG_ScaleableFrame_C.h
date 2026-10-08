// /Game/UI/Components/UMG_ScaleableFrame.UMG_ScaleableFrame_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x268, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ScaleableFrame_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* GridPattern;  // 0x0260, size 0x8
};
