// /Script/Engine.GameUserSettings
// Derives from: UObject
// size 0x120, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/GameUserSettings.h

UCLASS(Config=GameUserSettings)
class UGameUserSettings : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Config) bool bUseVSync;  // 0x0028, size 0x1
    UPROPERTY(Config) bool bUseDynamicResolution;  // 0x0029, size 0x1
    Scalability::FQualityLevels ScalabilityQuality;  // 0x0030, not reflected
protected:
    UPROPERTY(Config) uint32 ResolutionSizeX;  // 0x0080, size 0x4
    UPROPERTY(Config) uint32 ResolutionSizeY;  // 0x0084, size 0x4
    UPROPERTY(Config) uint32 LastUserConfirmedResolutionSizeX;  // 0x0088, size 0x4
    UPROPERTY(Config) uint32 LastUserConfirmedResolutionSizeY;  // 0x008C, size 0x4
    UPROPERTY(Config) int32 WindowPosX;  // 0x0090, size 0x4
    UPROPERTY(Config) int32 WindowPosY;  // 0x0094, size 0x4
    UPROPERTY(Config) int32 FullscreenMode;  // 0x0098, size 0x4
    UPROPERTY(Config) int32 LastConfirmedFullscreenMode;  // 0x009C, size 0x4
    UPROPERTY(Config) int32 PreferredFullscreenMode;  // 0x00A0, size 0x4
    UPROPERTY(Config) uint32 Version;  // 0x00A4, size 0x4
    UPROPERTY(Config) int32 AudioQualityLevel;  // 0x00A8, size 0x4
    UPROPERTY(Config) int32 LastConfirmedAudioQualityLevel;  // 0x00AC, size 0x4
    UPROPERTY(Config) float FrameRateLimit;  // 0x00B0, size 0x4
    float MinResolutionScale;  // 0x00B4, not reflected
    UPROPERTY(Config) int32 DesiredScreenWidth;  // 0x00B8, size 0x4
    UPROPERTY(Config) bool bUseDesiredScreenHeight;  // 0x00BC, size 0x1
    UPROPERTY(Config) int32 DesiredScreenHeight;  // 0x00C0, size 0x4
    UPROPERTY(Config) int32 LastUserConfirmedDesiredScreenWidth;  // 0x00C4, size 0x4
    UPROPERTY(Config) int32 LastUserConfirmedDesiredScreenHeight;  // 0x00C8, size 0x4
    UPROPERTY(Config) float LastRecommendedScreenWidth;  // 0x00CC, size 0x4
    UPROPERTY(Config) float LastRecommendedScreenHeight;  // 0x00D0, size 0x4
    UPROPERTY(Config) float LastCPUBenchmarkResult;  // 0x00D4, size 0x4
    UPROPERTY(Config) float LastGPUBenchmarkResult;  // 0x00D8, size 0x4
    UPROPERTY(Config) TArray<float> LastCPUBenchmarkSteps;  // 0x00E0, size 0x10
    UPROPERTY(Config) TArray<float> LastGPUBenchmarkSteps;  // 0x00F0, size 0x10
    UPROPERTY(Config) float LastGPUBenchmarkMultiplier;  // 0x0100, size 0x4
    UPROPERTY(Config) bool bUseHDRDisplayOutput;  // 0x0104, size 0x1
    UPROPERTY(Config) int32 HDRDisplayOutputNits;  // 0x0108, size 0x4
    UPROPERTY(BlueprintAssignable) FOnGameUserSettingsUINeedsUpdate OnGameUserSettingsUINeedsUpdate;  // 0x0110, size 0x10
