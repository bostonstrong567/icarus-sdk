// /Script/Engine.Engine
// Derives from: UObject
// size 0xCF8, declared in Engine/Source/Runtime/Engine/Classes/Engine/Engine.h

UCLASS(Abstract, Transient, Config=Engine)
class UEngine : public UObject
{
public:
    UPROPERTY() UFont* TinyFont;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath TinyFontName;  // 0x0038, size 0x18
    UPROPERTY() UFont* SmallFont;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath SmallFontName;  // 0x0058, size 0x18
    UPROPERTY() UFont* MediumFont;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath MediumFontName;  // 0x0078, size 0x18
    UPROPERTY() UFont* LargeFont;  // 0x0090, size 0x8
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath LargeFontName;  // 0x0098, size 0x18
    UPROPERTY() UFont* SubtitleFont;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath SubtitleFontName;  // 0x00B8, size 0x18
    UPROPERTY() TArray<UFont*> AdditionalFonts;  // 0x00D0, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FString> AdditionalFontNames;  // 0x00E0, size 0x10
    UPROPERTY() TSubclassOf<UConsole> ConsoleClass;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, Config) FSoftClassPath ConsoleClassName;  // 0x00F8, size 0x18
    UPROPERTY() TSubclassOf<UGameViewportClient> GameViewportClientClass;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, Config) FSoftClassPath GameViewportClientClassName;  // 0x0118, size 0x18
    UPROPERTY() TSubclassOf<ULocalPlayer> LocalPlayerClass;  // 0x0130, size 0x8
    UPROPERTY(EditAnywhere, Config) FSoftClassPath LocalPlayerClassName;  // 0x0138, size 0x18
    UPROPERTY() TSubclassOf<AWorldSettings> WorldSettingsClass;  // 0x0150, size 0x8
    UPROPERTY(EditAnywhere, Config) FSoftClassPath WorldSettingsClassName;  // 0x0158, size 0x18
    UPROPERTY(Config) FSoftClassPath NavigationSystemClassName;  // 0x0170, size 0x18
    UPROPERTY() TSubclassOf<UNavigationSystemBase> NavigationSystemClass;  // 0x0188, size 0x8
    UPROPERTY(Config) FSoftClassPath NavigationSystemConfigClassName;  // 0x0190, size 0x18
    UPROPERTY() TSubclassOf<UNavigationSystemConfig> NavigationSystemConfigClass;  // 0x01A8, size 0x8
    UPROPERTY(Config) FSoftClassPath AvoidanceManagerClassName;  // 0x01B0, size 0x18
    UPROPERTY() TSubclassOf<UAvoidanceManager> AvoidanceManagerClass;  // 0x01C8, size 0x8
    UPROPERTY(Config) FSoftClassPath AIControllerClassName;  // 0x01D0, size 0x18
    UPROPERTY() TSubclassOf<UPhysicsCollisionHandler> PhysicsCollisionHandlerClass;  // 0x01E8, size 0x8
    UPROPERTY(EditAnywhere, Config) FSoftClassPath PhysicsCollisionHandlerClassName;  // 0x01F0, size 0x18
    UPROPERTY(Config) FSoftClassPath GameUserSettingsClassName;  // 0x0208, size 0x18
    UPROPERTY() TSubclassOf<UGameUserSettings> GameUserSettingsClass;  // 0x0220, size 0x8
    UPROPERTY() UGameUserSettings* GameUserSettings;  // 0x0228, size 0x8
    UPROPERTY() TSubclassOf<ALevelScriptActor> LevelScriptActorClass;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, Config) FSoftClassPath LevelScriptActorClassName;  // 0x0238, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftClassPath DefaultBlueprintBaseClassName;  // 0x0250, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftClassPath GameSingletonClassName;  // 0x0268, size 0x18
    UPROPERTY() UObject* GameSingleton;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, Config) FSoftClassPath AssetManagerClassName;  // 0x0288, size 0x18
    UPROPERTY() UAssetManager* AssetManager;  // 0x02A0, size 0x8
    UPROPERTY() UTexture2D* DefaultTexture;  // 0x02A8, size 0x8
    UPROPERTY(Config) FSoftObjectPath DefaultTextureName;  // 0x02B0, size 0x18
    UPROPERTY() UTexture* DefaultDiffuseTexture;  // 0x02C8, size 0x8
    UPROPERTY(Config) FSoftObjectPath DefaultDiffuseTextureName;  // 0x02D0, size 0x18
    UPROPERTY() UTexture2D* DefaultBSPVertexTexture;  // 0x02E8, size 0x8
    UPROPERTY(Config) FSoftObjectPath DefaultBSPVertexTextureName;  // 0x02F0, size 0x18
    UPROPERTY() UTexture2D* HighFrequencyNoiseTexture;  // 0x0308, size 0x8
    UPROPERTY(Config) FSoftObjectPath HighFrequencyNoiseTextureName;  // 0x0310, size 0x18
    UPROPERTY() UTexture2D* DefaultBokehTexture;  // 0x0328, size 0x8
    UPROPERTY(Config) FSoftObjectPath DefaultBokehTextureName;  // 0x0330, size 0x18
    UPROPERTY() UTexture2D* DefaultBloomKernelTexture;  // 0x0348, size 0x8
    UPROPERTY(Config) FSoftObjectPath DefaultBloomKernelTextureName;  // 0x0350, size 0x18
    UPROPERTY() UMaterial* WireframeMaterial;  // 0x0368, size 0x8
    UPROPERTY(Config) FString WireframeMaterialName;  // 0x0370, size 0x10
    UPROPERTY() UMaterial* DebugMeshMaterial;  // 0x0380, size 0x8
    UPROPERTY(Config) FSoftObjectPath DebugMeshMaterialName;  // 0x0388, size 0x18
    UPROPERTY() UMaterial* EmissiveMeshMaterial;  // 0x03A0, size 0x8
    UPROPERTY(Config) FSoftObjectPath EmissiveMeshMaterialName;  // 0x03A8, size 0x18
    UPROPERTY() UMaterial* LevelColorationLitMaterial;  // 0x03C0, size 0x8
    UPROPERTY(Config) FString LevelColorationLitMaterialName;  // 0x03C8, size 0x10
    UPROPERTY() UMaterial* LevelColorationUnlitMaterial;  // 0x03D8, size 0x8
    UPROPERTY(Config) FString LevelColorationUnlitMaterialName;  // 0x03E0, size 0x10
    UPROPERTY() UMaterial* LightingTexelDensityMaterial;  // 0x03F0, size 0x8
    UPROPERTY(Config) FString LightingTexelDensityName;  // 0x03F8, size 0x10
    UPROPERTY() UMaterial* ShadedLevelColorationLitMaterial;  // 0x0408, size 0x8
    UPROPERTY(Config) FString ShadedLevelColorationLitMaterialName;  // 0x0410, size 0x10
    UPROPERTY() UMaterial* ShadedLevelColorationUnlitMaterial;  // 0x0420, size 0x8
    UPROPERTY(Config) FString ShadedLevelColorationUnlitMaterialName;  // 0x0428, size 0x10
    UPROPERTY() UMaterial* RemoveSurfaceMaterial;  // 0x0438, size 0x8
    UPROPERTY(Config) FSoftObjectPath RemoveSurfaceMaterialName;  // 0x0440, size 0x18
    UPROPERTY() UMaterial* VertexColorMaterial;  // 0x0458, size 0x8
    UPROPERTY(Config) FString VertexColorMaterialName;  // 0x0460, size 0x10
    UPROPERTY() UMaterial* VertexColorViewModeMaterial_ColorOnly;  // 0x0470, size 0x8
    UPROPERTY(Config) FString VertexColorViewModeMaterialName_ColorOnly;  // 0x0478, size 0x10
    UPROPERTY() UMaterial* VertexColorViewModeMaterial_AlphaAsColor;  // 0x0488, size 0x8
    UPROPERTY(Config) FString VertexColorViewModeMaterialName_AlphaAsColor;  // 0x0490, size 0x10
    UPROPERTY() UMaterial* VertexColorViewModeMaterial_RedOnly;  // 0x04A0, size 0x8
    UPROPERTY(Config) FString VertexColorViewModeMaterialName_RedOnly;  // 0x04A8, size 0x10
    UPROPERTY() UMaterial* VertexColorViewModeMaterial_GreenOnly;  // 0x04B8, size 0x8
    UPROPERTY(Config) FString VertexColorViewModeMaterialName_GreenOnly;  // 0x04C0, size 0x10
    UPROPERTY() UMaterial* VertexColorViewModeMaterial_BlueOnly;  // 0x04D0, size 0x8
    UPROPERTY(Config) FString VertexColorViewModeMaterialName_BlueOnly;  // 0x04D8, size 0x10
    UPROPERTY(Config) FSoftObjectPath DebugEditorMaterialName;  // 0x04E8, size 0x18
    UPROPERTY() UMaterial* ConstraintLimitMaterial;  // 0x0500, size 0x8
    UPROPERTY() UMaterialInstanceDynamic* ConstraintLimitMaterialX;  // 0x0508, size 0x8
    UPROPERTY() UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis;  // 0x0510, size 0x8
    UPROPERTY() UMaterialInstanceDynamic* ConstraintLimitMaterialY;  // 0x0518, size 0x8
    UPROPERTY() UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis;  // 0x0520, size 0x8
    UPROPERTY() UMaterialInstanceDynamic* ConstraintLimitMaterialZ;  // 0x0528, size 0x8
    UPROPERTY() UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis;  // 0x0530, size 0x8
    UPROPERTY() UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic;  // 0x0538, size 0x8
    UPROPERTY() UMaterial* InvalidLightmapSettingsMaterial;  // 0x0540, size 0x8
    UPROPERTY(Config) FSoftObjectPath InvalidLightmapSettingsMaterialName;  // 0x0548, size 0x18
    UPROPERTY() UMaterial* PreviewShadowsIndicatorMaterial;  // 0x0560, size 0x8
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath PreviewShadowsIndicatorMaterialName;  // 0x0568, size 0x18
    UPROPERTY() UMaterial* ArrowMaterial;  // 0x0580, size 0x8
    UPROPERTY() UMaterialInstanceDynamic* ArrowMaterialYellow;  // 0x0588, size 0x8
    UPROPERTY(Config) FSoftObjectPath ArrowMaterialName;  // 0x0590, size 0x18
    UPROPERTY(Config) FLinearColor LightingOnlyBrightness;  // 0x05A8, size 0x10
    UPROPERTY(Config) TArray<FLinearColor> ShaderComplexityColors;  // 0x05B8, size 0x10
    UPROPERTY(Config) TArray<FLinearColor> QuadComplexityColors;  // 0x05C8, size 0x10
    UPROPERTY(Config) TArray<FLinearColor> LightComplexityColors;  // 0x05D8, size 0x10
    UPROPERTY(Config) TArray<FLinearColor> StationaryLightOverlapColors;  // 0x05E8, size 0x10
    UPROPERTY(Config) TArray<FLinearColor> LODColorationColors;  // 0x05F8, size 0x10
    UPROPERTY(Config) TArray<FLinearColor> HLODColorationColors;  // 0x0608, size 0x10
    UPROPERTY(Config) TArray<FLinearColor> StreamingAccuracyColors;  // 0x0618, size 0x10
    UPROPERTY(Config) float MaxPixelShaderAdditiveComplexityCount;  // 0x0628, size 0x4
    UPROPERTY(Config) float MaxES3PixelShaderAdditiveComplexityCount;  // 0x062C, size 0x4
    UPROPERTY(Config) float MinLightMapDensity;  // 0x0630, size 0x4
    UPROPERTY(Config) float IdealLightMapDensity;  // 0x0634, size 0x4
    UPROPERTY(Config) float MaxLightMapDensity;  // 0x0638, size 0x4
    UPROPERTY(Config) uint8 bRenderLightMapDensityGrayscale : 1;  // 0x063C, mask 0x01
    UPROPERTY(Config) float RenderLightMapDensityGrayscaleScale;  // 0x0640, size 0x4
    UPROPERTY(Config) float RenderLightMapDensityColorScale;  // 0x0644, size 0x4
    UPROPERTY(Config) FLinearColor LightMapDensityVertexMappedColor;  // 0x0648, size 0x10
    UPROPERTY(Config) FLinearColor LightMapDensitySelectedColor;  // 0x0658, size 0x10
    UPROPERTY(Config) TArray<FStatColorMapping> StatColorMappings;  // 0x0668, size 0x10
    UPROPERTY() UPhysicalMaterial* DefaultPhysMaterial;  // 0x0678, size 0x8
    UPROPERTY(Config) FSoftObjectPath DefaultPhysMaterialName;  // 0x0680, size 0x18
    UPROPERTY(Config) TArray<FGameNameRedirect> ActiveGameNameRedirects;  // 0x0698, size 0x10
    UPROPERTY(Config) TArray<FClassRedirect> ActiveClassRedirects;  // 0x06A8, size 0x10
    UPROPERTY(Config) TArray<FPluginRedirect> ActivePluginRedirects;  // 0x06B8, size 0x10
    UPROPERTY(Config) TArray<FStructRedirect> ActiveStructRedirects;  // 0x06C8, size 0x10
    UPROPERTY() UTexture2D* PreIntegratedSkinBRDFTexture;  // 0x06D8, size 0x8
    UPROPERTY(Config) FSoftObjectPath PreIntegratedSkinBRDFTextureName;  // 0x06E0, size 0x18
    UPROPERTY() UTexture2D* BlueNoiseTexture;  // 0x06F8, size 0x8
    UPROPERTY(Config) FSoftObjectPath BlueNoiseTextureName;  // 0x0700, size 0x18
    UPROPERTY() UTexture2D* MiniFontTexture;  // 0x0718, size 0x8
    UPROPERTY(Config) FSoftObjectPath MiniFontTextureName;  // 0x0720, size 0x18
    UPROPERTY() UTexture* WeightMapPlaceholderTexture;  // 0x0738, size 0x8
    UPROPERTY(Config) FSoftObjectPath WeightMapPlaceholderTextureName;  // 0x0740, size 0x18
    UPROPERTY() UTexture2D* LightMapDensityTexture;  // 0x0758, size 0x8
    UPROPERTY(Config) FSoftObjectPath LightMapDensityTextureName;  // 0x0760, size 0x18
    UPROPERTY() UGameViewportClient* GameViewport;  // 0x0780, size 0x8
    UPROPERTY() TArray<FString> DeferredCommands;  // 0x0788, size 0x10
    UPROPERTY(EditAnywhere, Config) float NearClipPlane;  // 0x0798, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 bSubtitlesEnabled : 1;  // 0x079C, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bSubtitlesForcedOff : 1;  // 0x079C, mask 0x02
    UPROPERTY(EditAnywhere, Config) int32 MaximumLoopIterationCount;  // 0x07A0, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 bCanBlueprintsTickByDefault : 1;  // 0x07A4, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bOptimizeAnimBlueprintMemberVariableAccess : 1;  // 0x07A4, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bAllowMultiThreadedAnimationUpdate : 1;  // 0x07A4, mask 0x04
    UPROPERTY(Config) uint8 bEnableEditorPSysRealtimeLOD : 1;  // 0x07A4, mask 0x08
    UPROPERTY(EditAnywhere, Config) uint8 bSmoothFrameRate : 1;  // 0x07A4, mask 0x20
    UPROPERTY(EditAnywhere, Config) uint8 bUseFixedFrameRate : 1;  // 0x07A4, mask 0x40
    UPROPERTY(EditAnywhere, Config) float FixedFrameRate;  // 0x07A8, size 0x4
    UPROPERTY(EditAnywhere, Config) FFloatRange SmoothedFrameRateRange;  // 0x07AC, size 0x10
    UPROPERTY(Transient) UEngineCustomTimeStep* CustomTimeStep;  // 0x07C0, size 0x8
    UPROPERTY(EditAnywhere, Config) FSoftClassPath CustomTimeStepClassName;  // 0x07E8, size 0x18
    UPROPERTY(Transient) UTimecodeProvider* TimecodeProvider;  // 0x0800, size 0x8
    UPROPERTY(EditAnywhere, Config) FSoftClassPath TimecodeProviderClassName;  // 0x0828, size 0x18
    UPROPERTY(EditAnywhere, Config) bool bGenerateDefaultTimecode;  // 0x0840, size 0x1
    UPROPERTY(EditAnywhere, Config) FFrameRate GenerateDefaultTimecodeFrameRate;  // 0x0844, size 0x8
    UPROPERTY(EditAnywhere, Config) float GenerateDefaultTimecodeFrameDelay;  // 0x084C, size 0x4
    UPROPERTY(Config) uint8 bCheckForMultiplePawnsSpawnedInAFrame : 1;  // 0x0850, mask 0x01
    UPROPERTY(Config) int32 NumPawnsAllowedToBeSpawnedInAFrame;  // 0x0854, size 0x4
    UPROPERTY(Config, Deprecated) uint8 bShouldGenerateLowQualityLightmaps : 1;  // 0x0858, mask 0x01
    UPROPERTY() FColor C_WorldBox;  // 0x085C, size 0x4
    UPROPERTY() FColor C_BrushWire;  // 0x0860, size 0x4
    UPROPERTY() FColor C_AddWire;  // 0x0864, size 0x4
    UPROPERTY() FColor C_SubtractWire;  // 0x0868, size 0x4
    UPROPERTY() FColor C_SemiSolidWire;  // 0x086C, size 0x4
    UPROPERTY() FColor C_NonSolidWire;  // 0x0870, size 0x4
    UPROPERTY() FColor C_WireBackground;  // 0x0874, size 0x4
    UPROPERTY() FColor C_ScaleBoxHi;  // 0x0878, size 0x4
    UPROPERTY() FColor C_VolumeCollision;  // 0x087C, size 0x4
    UPROPERTY() FColor C_BSPCollision;  // 0x0880, size 0x4
    UPROPERTY() FColor C_OrthoBackground;  // 0x0884, size 0x4
    UPROPERTY() FColor C_Volume;  // 0x0888, size 0x4
    UPROPERTY() FColor C_BrushShape;  // 0x088C, size 0x4
    UPROPERTY(EditAnywhere) float StreamingDistanceFactor;  // 0x0890, size 0x4
    UPROPERTY(EditAnywhere, Config) FDirectoryPath GameScreenshotSaveDirectory;  // 0x0898, size 0x10
    UPROPERTY() ETransitionType TransitionType;  // 0x08A8, size 0x1
    UPROPERTY() FString TransitionDescription;  // 0x08B0, size 0x10
    UPROPERTY() FString TransitionGameMode;  // 0x08C0, size 0x10
    UPROPERTY(Config) uint8 bAllowMatureLanguage : 1;  // 0x08D0, mask 0x01
    UPROPERTY(Config) float CameraRotationThreshold;  // 0x08D4, size 0x4
    UPROPERTY(Config) float CameraTranslationThreshold;  // 0x08D8, size 0x4
    UPROPERTY(Config) float PrimitiveProbablyVisibleTime;  // 0x08DC, size 0x4
    UPROPERTY(Config) float MaxOcclusionPixelsFraction;  // 0x08E0, size 0x4
    UPROPERTY(Config) uint8 bPauseOnLossOfFocus : 1;  // 0x08E4, mask 0x01
    UPROPERTY(Config) int32 MaxParticleResize;  // 0x08E8, size 0x4
    UPROPERTY(Config) int32 MaxParticleResizeWarn;  // 0x08EC, size 0x4
    UPROPERTY(Transient) TArray<FDropNoteInfo> PendingDroppedNotes;  // 0x08F0, size 0x10
    UPROPERTY(Config) float NetClientTicksPerSecond;  // 0x0900, size 0x4
    UPROPERTY(Config) float DisplayGamma;  // 0x0904, size 0x4
    UPROPERTY(EditAnywhere, Config) float MinDesiredFrameRate;  // 0x0908, size 0x4
    UPROPERTY(Config) FLinearColor DefaultSelectedMaterialColor;  // 0x090C, size 0x10
    UPROPERTY(Transient) FLinearColor SelectedMaterialColor;  // 0x091C, size 0x10
    UPROPERTY(Transient) FLinearColor SelectionOutlineColor;  // 0x092C, size 0x10
    UPROPERTY(Transient) FLinearColor SubduedSelectionOutlineColor;  // 0x093C, size 0x10
    UPROPERTY(Transient) FLinearColor SelectedMaterialColorOverride;  // 0x094C, size 0x10
    UPROPERTY(Transient) bool bIsOverridingSelectedColor;  // 0x095C, size 0x1
    UPROPERTY(Config) uint8 bEnableOnScreenDebugMessages : 1;  // 0x0960, mask 0x01
    UPROPERTY(Transient) uint8 bEnableOnScreenDebugMessagesDisplay : 1;  // 0x0960, mask 0x02
    UPROPERTY(Config) uint8 bSuppressMapWarnings : 1;  // 0x0960, mask 0x04
    UPROPERTY(Config) uint8 bDisableAILogging : 1;  // 0x0960, mask 0x08
    UPROPERTY(Config) uint32 bEnableVisualLogRecordingOnStart;  // 0x0964, size 0x4
    UPROPERTY(Transient) int32 ScreenSaverInhibitorSemaphore;  // 0x0968, size 0x4
    UPROPERTY(Transient) uint8 bLockReadOnlyLevels : 1;  // 0x096C, mask 0x01
    UPROPERTY(Config) FString ParticleEventManagerClassPath;  // 0x0970, size 0x10
    UPROPERTY(Transient) float SelectionHighlightIntensity;  // 0x0980, size 0x4
    UPROPERTY(Transient) float BSPSelectionHighlightIntensity;  // 0x0984, size 0x4
    UPROPERTY(Transient) float SelectionHighlightIntensityBillboards;  // 0x0988, size 0x4
    UPROPERTY(Transient, Config) TArray<FNetDriverDefinition> NetDriverDefinitions;  // 0x0BD0, size 0x10
    UPROPERTY(Config) TArray<FString> ServerActors;  // 0x0BE0, size 0x10
    UPROPERTY() TArray<FString> RuntimeServerActors;  // 0x0BF0, size 0x10
    UPROPERTY(Config) float NetErrorLogInterval;  // 0x0C00, size 0x4
    UPROPERTY(Transient) uint8 bStartedLoadMapMovie : 1;  // 0x0C04, mask 0x01
    UPROPERTY() int32 NextWorldContextHandle;  // 0x0C20, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    IEngineLoop * EngineLoop;  // 0x0778
    uint32 : 1 bForceDisableFrameRateSmoothing;  // 0x07A4
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> CustomTimeStepChangedEvent;  // 0x07C8, private
    bool bIsCurrentCustomTimeStepInitialized;  // 0x07E0, private
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> TimecodeProviderChangedEvent;  // 0x0808, private
    bool bIsCurrentTimecodeProviderInitialized;  // 0x0820, private
    TWeakObjectPtr<AMatineeActor,FWeakObjectPtr> ActiveMatinee;  // 0x098C
    TDelegate<void __cdecl(FViewport *),FDefaultDelegateUserPolicy> * BeginStreamingPauseDelegate;  // 0x0998
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> * EndStreamingPauseDelegate;  // 0x09A0
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> PreRenderDelegate;  // 0x09A8
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> PostRenderDelegate;  // 0x09C0
    UEngine::FOnTravelFailure TravelFailureEvent;  // 0x09D8
    UEngine::FOnNetworkFailure NetworkFailureEvent;  // 0x09F0
    UEngine::FOnNetworkLagStateChanged NetworkLagStateChangedEvent;  // 0x0A08
    UEngine::FOnNetworkDDoSEscalation NetworkDDoSEscalationEvent;  // 0x0A20
    bool bIsInitialized;  // 0x0A38
    uint64 LastGCFrame;  // 0x0A40, private
    float TimeSinceLastPendingKillPurge;  // 0x0A48, private
    bool bFullPurgeTriggered;  // 0x0A4C, private
    bool bShouldDelayGarbageCollect;  // 0x0A4D, private
    FAudioDeviceManager * AudioDeviceManager;  // 0x0A50, protected
    FAudioDeviceHandle MainAudioDeviceHandle;  // 0x0A58, protected
    TArray<FScreenMessageString,TSizedDefaultAllocator<32> > PriorityScreenMessages;  // 0x0A70, private
    TMap<int,FScreenMessageString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FScreenMessageString,0> > ScreenMessages;  // 0x0A80, private
    TSharedPtr<IStereoRendering,1> StereoRenderingDevice;  // 0x0AD0
    TSharedPtr<IXRTrackingSystem,1> XRSystem;  // 0x0AE0
    TSharedPtr<FSceneViewExtensions,0> ViewExtensions;  // 0x0AF0
    TSharedPtr<IEyeTracker,1> EyeTrackingDevice;  // 0x0B00
    TMulticastDelegate<void __cdecl(enum EFrameHitchType,float),FDefaultDelegateUserPolicy> OnHitchDetectedDelegate;  // 0x0B10
    TSharedPtr<IMessageRpcClient,0> PortalRpcClient;  // 0x0B28, protected
    TSharedPtr<IPortalRpcLocator,0> PortalRpcLocator;  // 0x0B38, protected
    TSharedPtr<FTypeContainer,0> ServiceDependencies;  // 0x0B48, protected
    TSharedPtr<IPortalServiceLocator,0> ServiceLocator;  // 0x0B58, protected
    TSharedPtr<FPerformanceTrackingChart,0> ActivePerformanceChart;  // 0x0B68, protected
    TArray<TSharedPtr<IPerformanceDataConsumer,0>,TSizedDefaultAllocator<32> > ActivePerformanceDataConsumers;  // 0x0B78, protected
    float RunningAverageDeltaTime;  // 0x0B88, protected
    UEngine::FWorldAddedEvent WorldAddedEvent;  // 0x0B90, protected
    UEngine::FWorldDestroyedEvent WorldDestroyedEvent;  // 0x0BA8, protected
    FRunnableThread * ScreenSaverInhibitor;  // 0x0BC0, private
    FScreenSaverInhibitor * ScreenSaverInhibitorRunnable;  // 0x0BC8, private
    bool bIsVanillaProduct;  // 0x0C08, private
    TIndirectArray<FWorldContext,TSizedDefaultAllocator<32> > WorldList;  // 0x0C10, protected
    TUniqueObj<FSubsystemCollection<UEngineSubsystem> > EngineSubsystemCollection;  // 0x0C28, private
    TArray<UEngine::FEngineStatFuncs,TSizedDefaultAllocator<32> > EngineStats;  // 0x0C30, private
    UEngine::FErrorsAndWarningsCollector ErrorsAndWarningsCollector;  // 0x0C40, private
    FDelegateHandle HandleScreenshotCapturedDelegateHandle;  // 0x0CF0, private

    // Virtual functions that start here:
    //   AllowSelectTranslucent, AreEditorAnalyticsEnabled, Browse, CancelAllPending, CancelPending
    //   CorrectNegativeTimeDelta, CreatePIEWorldByDuplication, CreateStartupAnalyticsAttributes
    //   DestroyWorldContext, Experimental_ShouldPreDuplicateMap, FocusNextPIEWorld
    //   GetDefaultWorldFeatureLevel, GetGameViewportWidget, GetMapBuildCancelled, GetMaxFPS, GetMaxTickRate
    //   GetNextPIEViewport, GetPropertyColorationColor, GetSpriteCategoryIndex
    //   HandleBrowseToDefaultMapFailure, HandleDisconnectCommand, HandleNetworkFailure
    //   HandleNetworkFailure_NotifyGameInstance, HandleNetworkLagStateChanged, HandleOpenCommand
    //   HandleReconnectCommand, HandleSayCommand, HandleServerTravelCommand, HandleStreamMapCommand
    //   HandleTravelCommand, HandleTravelFailure, HandleTravelFailure_NotifyGameInstance, Init
    //   InitializeAudioDeviceManager, InitializeEyeTrackingDevice, InitializeHMDDevice
    //   InitializeObjectReferences, InitializePortalServices, InitializeRunningAverageDeltaTime
    //   IsAllowedFramerateSmoothing, IsAutosaving, IsInitialized, IsSettingUpPlayWorld, IsSplitScreen
    //   LoadMap, LoadMapRedrawViewports, MovePendingLevel, NetworkRemapPath, NotifyToolsOfObjectReplacement
    //   OnLostFocusPause, OnlyLoadEditorVisibleLevelsInPIE, PreExit, PreferToStreamLevelsInPIE
    //   ProcessToggleFreezeCommand, ProcessToggleFreezeStreamingCommand, RecordHMDAnalytics
    //   RedrawViewports, ReleaseAudioDeviceManager, RemapGamepadControllerIdForPIE, ResetPIEAudioSetting
    //   SetMapBuildCancelled, SetMaxFPS, ShouldDoAsyncEndOfFrameTasks, ShouldDrawBrushWireframe
    //   ShouldShutdownWorldNetDriver, ShouldThrottleCPUUsage, SpawnServerActors, Start, StartFPSChart
    //   StopFPSChart, Tick, TickWorldTravel, TriggerStreamingDataRebuild, UpdateRunningAverageDeltaTime
    //   UpdateTimeAndHandleMaxTickRate, UseSound, VerifyLoadMapWorldCleanup, WorldAdded, WorldDestroyed
    //   WorldIsPIEInNewViewport
};
