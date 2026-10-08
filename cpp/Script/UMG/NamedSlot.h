// /Script/UMG.NamedSlot
// Derives from: UContentWidget > UPanelWidget > UWidget > UVisual > UObject
// size 0x130, declared in Engine/Source/Runtime/UMG/Public/Components/NamedSlot.h

UCLASS()
class UNamedSlot : public UContentWidget
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SBox,0> MyBox;  // 0x0120, protected
};
