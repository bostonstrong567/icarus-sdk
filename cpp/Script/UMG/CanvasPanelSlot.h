// /Script/UMG.CanvasPanelSlot
// Derives from: UPanelSlot > UVisual > UObject
// size 0x70, declared in Engine/Source/Runtime/UMG/Public/Components/CanvasPanelSlot.h

UCLASS()
class UCanvasPanelSlot : public UPanelSlot
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FAnchorData LayoutData;  // 0x0038, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bAutoSize;  // 0x0060, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 ZOrder;  // 0x0064, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    SConstraintCanvas::FSlot * Slot;  // 0x0068, private

    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetAlignment() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FAnchors GetAnchors() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetAutoSize() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FAnchorData GetLayout() const;  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) FMargin GetOffsets() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetPosition() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetSize() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetZOrder() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAlignment(FVector2D InAlignment);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetAnchors(FAnchors InAnchors);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetAutoSize(bool InbAutoSize);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLayout(const FAnchorData& InLayoutData);  // parameters 0x28
    UFUNCTION() void SetMaximum(FVector2D InMaximumAnchors);  // parameters 0x8
    UFUNCTION() void SetMinimum(FVector2D InMinimumAnchors);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetOffsets(FMargin InOffset);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetPosition(FVector2D InPosition);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetSize(FVector2D InSize);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetZOrder(int32 InZOrder);  // parameters 0x4
};
