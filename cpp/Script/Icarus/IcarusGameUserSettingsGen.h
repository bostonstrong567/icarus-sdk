// /Script/Icarus.IcarusGameUserSettingsGen
// Derives from: UIcarusGameUserSettingsPreGen > UGameUserSettings > UObject
// size 0x258, declared in Icarus/Source/Icarus/Settings/IcarusGenerated/IcarusGameUserSettingsGen.h

UCLASS(Config=GameUserSettings)
class UIcarusGameUserSettingsGen : public UIcarusGameUserSettingsPreGen
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnVSyncApplied OnVSyncApplied;  // 0x0150, size 0x1
    UPROPERTY(BlueprintAssignable) FOnFrameLimitApplied OnFrameLimitApplied;  // 0x0151, size 0x1
    UPROPERTY(BlueprintAssignable) FOnResolutionScaleApplied OnResolutionScaleApplied;  // 0x0152, size 0x1
    UPROPERTY(BlueprintAssignable) FOnFieldOfViewApplied OnFieldOfViewApplied;  // 0x0153, size 0x1
    UPROPERTY(BlueprintAssignable) FOnMotionBlurApplied OnMotionBlurApplied;  // 0x0154, size 0x1
    UPROPERTY(BlueprintAssignable) FOnGammaApplied OnGammaApplied;  // 0x0155, size 0x1
    UPROPERTY(BlueprintAssignable) FOnOverallApplied OnOverallApplied;  // 0x0156, size 0x1
    UPROPERTY(BlueprintAssignable) FOnViewDistanceApplied OnViewDistanceApplied;  // 0x0157, size 0x1
    UPROPERTY(BlueprintAssignable) FOnPostProcessingApplied OnPostProcessingApplied;  // 0x0158, size 0x1
    UPROPERTY(BlueprintAssignable) FOnShadowsApplied OnShadowsApplied;  // 0x0159, size 0x1
    UPROPERTY(BlueprintAssignable) FOnMaxShadowCascadesApplied OnMaxShadowCascadesApplied;  // 0x015A, size 0x1
    UPROPERTY(BlueprintAssignable) FOnContactShadowsApplied OnContactShadowsApplied;  // 0x015B, size 0x1
    UPROPERTY(BlueprintAssignable) FOnLightShadowsApplied OnLightShadowsApplied;  // 0x015C, size 0x1
    UPROPERTY(BlueprintAssignable) FOnDisableGrassShadowsApplied OnDisableGrassShadowsApplied;  // 0x015D, size 0x1
    UPROPERTY(BlueprintAssignable) FOnUseSimpleBuildingShadowsApplied OnUseSimpleBuildingShadowsApplied;  // 0x015E, size 0x1
    UPROPERTY(BlueprintAssignable) FOnShadowFilterMethodApplied OnShadowFilterMethodApplied;  // 0x015F, size 0x1
    UPROPERTY(BlueprintAssignable) FOnTexturesApplied OnTexturesApplied;  // 0x0160, size 0x1
    UPROPERTY(BlueprintAssignable) FOnTextureStreamingPoolsizeApplied OnTextureStreamingPoolsizeApplied;  // 0x0161, size 0x1
    UPROPERTY(BlueprintAssignable) FOnLimitPoolsizeToVRAMApplied OnLimitPoolsizeToVRAMApplied;  // 0x0162, size 0x1
    UPROPERTY(BlueprintAssignable) FOnEffectsApplied OnEffectsApplied;  // 0x0163, size 0x1
    UPROPERTY(BlueprintAssignable) FOnFoliageApplied OnFoliageApplied;  // 0x0164, size 0x1
    UPROPERTY(BlueprintAssignable) FOnShadingApplied OnShadingApplied;  // 0x0165, size 0x1
    UPROPERTY(BlueprintAssignable) FOnAntiAliasingApplied OnAntiAliasingApplied;  // 0x0166, size 0x1
    UPROPERTY(BlueprintAssignable) FOnTessellationApplied OnTessellationApplied;  // 0x0167, size 0x1
    UPROPERTY(BlueprintAssignable) FOnTerrainDeformationExperimentalApplied OnTerrainDeformationExperimentalApplied;  // 0x0168, size 0x1
    UPROPERTY(BlueprintAssignable) FOnVolumetricCloudsApplied OnVolumetricCloudsApplied;  // 0x0169, size 0x1
    UPROPERTY(BlueprintAssignable) FOnSkyboxQualityApplied OnSkyboxQualityApplied;  // 0x016A, size 0x1
    UPROPERTY(BlueprintAssignable) FOnFrameGenerationApplied OnFrameGenerationApplied;  // 0x016B, size 0x1
    UPROPERTY(BlueprintAssignable) FOnSuperResolutionApplied OnSuperResolutionApplied;  // 0x016C, size 0x1
    UPROPERTY(BlueprintAssignable) FOnSharpnessApplied OnSharpnessApplied;  // 0x016D, size 0x1
    UPROPERTY(BlueprintAssignable) FOnNVIDIAReflexLowLatencyApplied OnNVIDIAReflexLowLatencyApplied;  // 0x016E, size 0x1
    UPROPERTY(BlueprintAssignable) FOnFSRModeApplied OnFSRModeApplied;  // 0x016F, size 0x1
    UPROPERTY(BlueprintAssignable) FOnFSRSharpnessApplied OnFSRSharpnessApplied;  // 0x0170, size 0x1
    UPROPERTY(BlueprintAssignable) FOnRTXEnabledApplied OnRTXEnabledApplied;  // 0x0171, size 0x1
    UPROPERTY(BlueprintAssignable) FOnGlobalIlluminationApplied OnGlobalIlluminationApplied;  // 0x0172, size 0x1
    UPROPERTY(BlueprintAssignable) FOnAmbientOcclusionApplied OnAmbientOcclusionApplied;  // 0x0173, size 0x1
    UPROPERTY(BlueprintAssignable) FOnRTShadowsApplied OnRTShadowsApplied;  // 0x0174, size 0x1
    UPROPERTY(BlueprintAssignable) FOnSkylightShadowsApplied OnSkylightShadowsApplied;  // 0x0175, size 0x1
    UPROPERTY(BlueprintAssignable) FOnReflectionsApplied OnReflectionsApplied;  // 0x0176, size 0x1
    UPROPERTY(BlueprintAssignable) FOnDNTDebugForceOpaqueApplied OnDNTDebugForceOpaqueApplied;  // 0x0177, size 0x1
    UPROPERTY(BlueprintAssignable) FOnMasterVolumeApplied OnMasterVolumeApplied;  // 0x0178, size 0x1
    UPROPERTY(BlueprintAssignable) FOnAmbientVolumeApplied OnAmbientVolumeApplied;  // 0x0179, size 0x1
    UPROPERTY(BlueprintAssignable) FOnMusicVolumeApplied OnMusicVolumeApplied;  // 0x017A, size 0x1
    UPROPERTY(BlueprintAssignable) FOnSFXVolumeApplied OnSFXVolumeApplied;  // 0x017B, size 0x1
    UPROPERTY(BlueprintAssignable) FOnDialogueVolumeApplied OnDialogueVolumeApplied;  // 0x017C, size 0x1
    UPROPERTY(BlueprintAssignable) FOnCharacterVoiceVolumeApplied OnCharacterVoiceVolumeApplied;  // 0x017D, size 0x1
    UPROPERTY(BlueprintAssignable) FOnLanguageApplied OnLanguageApplied;  // 0x017E, size 0x1
    UPROPERTY(BlueprintAssignable) FOnKillcamApplied OnKillcamApplied;  // 0x017F, size 0x1
    UPROPERTY(BlueprintAssignable) FOnPlayerMarkerApplied OnPlayerMarkerApplied;  // 0x0180, size 0x1
    UPROPERTY(BlueprintAssignable) FOnClothSimulationApplied OnClothSimulationApplied;  // 0x0181, size 0x1
    UPROPERTY(BlueprintAssignable) FOnCreatureIKApplied OnCreatureIKApplied;  // 0x0182, size 0x1
    UPROPERTY(BlueprintAssignable) FOnShowAimCrosshairApplied OnShowAimCrosshairApplied;  // 0x0183, size 0x1
    UPROPERTY(BlueprintAssignable) FOnShowDamageNumbersApplied OnShowDamageNumbersApplied;  // 0x0184, size 0x1
    UPROPERTY(BlueprintAssignable) FOnShowOnlyMyDamageNumbersApplied OnShowOnlyMyDamageNumbersApplied;  // 0x0185, size 0x1
    UPROPERTY(BlueprintAssignable) FOnShowBloodEffectsApplied OnShowBloodEffectsApplied;  // 0x0186, size 0x1
    UPROPERTY(BlueprintAssignable) FOnShowLightningEffectsApplied OnShowLightningEffectsApplied;  // 0x0187, size 0x1
    UPROPERTY(BlueprintAssignable) FOnMultiplayerGhostBuildingApplied OnMultiplayerGhostBuildingApplied;  // 0x0188, size 0x1
    UPROPERTY(BlueprintAssignable) FOnShowTutorialProspectApplied OnShowTutorialProspectApplied;  // 0x0189, size 0x1
    UPROPERTY(BlueprintAssignable) FOnShowItemHighlightsApplied OnShowItemHighlightsApplied;  // 0x018A, size 0x1
    UPROPERTY(BlueprintAssignable) FOnShowDeployableShelterWarningApplied OnShowDeployableShelterWarningApplied;  // 0x018B, size 0x1
    UPROPERTY(BlueprintAssignable) FOnDisableDeployableCameraRotationApplied OnDisableDeployableCameraRotationApplied;  // 0x018C, size 0x1
    UPROPERTY(BlueprintAssignable) FOnScreenHitEffectsStrengthApplied OnScreenHitEffectsStrengthApplied;  // 0x018D, size 0x1
    UPROPERTY(BlueprintAssignable) FOnShowScreenshakeApplied OnShowScreenshakeApplied;  // 0x018E, size 0x1
    UPROPERTY(BlueprintAssignable) FOnFiberFoliageRespawnApplied OnFiberFoliageRespawnApplied;  // 0x018F, size 0x1
    UPROPERTY(BlueprintAssignable) FOnLargeStonesRespawnApplied OnLargeStonesRespawnApplied;  // 0x0190, size 0x1
    UPROPERTY(BlueprintAssignable) FOnPauseGameinEscapeMenuApplied OnPauseGameinEscapeMenuApplied;  // 0x0191, size 0x1
    UPROPERTY(BlueprintAssignable) FOnSaveGameFrequencyApplied OnSaveGameFrequencyApplied;  // 0x0192, size 0x1
    UPROPERTY(BlueprintAssignable) FOnInteractTimerLengthApplied OnInteractTimerLengthApplied;  // 0x0193, size 0x1
    UPROPERTY(BlueprintAssignable) FOnDisplayHealthNumbersApplied OnDisplayHealthNumbersApplied;  // 0x0194, size 0x1
    UPROPERTY(BlueprintAssignable) FOnBlueprintTooltipOpenAnimationsApplied OnBlueprintTooltipOpenAnimationsApplied;  // 0x0195, size 0x1
    UPROPERTY(BlueprintAssignable) FOnWorkshopTooltipOpenAnimationsApplied OnWorkshopTooltipOpenAnimationsApplied;  // 0x0196, size 0x1
    UPROPERTY(BlueprintAssignable) FOnSkipStartupMoviesApplied OnSkipStartupMoviesApplied;  // 0x0197, size 0x1
    UPROPERTY(BlueprintAssignable) FOnDisplayTemperatureApplied OnDisplayTemperatureApplied;  // 0x0198, size 0x1
    UPROPERTY(BlueprintAssignable) FOnDisableMapSelectionWarningApplied OnDisableMapSelectionWarningApplied;  // 0x0199, size 0x1
    UPROPERTY(BlueprintAssignable) FOnCrosshairColorApplied OnCrosshairColorApplied;  // 0x019A, size 0x1
    UPROPERTY(BlueprintAssignable) FOnCrosshairStyleApplied OnCrosshairStyleApplied;  // 0x019B, size 0x1
    UPROPERTY(BlueprintAssignable) FOnInputTypeApplied OnInputTypeApplied;  // 0x019C, size 0x1
    UPROPERTY(BlueprintAssignable) FOnControllerIconsApplied OnControllerIconsApplied;  // 0x019D, size 0x1
    UPROPERTY(BlueprintAssignable) FOnMouseSensitivityXApplied OnMouseSensitivityXApplied;  // 0x019E, size 0x1
    UPROPERTY(BlueprintAssignable) FOnMouseSensitivityYApplied OnMouseSensitivityYApplied;  // 0x019F, size 0x1
    UPROPERTY(BlueprintAssignable) FOnToggleCrouchApplied OnToggleCrouchApplied;  // 0x01A0, size 0x1
    UPROPERTY(BlueprintAssignable) FOnCrouchLedgeSafetyApplied OnCrouchLedgeSafetyApplied;  // 0x01A1, size 0x1
    UPROPERTY(BlueprintAssignable) FOnToggleSprintApplied OnToggleSprintApplied;  // 0x01A2, size 0x1
    UPROPERTY(BlueprintAssignable) FOnToggleAimApplied OnToggleAimApplied;  // 0x01A3, size 0x1
    UPROPERTY(BlueprintAssignable) FOnSprintCancelReloadApplied OnSprintCancelReloadApplied;  // 0x01A4, size 0x1
    UPROPERTY(BlueprintAssignable) FOnInvertYAxisApplied OnInvertYAxisApplied;  // 0x01A5, size 0x1
    UPROPERTY(BlueprintAssignable) FOnAimSensitivityApplied OnAimSensitivityApplied;  // 0x01A6, size 0x1
