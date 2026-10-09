// /Script/Icarus.KeybindingWidget
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, declared in Icarus/Source/Icarus/UI/Settings/KeybindingWidget.h

UCLASS(EditInlineNew)
class UKeybindingWidget : public UIcarusWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(BlueprintReadOnly) FKeybindingsRowHandle KeybindRow;  // 0x0298, size 0x18
public:
    UFUNCTION(BlueprintImplementableEvent) void PostSetup();
};
