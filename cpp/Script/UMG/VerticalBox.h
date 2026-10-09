// /Script/UMG.VerticalBox
// Derives from: UPanelWidget > UWidget > UVisual > UObject
// size 0x130, declared in Engine/Source/Runtime/UMG/Public/Components/VerticalBox.h

UCLASS()
class UVerticalBox : public UPanelWidget
{
protected:
    TSharedPtr<SVerticalBox,0> MyVerticalBox;  // 0x0120, not reflected
public:
    UFUNCTION(BlueprintCallable) UVerticalBoxSlot* AddChildToVerticalBox(UWidget* Content);  // parameters 0x10
};
