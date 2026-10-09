// /Game/UI/Projection/W_MetaShop.W_MetaShop_C
// Derives from: UW_SpaceTooltip_Base_C > UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x300, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_MetaShop_C : public UW_SpaceTooltip_Base_C
{
public:
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
