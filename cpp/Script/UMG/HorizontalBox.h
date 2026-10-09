// /Script/UMG.HorizontalBox
// Derives from: UPanelWidget > UWidget > UVisual > UObject
// size 0x130, declared in Engine/Source/Runtime/UMG/Public/Components/HorizontalBox.h

UCLASS()
class UHorizontalBox : public UPanelWidget
{
protected:
    TSharedPtr<SHorizontalBox,0> MyHorizontalBox;  // 0x0120, not reflected
public:
    UFUNCTION(BlueprintCallable) UHorizontalBoxSlot* AddChildToHorizontalBox(UWidget* Content);  // parameters 0x10
};
