// /Script/UMG.VerticalBox
// Derives from: UPanelWidget > UWidget > UVisual > UObject
// size 0x130, declared in Engine/Source/Runtime/UMG/Public/Components/VerticalBox.h

UCLASS()
class UVerticalBox : public UPanelWidget
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SVerticalBox,0> MyVerticalBox;  // 0x0120, protected

    UFUNCTION(BlueprintCallable) UVerticalBoxSlot* AddChildToVerticalBox(UWidget* Content);  // parameters 0x10
};
