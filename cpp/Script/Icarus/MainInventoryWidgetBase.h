// /Script/Icarus.MainInventoryWidgetBase
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x260, declared in Icarus/Source/Icarus/UI/Elements/MainInventoryWidgetBase.h

UCLASS(EditInlineNew)
class UMainInventoryWidgetBase : public UUserWidget
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsInventoryVisible();  // parameters 0x1
};
