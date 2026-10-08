// /Game/UI/Projection/W_ProjectionWidget_Bed.W_ProjectionWidget_Bed_C
// Derives from: UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2B8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_ProjectionWidget_Bed_C : public UW_ProjectionWidget_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_241;  // 0x02B0, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetOpacityDistanceRanges(float& NearbyDistanceStart, float& NearbyDistanceEnd) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
