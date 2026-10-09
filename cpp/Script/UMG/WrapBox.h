// /Script/UMG.WrapBox
// Derives from: UPanelWidget > UWidget > UVisual > UObject
// size 0x148, declared in Engine/Source/Runtime/UMG/Public/Components/WrapBox.h

UCLASS()
class UWrapBox : public UPanelWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D InnerSlotPadding;  // 0x0120, size 0x8
    UPROPERTY(Deprecated) float WrapWidth;  // 0x0128, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float WrapSize;  // 0x012C, size 0x4
    UPROPERTY(Deprecated) bool bExplicitWrapWidth;  // 0x0130, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bExplicitWrapSize;  // 0x0131, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EOrientation> Orientation;  // 0x0132, size 0x1
protected:
    TSharedPtr<SWrapBox,0> MyWrapBox;  // 0x0138, not reflected
public:
    UFUNCTION(BlueprintCallable) UWrapBoxSlot* AddChildToWrapBox(UWidget* Content);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetInnerSlotPadding(FVector2D InPadding);  // parameters 0x8
};
