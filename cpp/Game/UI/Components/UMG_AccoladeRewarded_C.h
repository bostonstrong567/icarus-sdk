// /Game/UI/Components/UMG_AccoladeRewarded.UMG_AccoladeRewarded_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AccoladeRewarded_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AccoladeImage;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* AccoladeProgressBar;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Outline;  // 0x0270, size 0x8
};
