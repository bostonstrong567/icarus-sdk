// /Script/Icarus.IcarusGameUserSettingsPreGen
// Derives from: UGameUserSettings > UObject
// size 0x150, declared in Icarus/Source/Icarus/IcarusGameUserSettingsPreGen.h

UCLASS(Config=GameUserSettings)
class UIcarusGameUserSettingsPreGen : public UGameUserSettings
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnRestartRequested OnRestartRequested;  // 0x0120, size 0x1
protected:
    TSharedPtr<FJsonObject,0> SettingsJson;  // 0x0128, not reflected
    UPROPERTY() UGameUserSettingsSubsystem* Subsystem;  // 0x0138, size 0x8
    bool bInitializing;  // 0x0140, not reflected
    bool bInitialized;  // 0x0141, not reflected
private:
    int32 ApplyLock;  // 0x0144, not reflected
    UPROPERTY(Transient) UStringTable* StringTable;  // 0x0148, size 0x8
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FText FindText(FString Key) const;  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GPUSupportsRTX() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void PopLock_BP(bool bApplyOnRelease);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void PushLock_BP();

    // Virtual functions that start here:
    //   BeginPlay, Initialize, IsInProspect, IsPlayerUsingController, SettingRequiresRestart
};
