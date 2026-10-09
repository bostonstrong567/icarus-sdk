// /Script/UMG.ScaleBox
// Derives from: UContentWidget > UPanelWidget > UWidget > UVisual > UObject
// size 0x140, declared in Engine/Source/Runtime/UMG/Public/Components/ScaleBox.h

UCLASS(Config=Engine)
class UScaleBox : public UContentWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EStretch> Stretch;  // 0x0120, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EStretchDirection> StretchDirection;  // 0x0121, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float UserSpecifiedScale;  // 0x0124, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool IgnoreInheritedScale;  // 0x0128, size 0x1
protected:
    TSharedPtr<SScaleBox,0> MyScaleBox;  // 0x0130, not reflected
public:
    UFUNCTION(BlueprintCallable) void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetStretch(TEnumAsByte<EStretch> InStretch);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetUserSpecifiedScale(float InUserSpecifiedScale);  // parameters 0x4
};
