// /Game/UI/Popups/BP_TooltipWidgetInterface.BP_TooltipWidgetInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_TooltipWidgetInterface_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void GetTooltipClassOverride(TSoftClassPtr<UHuntingWidget>& ClassOverride);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void GetTooltipRenderLocation(FHitResult InteractableHit, FVector& WorldLocation) const;  // parameters 0x94
};