protected:
    UPROPERTY(Config) bool bVSync;  // 0x01A7, size 0x1
    UPROPERTY(Config) float FrameLimit;  // 0x01A8, size 0x4
    UPROPERTY(Config) float ResolutionScale;  // 0x01AC, size 0x4
    UPROPERTY(Config) float FieldOfView;  // 0x01B0, size 0x4
    UPROPERTY(Config) float MotionBlur;  // 0x01B4, size 0x4
    UPROPERTY(Config) float Gamma;  // 0x01B8, size 0x4
    UPROPERTY(Config) EOverallSetting Overall;  // 0x01BC, size 0x1
    UPROPERTY(Config) EViewDistanceSetting ViewDistance;  // 0x01BD, size 0x1
    UPROPERTY(Config) EPostProcessingSetting PostProcessing;  // 0x01BE, size 0x1
    UPROPERTY(Config) EShadowsSetting Shadows;  // 0x01BF, size 0x1
    UPROPERTY(Config) float MaxShadowCascades;  // 0x01C0, size 0x4
    UPROPERTY(Config) bool bContactShadows;  // 0x01C4, size 0x1
    UPROPERTY(Config) bool bLightShadows;  // 0x01C5, size 0x1
    UPROPERTY(Config) bool bDisableGrassShadows;  // 0x01C6, size 0x1
    UPROPERTY(Config) bool bUseSimpleBuildingShadows;  // 0x01C7, size 0x1
    UPROPERTY(Config) EShadowFilterMethodSetting ShadowFilterMethod;  // 0x01C8, size 0x1
    UPROPERTY(Config) ETexturesSetting Textures;  // 0x01C9, size 0x1
    UPROPERTY(Config) float TextureStreamingPoolsize;  // 0x01CC, size 0x4
    UPROPERTY(Config) bool bLimitPoolsizeToVRAM;  // 0x01D0, size 0x1
    UPROPERTY(Config) EEffectsSetting Effects;  // 0x01D1, size 0x1
    UPROPERTY(Config) EFoliageSetting Foliage;  // 0x01D2, size 0x1
    UPROPERTY(Config) EShadingSetting Shading;  // 0x01D3, size 0x1
    UPROPERTY(Config) EAntiAliasingSetting AntiAliasing;  // 0x01D4, size 0x1
    UPROPERTY(Config) bool bTessellation;  // 0x01D5, size 0x1
    UPROPERTY(Config) bool bTerrainDeformationExperimental;  // 0x01D6, size 0x1
    UPROPERTY(Config) bool bVolumetricClouds;  // 0x01D7, size 0x1
    UPROPERTY(Config) ESkyboxQualitySetting SkyboxQuality;  // 0x01D8, size 0x1
    UPROPERTY(Config) bool bFrameGeneration;  // 0x01D9, size 0x1
    UPROPERTY(Config) ESuperResolutionSetting SuperResolution;  // 0x01DA, size 0x1
    UPROPERTY(Config) float Sharpness;  // 0x01DC, size 0x4
    UPROPERTY(Config) ENVIDIAReflexLowLatencySetting NVIDIAReflexLowLatency;  // 0x01E0, size 0x1
    UPROPERTY(Config) EFSRModeSetting FSRMode;  // 0x01E1, size 0x1
    UPROPERTY(Config) float FSRSharpness;  // 0x01E4, size 0x4
    UPROPERTY(Config) bool bRTXEnabled;  // 0x01E8, size 0x1
    UPROPERTY(Config) bool bGlobalIllumination;  // 0x01E9, size 0x1
    UPROPERTY(Config) bool bAmbientOcclusion;  // 0x01EA, size 0x1
    UPROPERTY(Config) bool bRTShadows;  // 0x01EB, size 0x1
    UPROPERTY(Config) bool bSkylightShadows;  // 0x01EC, size 0x1
    UPROPERTY(Config) bool bReflections;  // 0x01ED, size 0x1
    UPROPERTY(Config) bool bDNTDebugForceOpaque;  // 0x01EE, size 0x1
    UPROPERTY(Config) float MasterVolume;  // 0x01F0, size 0x4
    UPROPERTY(Config) float AmbientVolume;  // 0x01F4, size 0x4
    UPROPERTY(Config) float MusicVolume;  // 0x01F8, size 0x4
    UPROPERTY(Config) float SFXVolume;  // 0x01FC, size 0x4
    UPROPERTY(Config) float DialogueVolume;  // 0x0200, size 0x4
    UPROPERTY(Config) float CharacterVoiceVolume;  // 0x0204, size 0x4
    UPROPERTY(Config) FString Language;  // 0x0208, size 0x10
    UPROPERTY(Config) bool bKillcam;  // 0x0218, size 0x1
    UPROPERTY(Config) bool bPlayerMarker;  // 0x0219, size 0x1
    UPROPERTY(Config) bool bClothSimulation;  // 0x021A, size 0x1
    UPROPERTY(Config) bool bCreatureIK;  // 0x021B, size 0x1
    UPROPERTY(Config) bool bShowAimCrosshair;  // 0x021C, size 0x1
    UPROPERTY(Config) bool bShowDamageNumbers;  // 0x021D, size 0x1
    UPROPERTY(Config) bool bShowOnlyMyDamageNumbers;  // 0x021E, size 0x1
    UPROPERTY(Config) bool bShowBloodEffects;  // 0x021F, size 0x1
    UPROPERTY(Config) bool bShowLightningEffects;  // 0x0220, size 0x1
    UPROPERTY(Config) bool bMultiplayerGhostBuilding;  // 0x0221, size 0x1
    UPROPERTY(Config) bool bShowTutorialProspect;  // 0x0222, size 0x1
    UPROPERTY(Config) bool bShowItemHighlights;  // 0x0223, size 0x1
    UPROPERTY(Config) bool bShowDeployableShelterWarning;  // 0x0224, size 0x1
    UPROPERTY(Config) bool bDisableDeployableCameraRotation;  // 0x0225, size 0x1
    UPROPERTY(Config) float ScreenHitEffectsStrength;  // 0x0228, size 0x4
    UPROPERTY(Config) bool bShowScreenshake;  // 0x022C, size 0x1
    UPROPERTY(Config) bool bFiberFoliageRespawn;  // 0x022D, size 0x1
    UPROPERTY(Config) bool bLargeStonesRespawn;  // 0x022E, size 0x1
    UPROPERTY(Config) bool bPauseGameinEscapeMenu;  // 0x022F, size 0x1
    UPROPERTY(Config) float SaveGameFrequency;  // 0x0230, size 0x4
    UPROPERTY(Config) float InteractTimerLength;  // 0x0234, size 0x4
    UPROPERTY(Config) bool bDisplayHealthNumbers;  // 0x0238, size 0x1
    UPROPERTY(Config) bool bBlueprintTooltipOpenAnimations;  // 0x0239, size 0x1
    UPROPERTY(Config) bool bWorkshopTooltipOpenAnimations;  // 0x023A, size 0x1
    UPROPERTY(Config) bool bSkipStartupMovies;  // 0x023B, size 0x1
    UPROPERTY(Config) EDisplayTemperatureSetting DisplayTemperature;  // 0x023C, size 0x1
    UPROPERTY(Config) bool bDisableMapSelectionWarning;  // 0x023D, size 0x1
    UPROPERTY(Config) ECrosshairColorSetting CrosshairColor;  // 0x023E, size 0x1
    UPROPERTY(Config) ECrosshairStyleSetting CrosshairStyle;  // 0x023F, size 0x1
    UPROPERTY(Config) EInputTypeSetting InputType;  // 0x0240, size 0x1
    UPROPERTY(Config) EControllerIconsSetting ControllerIcons;  // 0x0241, size 0x1
    UPROPERTY(Config) float MouseSensitivityX;  // 0x0244, size 0x4
    UPROPERTY(Config) float MouseSensitivityY;  // 0x0248, size 0x4
    UPROPERTY(Config) bool bToggleCrouch;  // 0x024C, size 0x1
    UPROPERTY(Config) bool bCrouchLedgeSafety;  // 0x024D, size 0x1
    UPROPERTY(Config) bool bToggleSprint;  // 0x024E, size 0x1
    UPROPERTY(Config) bool bToggleAim;  // 0x024F, size 0x1
    UPROPERTY(Config) bool bSprintCancelReload;  // 0x0250, size 0x1
    UPROPERTY(Config) bool bInvertYAxis;  // 0x0251, size 0x1
    UPROPERTY(Config) float AimSensitivity;  // 0x0254, size 0x4
