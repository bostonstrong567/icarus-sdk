// /Game/UI/Projection/Hunting/W_ProjectionPopup_Deer.W_ProjectionPopup_Deer_C
// Derives from: UW_ProjectionWidget_Hunting_C > UW_ProjectionWidget_C > UHuntingWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2F4, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_ProjectionPopup_Deer_C : public UW_ProjectionWidget_Hunting_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* AgeText;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DistanceText;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ProjectionImage;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Distance;  // 0x02F0, size 0x4

    UFUNCTION(BlueprintCallable) void SetDistance(float Distance);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateVisuals();
};
