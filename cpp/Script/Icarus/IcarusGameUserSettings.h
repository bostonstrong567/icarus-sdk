// /Script/Icarus.IcarusGameUserSettings
// Derives from: UIcarusGameUserSettingsGen > UIcarusGameUserSettingsPreGen > UGameUserSettings > UObject
// size 0x2D0, declared in Icarus/Source/Icarus/IcarusGameUserSettings.h

UCLASS(Config=GameUserSettings)
class UIcarusGameUserSettings : public UIcarusGameUserSettingsGen
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnMouseSensitivityChanged OnMouseSensitivityChanged;  // 0x0258, size 0x1
    FOnGameUserSettingsUINeedsUpdate WidgetRefreshCallback;  // 0x0260, not reflected
    FOnRemoteUserSettingChanged OnRemoteUserSettingChanged;  // 0x0270, not reflected
protected:
    bool bCanConfirmVideoMode;  // 0x0271, not reflected
    UPROPERTY(Config) uint32 PatchVersion;  // 0x0274, size 0x4
    UGameUserSettings & Base;  // 0x0278, not reflected
    UPROPERTY() TMap<FName, USettingWidget*> SettingWidgets;  // 0x0280, size 0x50
public:
    UFUNCTION(BlueprintCallable) void ApplyChangesFromUI(USettingsSection* Section);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AutoTuneGraphicsSettings();
    UFUNCTION(BlueprintCallable) void ConfirmChangesFromUI(USettingsSection* Section);  // parameters 0x8
    UFUNCTION(BlueprintCallable) USettingsView* CreateWidgetsForCategory(UUserWidget* OwningWidget, TSubclassOf<UObject> SettingsViewClass, ESettingsCategory Category);  // parameters 0x20
    UFUNCTION() void DisableDeployableCameraRotationChanged(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetCanSprintCancelReload() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) static UIcarusGameUserSettings* GetIcarusGameUserSettings();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMouseSensitivityParameters(float& Yaw, float& Pitch, float& AimYaw, float& AimPitch);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsPlayerUsingControllerStatic();  // parameters 0x1
    UFUNCTION() void OnDirty();
    UFUNCTION(BlueprintCallable) void RevertChangesFromUI(USettingsSection* Section);  // parameters 0x8

    // Virtual functions that start here:
    //   GetCanSprintCancelReload
};
