// /Game/UI/Components/UMG_RankBadgeProgress.UMG_RankBadgeProgress_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RankBadgeProgress_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CurrentRank;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* NextRank;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* RankImage;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* RankProgressBar;  // 0x0278, size 0x8
};
