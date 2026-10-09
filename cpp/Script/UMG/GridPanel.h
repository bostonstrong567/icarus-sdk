// /Script/UMG.GridPanel
// Derives from: UPanelWidget > UWidget > UVisual > UObject
// size 0x150, declared in Engine/Source/Runtime/UMG/Public/Components/GridPanel.h

UCLASS()
class UGridPanel : public UPanelWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<float> ColumnFill;  // 0x0120, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<float> RowFill;  // 0x0130, size 0x10
protected:
    TSharedPtr<SGridPanel,0> MyGridPanel;  // 0x0140, not reflected
public:
    UFUNCTION(BlueprintCallable) UGridSlot* AddChildToGrid(UWidget* Content, int32 InRow, int32 InColumn);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetColumnFill(int32 ColumnIndex, float Coefficient);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetRowFill(int32 ColumnIndex, float Coefficient);  // parameters 0x8
};
