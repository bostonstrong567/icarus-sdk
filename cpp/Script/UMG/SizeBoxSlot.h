// /Script/UMG.SizeBoxSlot
// Derives from: UPanelSlot > UVisual > UObject
// size 0x60, declared in Engine/Source/Runtime/UMG/Public/Components/SizeBoxSlot.h

UCLASS()
class USizeBoxSlot : public UPanelSlot
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin Padding;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;  // 0x0058, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EVerticalAlignment> VerticalAlignment;  // 0x0059, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TWeakPtr<SBox,0> SizeBox;  // 0x0048, private

    UFUNCTION(BlueprintCallable) void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPadding(FMargin InPadding);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);  // parameters 0x1
};
