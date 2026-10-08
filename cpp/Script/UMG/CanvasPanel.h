// /Script/UMG.CanvasPanel
// Derives from: UPanelWidget > UWidget > UVisual > UObject
// size 0x130, declared in Engine/Source/Runtime/UMG/Public/Components/CanvasPanel.h

UCLASS()
class UCanvasPanel : public UPanelWidget
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SConstraintCanvas,0> MyCanvas;  // 0x0120, protected

    UFUNCTION(BlueprintCallable) UCanvasPanelSlot* AddChildToCanvas(UWidget* Content);  // parameters 0x10
};
