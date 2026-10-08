// /Script/UMG.Overlay
// Derives from: UPanelWidget > UWidget > UVisual > UObject
// size 0x130, declared in Engine/Source/Runtime/UMG/Public/Components/Overlay.h

UCLASS()
class UOverlay : public UPanelWidget
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SOverlay,0> MyOverlay;  // 0x0120, protected

    UFUNCTION(BlueprintCallable) UOverlaySlot* AddChildToOverlay(UWidget* Content);  // parameters 0x10
};
