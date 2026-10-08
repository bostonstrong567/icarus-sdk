// /Game/UI/Components/UMG_AreaSelect.UMG_AreaSelect_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x268, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AreaSelect_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SpacePlayerInfo_C* UMG_SpacePlayerInfo;  // 0x0260, size 0x8
};
