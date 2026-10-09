// /Script/UMG.CanvasPanel
// Derives from: UPanelWidget > UWidget > UVisual > UObject
// size 0x130, declared in Engine/Source/Runtime/UMG/Public/Components/CanvasPanel.h

UCLASS()
class UCanvasPanel : public UPanelWidget
{
protected:
    TSharedPtr<SConstraintCanvas,0> MyCanvas;  // 0x0120, not reflected
public:
    UFUNCTION(BlueprintCallable) UCanvasPanelSlot* AddChildToCanvas(UWidget* Content);  // parameters 0x10
};