public:
    UFUNCTION(BlueprintCallable) void ApplyHardwareBenchmarkResults();
    UFUNCTION(BlueprintCallable) void ApplyNonResolutionSettings();
    UFUNCTION(BlueprintCallable) void ApplyResolutionSettings(bool bCheckForCommandLineOverrides);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ApplySettings(bool bCheckForCommandLineOverrides);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ConfirmVideoMode();
    UFUNCTION(BlueprintCallable) void EnableHDRDisplayOutput(bool bEnable, int32 DisplayNits);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetAntiAliasingQuality() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetAudioQualityLevel() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetCurrentHDRDisplayNits() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) static FIntPoint GetDefaultResolution();  // parameters 0x8
    UFUNCTION(BlueprintCallable) float GetDefaultResolutionScale();  // parameters 0x4
    UFUNCTION(BlueprintCallable) static TEnumAsByte<EWindowMode> GetDefaultWindowMode();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static FIntPoint GetDefaultWindowPosition();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FIntPoint GetDesktopResolution() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetFoliageQuality() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetFramePace();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFrameRateLimit() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<EWindowMode> GetFullscreenMode() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) static UGameUserSettings* GetGameUserSettings();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<EWindowMode> GetLastConfirmedFullscreenMode() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FIntPoint GetLastConfirmedScreenResolution() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetOverallScalabilityLevel() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPostProcessingQuality() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<EWindowMode> GetPreferredFullscreenMode() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) float GetRecommendedResolutionScale();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetResolutionScaleInformation(float& CurrentScaleNormalized, int32& CurrentScaleValue, int32& MinScaleValue, int32& MaxScaleValue) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetResolutionScaleInformationEx(float& CurrentScaleNormalized, float& CurrentScaleValue, float& MinScaleValue, float& MaxScaleValue) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetResolutionScaleNormalized() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FIntPoint GetScreenResolution() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetShadingQuality() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetShadowQuality() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetSyncInterval();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTextureQuality() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetViewDistanceQuality() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetVisualEffectQuality() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsDirty() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsDynamicResolutionDirty() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsDynamicResolutionEnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsFullscreenModeDirty() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsHDREnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsScreenResolutionDirty() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsVSyncDirty() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsVSyncEnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LoadSettings(bool bForceReload);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ResetToCurrentSettings();
    UFUNCTION(BlueprintCallable) void RevertVideoMode();
    UFUNCTION(BlueprintCallable) void RunHardwareBenchmark(int32 WorkScale, float CPUMultiplier, float GPUMultiplier);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SaveSettings();
    UFUNCTION(BlueprintCallable) void SetAntiAliasingQuality(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAudioQualityLevel(int32 QualityLevel);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetBenchmarkFallbackValues();
    UFUNCTION(BlueprintCallable) void SetDynamicResolutionEnabled(bool bEnable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFoliageQuality(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFrameRateLimit(float NewLimit);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFullscreenMode(TEnumAsByte<EWindowMode> InFullscreenMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetOverallScalabilityLevel(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPostProcessingQuality(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetResolutionScaleNormalized(float NewScaleNormalized);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetResolutionScaleValue(int32 NewScaleValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetResolutionScaleValueEx(float NewScaleValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetScreenResolution(FIntPoint Resolution);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetShadingQuality(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetShadowQuality(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTextureQuality(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetToDefaults();
    UFUNCTION(BlueprintCallable) void SetVSyncEnabled(bool bEnable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetViewDistanceQuality(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetVisualEffectQuality(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool SupportsHDRDisplayOutput() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ValidateSettings();

    // Virtual functions that start here:
    //   ApplyHardwareBenchmarkResults, ApplyNonResolutionSettings, ApplySettings, ConfirmVideoMode
    //   GetDefaultResolutionScale, GetEffectiveFrameRateLimit, GetOverallScalabilityLevel
    //   GetRecommendedResolutionScale, GetWindowPosition, IsDirty, IsVersionValid, LoadSettings
    //   RequestUIUpdate, ResetToCurrentSettings, RunHardwareBenchmark, SaveSettings
    //   SetOverallScalabilityLevel, SetToDefaults, SetWindowPosition, SupportsHDRDisplayOutput
    //   UpdateVersion, ValidateSettings
};
