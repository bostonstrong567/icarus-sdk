// /Game/UI/Windows/UMG_LoadingAssetViewer.UMG_LoadingAssetViewer_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_LoadingAssetViewer_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* RenderBackground;  // 0x0268, size 0x8
};
