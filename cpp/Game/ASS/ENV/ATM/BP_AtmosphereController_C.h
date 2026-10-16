// /Game/ASS/ENV/ATM/BP_AtmosphereController.BP_AtmosphereController_C
// Derives from: AAtmosphereController > AIcarusActor > AActor > UObject
// size 0x730, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_AtmosphereController_C : public AAtmosphereController
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_CO;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_JU_Light;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_DC_Eden;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_DC_Elysium;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_JU;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_TU;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_GT;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_GL;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_CF;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_Fire;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_SandStorm;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_Base;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_WL;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_AC;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_DC;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_LC;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* PostProcesss;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Sphere;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SunPos;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PlanetCard6;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PlanetCard5;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PlanetCard4;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PlanetCard3;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PlanetCard2;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PlanetCard1;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_PlanetCard;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SkyPlanets;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_CaveLightController_C* BP_CaveLightController;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVolumetricCloudComponent* VolumetricCloud;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkyAtmosphereComponent* SkyAtmosphere;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SkySphere;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDirectionalLightComponent* MoonLight;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* MoonOffset;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Moon;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDirectionalLightComponent* SunLight;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UExponentialHeightFogComponent* ExponentialHeightFog;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkyLightComponent* SkyLight;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* WindDirectionalSource;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x04F8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, Interp, BlueprintReadWrite) int32 StartHour;  // 0x0500, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StartMinute;  // 0x0504, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CurveWeatherWind;  // 0x0508, size 0x8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) bool Enabled;  // 0x0510, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SnowcapHeight;  // 0x0514, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SunRoll;  // 0x0518, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RainAmountCF;  // 0x051C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StormAmountCF;  // 0x0520, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RainAmountLC;  // 0x0524, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StormAmountLC;  // 0x0528, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RainAmountDC;  // 0x052C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StormAmountDC;  // 0x0530, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RainAmountAC;  // 0x0534, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StormAmountAC;  // 0x0538, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RainAmountWL;  // 0x053C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StormAmountWL;  // 0x0540, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Debug_Wind;  // 0x0544, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EBiomes> CurrentBiome;  // 0x0545, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TransitionValue;  // 0x0548, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SpineTransition;  // 0x054C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CurveNightSky;  // 0x0550, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FogOffset;  // 0x0558, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SunDirection;  // 0x055C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CurveSunIntensity;  // 0x0560, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CurveSkylightIntensity;  // 0x0568, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* CurveSunColour;  // 0x0570, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AutoTransition;  // 0x0578, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* TimeScaleCurve;  // 0x0580, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MoonRoll;  // 0x0588, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FogHeight;  // 0x058C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CurveMoonIntensity;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_Rain;  // 0x0598, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_SandStorm;  // 0x059C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_Snow;  // 0x05A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_Cloudy;  // 0x05A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_Thunder;  // 0x05A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynamicCloudMaterial;  // 0x05B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_SnowStorm;  // 0x05B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomesEnum PlayerBiome;  // 0x05C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomesEnum PlayerNewBiome;  // 0x05D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture* CloudMAP;  // 0x05E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DropshipOverride;  // 0x05E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_WindSpeed;  // 0x05EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_WindStrength;  // 0x05F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_WindMaxGustAmount;  // 0x05F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_WindMinGustAmount;  // 0x05F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CurveContactShadow;  // 0x0600, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_Debris;  // 0x0608, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OverrideWindSpeed;  // 0x060C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OverrideWindStrength;  // 0x0610, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UpdateWeather;  // 0x0614, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CloudCoverageFogCurve;  // 0x0618, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSunLightDirection SunLightDirection;  // 0x0620, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSunLightColor SunLightColor;  // 0x0630, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_FogDensity;  // 0x0640, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_FogExtinction;  // 0x0644, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Color_1;  // 0x0648, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Intensity_1;  // 0x0658, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator SunDirection_1;  // 0x065C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CaveLightCurve;  // 0x0668, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AWT_CaveVolume_C*> CaveVolumesInUse;  // 0x0670, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CaveInfluence;  // 0x0680, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CurvePlanetSunDirection;  // 0x0688, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator WindRotation;  // 0x0690, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool useWeatherMan;  // 0x069C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* LocalFogTimeOfDay;  // 0x06A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CurveShadowCascades;  // 0x06A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ImpassableSnowOffset;  // 0x06B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SunBrightness;  // 0x06B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MoonThreshold;  // 0x06B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor MoonLightColor;  // 0x06BC, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Use_Sun_Atmosphere_for_moon;  // 0x06CC, size 0x1, named "Use Sun Atmosphere for moon"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseLowShadowSettings;  // 0x06CD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OverrideLightSettings;  // 0x06CE, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WeathermanActive;  // 0x06CF, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeTotalThisFrame;  // 0x06D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_Ash;  // 0x06D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_Embers;  // 0x06D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_Smoke;  // 0x06DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_AcidRain;  // 0x06E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_Hail;  // 0x06E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RainAmountGL;  // 0x06E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StormAmountGL;  // 0x06EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector CurrentBloomSettings;  // 0x06F0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BloomActive;  // 0x06FC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor FogColor;  // 0x0700, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FogColorAmount;  // 0x0710, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Whiteout_Amount;  // 0x0714, size 0x4, named "Whiteout Amount"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_Radiation;  // 0x0718, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_LightningCloud;  // 0x071C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_RadiationWind;  // 0x0720, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherVal_Speckles;  // 0x0724, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* TimeOfDayNFX;  // 0x0728, size 0x8

    UFUNCTION(BlueprintCallable) void AddCaveVolume(AWT_CaveVolume_C* Volume);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AtmosphereSetProperties();
    UFUNCTION(BlueprintCallable) void CheckBiome();
    UFUNCTION(BlueprintCallable) void CheckShadowQualitySetting();
    UFUNCTION(BlueprintCallable) void EditorReset();
    UFUNCTION() void ExecuteUbergraph_BP_AtmosphereController(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FastTickUpdates();
    UFUNCTION(BlueprintCallable) void Fog_Track_Player();  // named "Fog Track Player"
    UFUNCTION(BlueprintCallable) void FogSetProperties();
    UFUNCTION(BlueprintCallable) void FogTimeOfDay();
    UFUNCTION(BlueprintCallable) void ForceSetAtmosphere(FAtmospheresEnum Atmosphere);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ForceSetBiome(FBiomesEnum Biome);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void Get_Dist_Fog_Scale(FVector& Scale);  // parameters 0xC, named "Get Dist Fog Scale"
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAtmosphereInfluence(FAtmospheresEnum Atmosphere, float& Influence);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FAtmospheresEnum GetAtmosphereType(FBiomesEnum Biome);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetBiomeInfluence(FBiomesEnum Biome);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCloudCoverage(float& Coverage, float& CoverageNoClamp);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentTimeNormalized();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetCurrentTimeOfDay(float& Total, float& Normalized, float& RealTime);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentTimeRealTime();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentTimeTotal();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetFogTintPerBiome(FLinearColor& Out);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void LinearBiomeTransition(FBiomesEnum PlayerNewBiome);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void MoonSetRotation();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveCaveVolume(AWT_CaveVolume_C* Volume);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetTerrainDetails();
    UFUNCTION(BlueprintCallable) void SkylightSetProperties();
    UFUNCTION(BlueprintCallable) void SlowTickUpdates();
    UFUNCTION(BlueprintCallable) void SunLightColor__DelegateSignature(FLinearColor Color, float Intensity, float CaveCover);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SunLightDirection__DelegateSignature(FRotator SunDirection);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SunSetProperties();
    UFUNCTION(BlueprintCallable) void SunSetRotation();
    UFUNCTION(BlueprintCallable) void Transition_Biome(FBiomesEnum FromBiome, FBiomesEnum ToBiome, float Amount);  // parameters 0x24, named "Transition Biome"
    UFUNCTION(BlueprintCallable) void TransitionWeather(FBiomesEnum FromBiome, FBiomesEnum ToBiome, float Amount);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void UltraSlowTickUpdates();
    UFUNCTION(BlueprintCallable) void Update_Atmosphere_Settings();  // named "Update Atmosphere Settings"
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdateBiomeMPCs();
    UFUNCTION(BlueprintCallable) void UpdateBloomSettings();
    UFUNCTION(BlueprintCallable) void UpdateCaveInfluence(float Influence);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateCloudCoverage();
    UFUNCTION(BlueprintCallable) void UpdateCubemap();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdatePostProcessing();
    UFUNCTION(BlueprintCallable) void UpdateSunCSMSettings();
    UFUNCTION(BlueprintCallable) void UpdateWeatherMPCs();
    UFUNCTION(BlueprintCallable) void UpdateWind();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
    UFUNCTION(BlueprintCallable) void WeatherVisualUpdated();
};
