// /Script/Icarus.SettingsView
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, declared in Icarus/Source/Icarus/UI/Settings/SettingsView.h

UCLASS(EditInlineNew)
class USettingsView : public UIcarusWidget
{
public:
    UPROPERTY(BlueprintReadOnly) FName SettingCategory;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadOnly) USettingsMenu* SettingsMenu;  // 0x02A0, size 0x8

    UFUNCTION(BlueprintImplementableEvent) USettingsSection* CreateNewSection();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void LoadApplySaveSettings(bool bLoadSettings, bool bApplySettings, bool bSaveSettings);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnRefresh();
    UFUNCTION(BlueprintImplementableEvent) void PostSetup();
    UFUNCTION(BlueprintCallable) void SetSettingsMenu(USettingsMenu* Menu);  // parameters 0x8
};
