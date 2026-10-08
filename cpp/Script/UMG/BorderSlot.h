// /Script/UMG.BorderSlot
// Derives from: UPanelSlot > UVisual > UObject
// size 0x60, declared in Engine/Source/Runtime/UMG/Public/Components/BorderSlot.h

UCLASS()
class UBorderSlot : public UPanelSlot
{
public:
    UPROPERTY(EditAnywhere) FMargin Padding;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere) TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EVerticalAlignment> VerticalAlignment;  // 0x0049, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TWeakPtr<SBorder,0> Border;  // 0x0050, private

    UFUNCTION(BlueprintCallable) void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPadding(FMargin InPadding);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);  // parameters 0x1
};
