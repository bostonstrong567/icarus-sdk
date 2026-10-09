// /Script/UMG.Overlay
// Derives from: UPanelWidget > UWidget > UVisual > UObject
// size 0x130, declared in Engine/Source/Runtime/UMG/Public/Components/Overlay.h

UCLASS()
class UOverlay : public UPanelWidget
{
protected:
    TSharedPtr<SOverlay,0> MyOverlay;  // 0x0120, not reflected
public:
    UFUNCTION(BlueprintCallable) UOverlaySlot* AddChildToOverlay(UWidget* Content);  // parameters 0x10
};
