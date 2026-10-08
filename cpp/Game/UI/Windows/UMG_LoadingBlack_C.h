// /Game/UI/Windows/UMG_LoadingBlack.UMG_LoadingBlack_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x268, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_LoadingBlack_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingIcon_C* UMG_LoadingIcon;  // 0x0260, size 0x8
};
