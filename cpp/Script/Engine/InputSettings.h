// /Script/Engine.InputSettings
// Derives from: UObject
// size 0x140, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/InputSettings.h

UCLASS(Config=Input)
class UInputSettings : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Config) TArray<FInputAxisConfigEntry> AxisConfig;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, Config) uint8 bAltEnterTogglesFullscreen : 1;  // 0x0038, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bF11TogglesFullscreen : 1;  // 0x0038, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bUseMouseForTouch : 1;  // 0x0038, mask 0x04
    UPROPERTY(EditAnywhere, Config) uint8 bEnableMouseSmoothing : 1;  // 0x0038, mask 0x08
    UPROPERTY(EditAnywhere, Config) uint8 bEnableFOVScaling : 1;  // 0x0038, mask 0x10
    UPROPERTY(EditAnywhere, Config) uint8 bCaptureMouseOnLaunch : 1;  // 0x0038, mask 0x20
    UPROPERTY(Config, Deprecated) uint8 bDefaultViewportMouseLock : 1;  // 0x0038, mask 0x40
    UPROPERTY(EditAnywhere, Config) uint8 bAlwaysShowTouchInterface : 1;  // 0x0038, mask 0x80
    UPROPERTY(EditAnywhere, Config) uint8 bShowConsoleOnFourFingerTap : 1;  // 0x0039, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bEnableGestureRecognizer : 1;  // 0x0039, mask 0x02
    UPROPERTY(EditAnywhere, Config) bool bUseAutocorrect;  // 0x003A, size 0x1
    UPROPERTY(EditAnywhere, Config) TArray<FString> ExcludedAutocorrectOS;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FString> ExcludedAutocorrectCultures;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FString> ExcludedAutocorrectDeviceModels;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, Config) EMouseCaptureMode DefaultViewportMouseCaptureMode;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere, Config) EMouseLockMode DefaultViewportMouseLockMode;  // 0x0071, size 0x1
    UPROPERTY(EditAnywhere, Config) float FOVScale;  // 0x0074, size 0x4
    UPROPERTY(EditAnywhere, Config) float DoubleClickTime;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath DefaultTouchInterface;  // 0x0100, size 0x18
    UPROPERTY(Config, Deprecated) FKey ConsoleKey;  // 0x0118, size 0x18
    UPROPERTY(EditAnywhere, Config) TArray<FKey> ConsoleKeys;  // 0x0130, size 0x10
private:
    UPROPERTY(EditAnywhere, Config) TArray<FInputActionKeyMapping> ActionMappings;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FInputAxisKeyMapping> AxisMappings;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FInputActionSpeechMapping> SpeechMappings;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, Config) TSoftClassPtr<UPlayerInput> DefaultPlayerInputClass;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, Config) TSoftClassPtr<UInputComponent> DefaultInputComponentClass;  // 0x00D8, size 0x28
public:
    UFUNCTION(BlueprintCallable) void AddActionMapping(const FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);  // parameters 0x29
    UFUNCTION(BlueprintCallable) void AddAxisMapping(const FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);  // parameters 0x29
    UFUNCTION(BlueprintCallable) void ForceRebuildKeymaps();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetActionMappingByName(FName InActionName, TArray<FInputActionKeyMapping>& OutMappings) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetActionNames(TArray<FName>& ActionNames) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAxisMappingByName(FName InAxisName, TArray<FInputAxisKeyMapping>& OutMappings) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAxisNames(TArray<FName>& AxisNames) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UInputSettings* GetInputSettings();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveActionMapping(const FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);  // parameters 0x29
    UFUNCTION(BlueprintCallable) void RemoveAxisMapping(const FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);  // parameters 0x29
    UFUNCTION(BlueprintCallable) void SaveKeyMappings();
};
