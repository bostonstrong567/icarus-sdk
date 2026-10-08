// /Game/UI/Components/UMG_CropPlotTier.UMG_CropPlotTier_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CropPlotTier_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* CropTierBox;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_35;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TierText;  // 0x0270, size 0x8

    UFUNCTION(BlueprintCallable) void SetTier(int32 Tier);  // parameters 0x4
};
