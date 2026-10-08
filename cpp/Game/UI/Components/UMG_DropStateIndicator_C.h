// /Game/UI/Components/UMG_DropStateIndicator.UMG_DropStateIndicator_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x269, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DropStateIndicator_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ToggleImage;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Toggled;  // 0x0268, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) FSlateBrush GetImage();  // parameters 0x88
};