public:
    UFUNCTION(BlueprintCallable) void ApplyAudioSettings(bool bSaveSettings);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ApplyControlsSettings(bool bSaveSettings);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ApplyDisplaySettings(bool bSaveSettings);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ApplyGameplaySettings(bool bSaveSettings);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ApplySettingsForSection(FName CategoryName, FName SectionName);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckActionsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckAimSensitivityCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckAmbientOcclusionCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckAmbientVolumeCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckAntiAliasingCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckAudioVolumeCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckBlueprintTooltipOpenAnimationsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckCharacterVoiceVolumeCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckClothSimulationCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckContactShadowsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckControllerIconsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckControlsGeneralCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckControlsKeybindingsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckCreatureIKCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckCrosshairColorCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckCrosshairStyleCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckCrouchLedgeSafetyCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckDNTDebugForceOpaqueCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckDialogueVolumeCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckDisableDeployableCameraRotationCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckDisableGrassShadowsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckDisableMapSelectionWarningCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckDisplayAMDFidelityFXCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckDisplayHealthNumbersCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckDisplayModeCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckDisplayNVIDIADLSSCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckDisplayNVIDIAReflexCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckDisplayQualityCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckDisplayRayTracingCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckDisplayTemperatureCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckDisplayVideoCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckDisplayWindowCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckEffectsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckFSRModeCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckFSRSharpnessCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckFiberFoliageRespawnCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckFieldOfViewCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckFoliageCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckFrameGenerationCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckFrameLimitCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckGameplayGeneralCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckGameplayLanguageCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckGameplayUserInterfaceCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckGammaCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckGlobalIlluminationCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckInputTypeCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckInteractTimerLengthCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckInvertYAxisCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckKillcamCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckLanguageCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckLargeStonesRespawnCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckLightShadowsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckLimitPoolsizeToVRAMCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckMasterVolumeCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckMaxShadowCascadesCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckMotionBlurCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckMouseSensitivityXCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckMouseSensitivityYCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckMultiplayerGhostBuildingCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckMusicVolumeCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckNVIDIAReflexLowLatencyCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckOverallCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckPauseGameinEscapeMenuCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckPlayerMarkerCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckPostProcessingCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckRTShadowsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckRTXEnabledCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckReflectionsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckResolutionScaleCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckSFXVolumeCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckSaveGameFrequencyCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckScreenHitEffectsStrengthCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckSectionCondition(FName CategoryName, FName SectionName, int32 Index) const;  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckSettingCondition(FName SettingName, int32 Index) const;  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckShadingCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckShadowFilterMethodCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckShadowsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckSharpnessCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckShowAimCrosshairCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckShowBloodEffectsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckShowDamageNumbersCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckShowDeployableShelterWarningCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckShowItemHighlightsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckShowLightningEffectsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckShowOnlyMyDamageNumbersCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckShowScreenshakeCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckShowTutorialProspectCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckSkipStartupMoviesCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckSkyboxQualityCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckSkylightShadowsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckSprintCancelReloadCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckSuperResolutionCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckTerrainDeformationExperimentalCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckTessellationCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckTextureStreamingPoolsizeCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckTexturesCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckToggleAimCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckToggleCrouchCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckToggleSprintCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckUseSimpleBuildingShadowsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckVSyncCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckViewDistanceCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckVolumetricCloudsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckWorkshopTooltipOpenAnimationsCondition(int32 Index) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable) void ConfirmDisplayMode();
    UFUNCTION(BlueprintCallable) void ConfirmSetting(FName SettingName);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetAimSensitivity() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetAmbientOcclusion() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetAmbientVolume() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) EAntiAliasingSetting GetAntiAliasing() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetBlueprintTooltipOpenAnimations() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCharacterVoiceVolume() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetClothSimulation() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetContactShadows() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EControllerIconsSetting GetControllerIcons() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetCreatureIK() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) ECrosshairColorSetting GetCrosshairColor() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) ECrosshairStyleSetting GetCrosshairStyle() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetCrouchLedgeSafety() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetDNTDebugForceOpaque() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetDialogueVolume() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetDisableDeployableCameraRotation() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetDisableGrassShadows() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetDisableMapSelectionWarning() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetDisplayHealthNumbers() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FText> GetDisplayModeList() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) EDisplayTemperatureSetting GetDisplayTemperature() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EEffectsSetting GetEffects() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EFSRModeSetting GetFSRMode() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFSRSharpness() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetFiberFoliageRespawn() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFieldOfView() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) EFoliageSetting GetFoliage() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetFrameGeneration() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFrameLimit() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetGamma() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetGlobalIllumination() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EInputTypeSetting GetInputType() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInteractTimerLength() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetInvertYAxis() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetKillcam() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetLanguage() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetLargeStonesRespawn() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetLightShadows() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetLimitPoolsizeToVRAM() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMasterVolume() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxAimSensitivityValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxAmbientVolumeValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxCharacterVoiceVolumeValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxDialogueVolumeValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxFSRSharpnessValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxFieldOfViewValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxFrameLimitValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxGammaValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxInteractTimerLengthValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxMasterVolumeValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxMaxShadowCascadesValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxMotionBlurValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxMouseSensitivityXValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxMouseSensitivityYValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxMusicVolumeValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxResolutionScaleValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxSFXVolumeValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxSaveGameFrequencyValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxScreenHitEffectsStrengthValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxShadowCascades() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxSharpnessValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxTextureStreamingPoolsizeValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinAimSensitivityValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinAmbientVolumeValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinCharacterVoiceVolumeValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinDialogueVolumeValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinFSRSharpnessValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinFieldOfViewValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinFrameLimitValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinGammaValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinInteractTimerLengthValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinMasterVolumeValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinMaxShadowCascadesValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinMotionBlurValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinMouseSensitivityXValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinMouseSensitivityYValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinMusicVolumeValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinResolutionScaleValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinSFXVolumeValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinSaveGameFrequencyValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinScreenHitEffectsStrengthValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinSharpnessValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMinTextureStreamingPoolsizeValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMotionBlur() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMouseSensitivityX() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMouseSensitivityY() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetMultiplayerGhostBuilding() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMusicVolume() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) ENVIDIAReflexLowLatencySetting GetNVIDIAReflexLowLatency() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EOverallSetting GetOverall() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetPauseGameinEscapeMenu() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetPlayerMarker() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EPostProcessingSetting GetPostProcessing() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetRTShadows() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetRTXEnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetReflections() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetResolutionScale() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSFXVolume() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSaveGameFrequency() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetScreenHitEffectsStrength() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) ESettingType GetSettingType(FName SettingName);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetSettingValue_Bool(FName SettingName);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSettingValue_Float(FName SettingName);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetSettingValue_Index(FName SettingName);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetSettingValue_String(FName SettingName);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) EShadingSetting GetShading() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EShadowFilterMethodSetting GetShadowFilterMethod() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EShadowsSetting GetShadows() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSharpness() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetShowAimCrosshair() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetShowBloodEffects() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetShowDamageNumbers() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetShowDeployableShelterWarning() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetShowItemHighlights() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetShowLightningEffects() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetShowOnlyMyDamageNumbers() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetShowScreenshake() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetShowTutorialProspect() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetSkipStartupMovies() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) ESkyboxQualitySetting GetSkyboxQuality() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetSkylightShadows() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetSprintCancelReload() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) ESuperResolutionSetting GetSuperResolution() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetTerrainDeformationExperimental() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetTessellation() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTextureStreamingPoolsize() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) ETexturesSetting GetTextures() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetToggleAim() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetToggleCrouch() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetToggleSprint() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetUseSimpleBuildingShadows() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetVSync() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) EViewDistanceSetting GetViewDistance() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetVolumetricClouds() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetWorkshopTooltipOpenAnimations() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool IsCategoryUsingDefaultValues(FName CategoryName);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSectionEnabledForEdit(FName CategoryName, FName SectionName);  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool IsSectionUsingDefaultValues(FName CategoryName, FName SectionName);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSettingEnabledForEdit(FName SettingName);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void ResetAudioSettings();
    UFUNCTION(BlueprintCallable) void ResetControlsSettings();
    UFUNCTION(BlueprintCallable) void ResetDisplaySettings();
    UFUNCTION(BlueprintCallable) void ResetGameplaySettings();
    UFUNCTION(BlueprintCallable) void ResetSettingsForCategory(FName CategoryName);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ResetSettingsForSection(FName CategoryName, FName SectionName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RevertDisplayMode();
    UFUNCTION(BlueprintCallable) void RevertSetting(FName SettingName);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetAimSensitivity(float InAimSensitivity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAmbientOcclusion(bool bInAmbientOcclusion);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAmbientVolume(float InAmbientVolume);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAntiAliasing(EAntiAliasingSetting InAntiAliasing);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetBlueprintTooltipOpenAnimations(bool bInBlueprintTooltipOpenAnimations);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCharacterVoiceVolume(float InCharacterVoiceVolume);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetClothSimulation(bool bInClothSimulation);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetContactShadows(bool bInContactShadows);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetControllerIcons(EControllerIconsSetting InControllerIcons);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCreatureIK(bool bInCreatureIK);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCrosshairColor(ECrosshairColorSetting InCrosshairColor);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCrosshairStyle(ECrosshairStyleSetting InCrosshairStyle);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCrouchLedgeSafety(bool bInCrouchLedgeSafety);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDNTDebugForceOpaque(bool bInDNTDebugForceOpaque);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDialogueVolume(float InDialogueVolume);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDisableDeployableCameraRotation(bool bInDisableDeployableCameraRotation);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDisableGrassShadows(bool bInDisableGrassShadows);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDisableMapSelectionWarning(bool bInDisableMapSelectionWarning);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDisplayHealthNumbers(bool bInDisplayHealthNumbers);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDisplayTemperature(EDisplayTemperatureSetting InDisplayTemperature);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetEffects(EEffectsSetting InEffects);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFSRMode(EFSRModeSetting InFSRMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFSRSharpness(float InFSRSharpness);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFiberFoliageRespawn(bool bInFiberFoliageRespawn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFieldOfView(float InFieldOfView);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFoliage(EFoliageSetting InFoliage);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFrameGeneration(bool bInFrameGeneration);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFrameLimit(float InFrameLimit);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetGamma(float InGamma);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetGlobalIllumination(bool bInGlobalIllumination);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetInputType(EInputTypeSetting InInputType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetInteractTimerLength(float InInteractTimerLength);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetInvertYAxis(bool bInInvertYAxis);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetKillcam(bool bInKillcam);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLanguage(FString InLanguage);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetLargeStonesRespawn(bool bInLargeStonesRespawn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLightShadows(bool bInLightShadows);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLimitPoolsizeToVRAM(bool bInLimitPoolsizeToVRAM);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetMasterVolume(float InMasterVolume);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMaxShadowCascades(float InMaxShadowCascades);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMotionBlur(float InMotionBlur);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMouseSensitivityX(float InMouseSensitivityX);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMouseSensitivityY(float InMouseSensitivityY);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMultiplayerGhostBuilding(bool bInMultiplayerGhostBuilding);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetMusicVolume(float InMusicVolume);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetNVIDIAReflexLowLatency(ENVIDIAReflexLowLatencySetting InNVIDIAReflexLowLatency);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetOverall(EOverallSetting InOverall);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPauseGameinEscapeMenu(bool bInPauseGameinEscapeMenu);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPlayerMarker(bool bInPlayerMarker);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPostProcessing(EPostProcessingSetting InPostProcessing);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetRTShadows(bool bInRTShadows);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetRTXEnabled(bool bInRTXEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetReflections(bool bInReflections);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetResolutionScale(float InResolutionScale);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSFXVolume(float InSFXVolume);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSaveGameFrequency(float InSaveGameFrequency);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetScreenHitEffectsStrength(float InScreenHitEffectsStrength);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSettingValue_Bool(FName SettingName, bool bNewValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetSettingValue_Float(FName SettingName, float NewValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetSettingValue_Index(FName SettingName, int32 NewValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetSettingValue_String(FName SettingName, FString NewValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetShading(EShadingSetting InShading);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetShadowFilterMethod(EShadowFilterMethodSetting InShadowFilterMethod);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetShadows(EShadowsSetting InShadows);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSharpness(float InSharpness);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetShowAimCrosshair(bool bInShowAimCrosshair);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetShowBloodEffects(bool bInShowBloodEffects);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetShowDamageNumbers(bool bInShowDamageNumbers);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetShowDeployableShelterWarning(bool bInShowDeployableShelterWarning);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetShowItemHighlights(bool bInShowItemHighlights);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetShowLightningEffects(bool bInShowLightningEffects);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetShowOnlyMyDamageNumbers(bool bInShowOnlyMyDamageNumbers);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetShowScreenshake(bool bInShowScreenshake);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetShowTutorialProspect(bool bInShowTutorialProspect);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSkipStartupMovies(bool bInSkipStartupMovies);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSkyboxQuality(ESkyboxQualitySetting InSkyboxQuality);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSkylightShadows(bool bInSkylightShadows);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSprintCancelReload(bool bInSprintCancelReload);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSuperResolution(ESuperResolutionSetting InSuperResolution);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTerrainDeformationExperimental(bool bInTerrainDeformationExperimental);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTessellation(bool bInTessellation);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTextureStreamingPoolsize(float InTextureStreamingPoolsize);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTextures(ETexturesSetting InTextures);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetToggleAim(bool bInToggleAim);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetToggleCrouch(bool bInToggleCrouch);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetToggleSprint(bool bInToggleSprint);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetUseSimpleBuildingShadows(bool bInUseSimpleBuildingShadows);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetVSync(bool bInVSync);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetViewDistance(EViewDistanceSetting InViewDistance);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetVolumetricClouds(bool bInVolumetricClouds);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetWorkshopTooltipOpenAnimations(bool bInWorkshopTooltipOpenAnimations);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool SettingRequiresRestart(FName SettingName) const;  // parameters 0x9

    // Virtual functions that start here:
    //   ApplyAudioSettings, ApplyAudioVolumeSettings, ApplyControlsGeneralSettings
    //   ApplyControlsKeybindingsSettings, ApplyControlsSettings, ApplyDisplayAMDFidelityFXSettings
    //   ApplyDisplayNVIDIADLSSSettings, ApplyDisplayNVIDIAReflexSettings, ApplyDisplayQualitySettings
    //   ApplyDisplayRayTracingSettings, ApplyDisplaySettings, ApplyDisplayVideoSettings
    //   ApplyDisplayWindowSettings, ApplyGameplayGeneralSettings, ApplyGameplayLanguageSettings
    //   ApplyGameplaySettings, ApplyGameplayUserInterfaceSettings, ConfirmDisplayMode
    //   DefaultAimSensitivity, DefaultAmbientOcclusion, DefaultAmbientVolume, DefaultAntiAliasing
    //   DefaultBlueprintTooltipOpenAnimations, DefaultCharacterVoiceVolume, DefaultClothSimulation
    //   DefaultContactShadows, DefaultControllerIcons, DefaultCreatureIK, DefaultCrosshairColor
    //   DefaultCrosshairStyle, DefaultCrouchLedgeSafety, DefaultDNTDebugForceOpaque, DefaultDialogueVolume
    //   DefaultDisableDeployableCameraRotation, DefaultDisableGrassShadows
    //   DefaultDisableMapSelectionWarning, DefaultDisplayHealthNumbers, DefaultDisplayTemperature
    //   DefaultEffects, DefaultFSRMode, DefaultFSRSharpness, DefaultFiberFoliageRespawn, DefaultFieldOfView
    //   DefaultFoliage, DefaultFrameGeneration, DefaultFrameLimit, DefaultGamma, DefaultGlobalIllumination
    //   DefaultInputType, DefaultInteractTimerLength, DefaultInvertYAxis, DefaultKillcam, DefaultLanguage
    //   DefaultLargeStonesRespawn, DefaultLightShadows, DefaultLimitPoolsizeToVRAM, DefaultMasterVolume
    //   DefaultMaxShadowCascades, DefaultMotionBlur, DefaultMouseSensitivityX, DefaultMouseSensitivityY
    //   DefaultMultiplayerGhostBuilding, DefaultMusicVolume, DefaultNVIDIAReflexLowLatency, DefaultOverall
    //   DefaultPauseGameinEscapeMenu, DefaultPlayerMarker, DefaultPostProcessing, DefaultRTShadows
    //   DefaultRTXEnabled, DefaultReflections, DefaultResolutionScale, DefaultSFXVolume
    //   DefaultSaveGameFrequency, DefaultScreenHitEffectsStrength, DefaultShading
    //   DefaultShadowFilterMethod, DefaultShadows, DefaultSharpness, DefaultShowAimCrosshair
    //   DefaultShowBloodEffects, DefaultShowDamageNumbers, DefaultShowDeployableShelterWarning
    //   DefaultShowItemHighlights, DefaultShowLightningEffects, DefaultShowOnlyMyDamageNumbers
    //   DefaultShowScreenshake, DefaultShowTutorialProspect, DefaultSkipStartupMovies, DefaultSkyboxQuality
    //   DefaultSkylightShadows, DefaultSprintCancelReload, DefaultSuperResolution
    //   DefaultTerrainDeformationExperimental, DefaultTessellation, DefaultTextureStreamingPoolsize
    //   DefaultTextures, DefaultToggleAim, DefaultToggleCrouch, DefaultToggleSprint
    //   DefaultUseSimpleBuildingShadows, DefaultVSync, DefaultViewDistance, DefaultVolumetricClouds
    //   DefaultWorkshopTooltipOpenAnimations, IsAudioUsingDefaultValues, IsAudioVolumeUsingDefaultValues
    //   IsControlsGeneralUsingDefaultValues, IsControlsKeybindingsUsingDefaultValues
    //   IsControlsUsingDefaultValues, IsDisplayAMDFidelityFXUsingDefaultValues
    //   IsDisplayNVIDIADLSSUsingDefaultValues, IsDisplayNVIDIAReflexUsingDefaultValues
    //   IsDisplayQualityUsingDefaultValues, IsDisplayRayTracingUsingDefaultValues
    //   IsDisplayUsingDefaultValues, IsDisplayVideoUsingDefaultValues, IsDisplayWindowUsingDefaultValues
    //   IsGameplayGeneralUsingDefaultValues, IsGameplayLanguageUsingDefaultValues
    //   IsGameplayUserInterfaceUsingDefaultValues, IsGameplayUsingDefaultValues, ResetAudioSettings
    //   ResetAudioVolumeSettings, ResetControlsGeneralSettings, ResetControlsKeybindingsSettings
    //   ResetControlsSettings, ResetDisplayAMDFidelityFXSettings, ResetDisplayNVIDIADLSSSettings
    //   ResetDisplayNVIDIAReflexSettings, ResetDisplayQualitySettings, ResetDisplayRayTracingSettings
    //   ResetDisplaySettings, ResetDisplayVideoSettings, ResetDisplayWindowSettings
    //   ResetGameplayGeneralSettings, ResetGameplayLanguageSettings, ResetGameplaySettings
    //   ResetGameplayUserInterfaceSettings, RevertDisplayMode, SetAimSensitivity, SetAmbientOcclusion
    //   SetAmbientVolume, SetAntiAliasing, SetBlueprintTooltipOpenAnimations, SetCharacterVoiceVolume
    //   SetClothSimulation, SetContactShadows, SetControllerIcons, SetCreatureIK, SetCrosshairColor
    //   SetCrosshairStyle, SetCrouchLedgeSafety, SetDNTDebugForceOpaque, SetDialogueVolume
    //   SetDisableDeployableCameraRotation, SetDisableGrassShadows, SetDisableMapSelectionWarning
    //   SetDisplayHealthNumbers, SetDisplayTemperature, SetEffects, SetFSRMode, SetFSRSharpness
    //   SetFiberFoliageRespawn, SetFieldOfView, SetFoliage, SetFrameGeneration, SetFrameLimit, SetGamma
    //   SetGlobalIllumination, SetInputType, SetInteractTimerLength, SetInvertYAxis, SetKillcam
    //   SetLanguage, SetLargeStonesRespawn, SetLightShadows, SetLimitPoolsizeToVRAM, SetMasterVolume
    //   SetMaxShadowCascades, SetMotionBlur, SetMouseSensitivityX, SetMouseSensitivityY
    //   SetMultiplayerGhostBuilding, SetMusicVolume, SetNVIDIAReflexLowLatency, SetOverall
    //   SetPauseGameinEscapeMenu, SetPlayerMarker, SetPostProcessing, SetRTShadows, SetRTXEnabled
    //   SetReflections, SetResolutionScale, SetSFXVolume, SetSaveGameFrequency, SetScreenHitEffectsStrength
    //   SetShading, SetShadowFilterMethod, SetShadows, SetSharpness, SetShowAimCrosshair
    //   SetShowBloodEffects, SetShowDamageNumbers, SetShowDeployableShelterWarning, SetShowItemHighlights
    //   SetShowLightningEffects, SetShowOnlyMyDamageNumbers, SetShowScreenshake, SetShowTutorialProspect
    //   SetSkipStartupMovies, SetSkyboxQuality, SetSkylightShadows, SetSprintCancelReload
    //   SetSuperResolution, SetTerrainDeformationExperimental, SetTessellation, SetTextureStreamingPoolsize
    //   SetTextures, SetToggleAim, SetToggleCrouch, SetToggleSprint, SetUseSimpleBuildingShadows, SetVSync
    //   SetViewDistance, SetVolumetricClouds, SetWorkshopTooltipOpenAnimations
};
