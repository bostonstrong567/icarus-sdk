// /Script/UMG.ContentWidget
// Derives from: UPanelWidget > UWidget > UVisual > UObject
// size 0x120, declared in Engine/Source/Runtime/UMG/Public/Components/ContentWidget.h

UCLASS(Abstract)
class UContentWidget : public UPanelWidget
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) UWidget* GetContent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UPanelSlot* GetContentSlot() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) UPanelSlot* SetContent(UWidget* Content);  // parameters 0x10
};
