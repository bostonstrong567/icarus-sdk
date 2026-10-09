// /Script/Icarus.SettingsMenu
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x298, declared in Icarus/Source/Icarus/UI/Settings/SettingsMenu.h

UCLASS(EditInlineNew)
class USettingsMenu : public UIcarusWidget
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Save(bool bForce);  // parameters 0x1
};
