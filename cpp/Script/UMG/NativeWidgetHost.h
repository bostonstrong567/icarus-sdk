// /Script/UMG.NativeWidgetHost
// Derives from: UWidget > UVisual > UObject
// size 0x118, declared in Engine/Source/Runtime/UMG/Public/Components/NativeWidgetHost.h

UCLASS()
class UNativeWidgetHost : public UWidget
{
protected:
    TSharedPtr<SWidget,0> NativeWidget;  // 0x0108, not reflected
};
