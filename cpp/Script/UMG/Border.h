// /Script/UMG.Border
// Derives from: UContentWidget > UPanelWidget > UWidget > UVisual > UObject
// size 0x270, declared in Engine/Source/Runtime/UMG/Public/Components/Border.h

UCLASS()
class UBorder : public UContentWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;  // 0x0120, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EVerticalAlignment> VerticalAlignment;  // 0x0121, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bShowEffectWhenDisabled : 1;  // 0x0122, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor ContentColorAndOpacity;  // 0x0124, size 0x10
    UPROPERTY() FGetLinearColor ContentColorAndOpacityDelegate;  // 0x0134, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin Padding;  // 0x0144, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateBrush Background;  // 0x0158, size 0x88
    UPROPERTY() FGetSlateBrush BackgroundDelegate;  // 0x01E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor BrushColor;  // 0x01F0, size 0x10
    UPROPERTY() FGetLinearColor BrushColorDelegate;  // 0x0200, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D DesiredSizeScale;  // 0x0210, size 0x8
    UPROPERTY(EditAnywhere) bool bFlipForRightToLeftFlowDirection;  // 0x0218, size 0x1
    UPROPERTY(EditAnywhere) FOnPointerEvent OnMouseButtonDownEvent;  // 0x021C, size 0x10
    UPROPERTY(EditAnywhere) FOnPointerEvent OnMouseButtonUpEvent;  // 0x022C, size 0x10
    UPROPERTY(EditAnywhere) FOnPointerEvent OnMouseMoveEvent;  // 0x023C, size 0x10
    UPROPERTY(EditAnywhere) FOnPointerEvent OnMouseDoubleClickEvent;  // 0x024C, size 0x10
protected:
    TSharedPtr<SBorder,0> MyBorder;  // 0x0260, not reflected
public:
    UFUNCTION(BlueprintCallable) UMaterialInstanceDynamic* GetDynamicMaterial();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetBrush(const FSlateBrush& InBrush);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void SetBrushColor(FLinearColor InBrushColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetBrushFromAsset(USlateBrushAsset* Asset);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetBrushFromMaterial(UMaterialInterface* Material);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetBrushFromTexture(UTexture2D* Texture);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetDesiredSizeScale(FVector2D InScale);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPadding(FMargin InPadding);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);  // parameters 0x1
};
