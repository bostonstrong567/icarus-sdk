// /Script/Icarus.SettingWidget_Keybindings
// Derives from: USettingWidget > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x390, declared in Icarus/Source/Icarus/UI/Settings/SettingWidget_Keybindings.h

UCLASS(EditInlineNew)
class USettingWidget_Keybindings : public USettingWidget
{
public:

    UFUNCTION(BlueprintImplementableEvent) void ClearKeybindingWidgets();
    UFUNCTION(BlueprintImplementableEvent) UKeybindingWidget* CreateKeybindingWidget(const FKeybindingsRowHandle& Keybinding);  // parameters 0x20
};
