// /Script/Icarus.KeybindingWidget
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, declared in Icarus/Source/Icarus/UI/Settings/KeybindingWidget.h

UCLASS(EditInlineNew)
class UKeybindingWidget : public UIcarusWidget
{
public:
    UPROPERTY(BlueprintReadOnly) FKeybindingsRowHandle KeybindRow;  // 0x0298, size 0x18

    UFUNCTION(BlueprintImplementableEvent) void PostSetup();
};
