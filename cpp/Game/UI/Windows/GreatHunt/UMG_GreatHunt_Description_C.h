// /Game/UI/Windows/GreatHunt/UMG_GreatHunt_Description.UMG_GreatHunt_Description_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_GreatHunt_Description_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BulletIcon;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HuntDescriptions;  // 0x0268, size 0x8

    UFUNCTION(BlueprintCallable) void SetDescriptionText(FText Description);  // parameters 0x18
};
