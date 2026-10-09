// /Script/Icarus.SettingsSection
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E8, declared in Icarus/Source/Icarus/UI/Settings/SettingsSection.h

UCLASS(EditInlineNew)
class USettingsSection : public UUserWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Instanced, BlueprintReadOnly) USettingsView* SettingsView;  // 0x0260, size 0x8
    UPROPERTY(BlueprintReadOnly) FName SettingCategory;  // 0x0268, size 0x8
    UPROPERTY(BlueprintReadOnly) FName SettingSection;  // 0x0270, size 0x8
    UPROPERTY(BlueprintReadOnly) TMap<int32, FText> Requirements;  // 0x0278, size 0x50
    UPROPERTY(BlueprintReadOnly) FText ConfirmMessage;  // 0x02C8, size 0x18
    UPROPERTY(BlueprintReadOnly) bool bHasApply;  // 0x02E0, size 0x1
    UPROPERTY(BlueprintReadOnly) bool bHasReset;  // 0x02E1, size 0x1
    UPROPERTY(BlueprintReadOnly) bool bHasConfirm;  // 0x02E2, size 0x1
public:
    UFUNCTION(BlueprintImplementableEvent) void AddWidgetToSection(USettingWidget* Widget);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ApplySettings();
    UFUNCTION(BlueprintImplementableEvent) void ConfirmSettings();
    UFUNCTION(BlueprintImplementableEvent) void DirtySection();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnRefresh();
    UFUNCTION(BlueprintImplementableEvent) void PostSetup();
    UFUNCTION(BlueprintImplementableEvent) void RevertSettings();
    UFUNCTION(BlueprintImplementableEvent) void SetDisplayName(const FText& DisplayName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetSettingsView(USettingsView* View);  // parameters 0x8
};
