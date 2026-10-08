// /Game/BP/Player/BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C
// Derives from: UPlayerEffectsComponent > UActorComponent > UObject
// size 0x260, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PlayerEffectsComponent_C : public UPlayerEffectsComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_AtmosphereController_C* AtmosphereController;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_FX_DistantFog_C* FxDistantFog;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_MotesCF;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_MotesGL;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_StormCF;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_StormDC;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_StormAC;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPostProcessComponent* PP_Lightning;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPostProcessComponent* PP_RainDroplets;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPostProcessComponent* PP_Radiation;  // 0x0108, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* PP_Mat_DebrisCF;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* PP_Mat_DebrisAC;  // 0x0118, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UStaticMesh*> FxLightningMeshes;  // 0x0120, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_FX_ThunderStrike_C* FxStrikeActor;  // 0x0130, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FxStrikeIntensity;  // 0x0138, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* LocalPlayer;  // 0x0140, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InWater;  // 0x0148, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NextWaterWake;  // 0x014C, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_StormLC;  // 0x0150, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_StormSW;  // 0x0158, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_StormGL;  // 0x0160, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_Rain;  // 0x0168, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_Snow;  // 0x0170, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Fx_StormWall_C* FxActorStormWall;  // 0x0178, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LocalController;  // 0x0180, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_FX_ShelterCapture_C* FxShelterCaptureActor;  // 0x0188, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FireIntensity;  // 0x0190, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FireIntensityLerpSpeed;  // 0x0194, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FireIntensityMaxDistance;  // 0x0198, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredFireIntensity;  // 0x019C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_FX_LocalFogVolume_C* FxLocalFogVolume;  // 0x01A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CurveLocFogExtinction;  // 0x01A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveLinearColor* CurveLocFogColour;  // 0x01B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x01B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* PP_Mat_DebrisLC;  // 0x01C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* PP_Mat_DebrisSW;  // 0x01C8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_Ashes;  // 0x01D0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_Embers;  // 0x01D8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_Hail;  // 0x01E0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_Acid;  // 0x01E8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_Smoke;  // 0x01F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* PP_Mat_DebrisGL;  // 0x01F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EPhysicalSurface> WaterSurfaceType;  // 0x0200, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_Whiteout;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* PP_Mat_Radiation;  // 0x0210, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_RadiationLocal;  // 0x0218, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RainDropInterp;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DeactivateStormWall;  // 0x0224, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_RadiationWeather;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DES_LastCheck;  // 0x0230, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LowEffectsQuality;  // 0x0234, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StormWallMaxDist;  // 0x0238, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StormWallMinDist;  // 0x023C, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_LightningCloud;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_RadiationWind;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* NFX_Speckles;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* PP_RadStatic;  // 0x0258, size 0x8

    UFUNCTION(BlueprintCallable) void Calculate_Desired_Fire_Intensity(float DeltaSeconds);  // parameters 0x4, named "Calculate Desired Fire Intensity"
    UFUNCTION(BlueprintCallable) void CreateCosmeticLightningStrike(FVector StrikeLocation);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector DES_TraceAroundPlayer(float FOV, float RangeMin, float RangeMax);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void DisablePPDebrisEffects();
    UFUNCTION() void ExecuteUbergraph_BP_PlayerEffectsComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetDesiredStormWallDist();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetEffectOwner(USceneComponent*& OwnerComponent) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetEffectTargetLocation(FVector& TargetLocation) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPlayerVelocity();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitAcid();
    UFUNCTION(BlueprintCallable) void InitAshes();
    UFUNCTION(BlueprintCallable) void InitDistantFog();
    UFUNCTION(BlueprintCallable) void InitEmber();
    UFUNCTION(BlueprintCallable) void InitHail();
    UFUNCTION(BlueprintCallable) void InitLightningClouds();
    UFUNCTION(BlueprintCallable) void InitLocalFogVolume();
    UFUNCTION(BlueprintCallable) void InitMiscFx();
    UFUNCTION(BlueprintCallable) void InitPostProcess();
    UFUNCTION(BlueprintCallable) void InitRadiation();
    UFUNCTION(BlueprintCallable) void InitRadiationWind();
    UFUNCTION(BlueprintCallable) void InitRain();
    UFUNCTION(BlueprintCallable) void InitShelterCapture();
    UFUNCTION(BlueprintCallable) void InitSlowTick();
    UFUNCTION(BlueprintCallable) void InitSmoke();
    UFUNCTION(BlueprintCallable) void InitSnow();
    UFUNCTION(BlueprintCallable) void InitSpeckles();
    UFUNCTION(BlueprintCallable) void InitStorms();
    UFUNCTION(BlueprintCallable) void InitTerrainDeformation();
    UFUNCTION(BlueprintCallable) void InitWhiteout();
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable, BlueprintPure) void Is_Sheltered(bool& Sheltered);  // parameters 0x1, named "Is Sheltered"
    UFUNCTION(BlueprintCallable) void PeriodicSettingsCheck();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetOwnerOverride(USceneComponent* OwnerOverride);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SlowTick();
    UFUNCTION(BlueprintCallable) void TickAcid();
    UFUNCTION(BlueprintCallable) void TickAshes();
    UFUNCTION(BlueprintCallable) void TickDynamicEmitterSystem();
    UFUNCTION(BlueprintCallable) void TickEmbers();
    UFUNCTION(BlueprintCallable) void TickFire();
    UFUNCTION(BlueprintCallable) void TickHail();
    UFUNCTION(BlueprintCallable) void TickLightning();
    UFUNCTION(BlueprintCallable) void TickLightningClouds();
    UFUNCTION(BlueprintCallable) void TickLocalFogVolume();
    UFUNCTION(BlueprintCallable) void TickMiscFx();
    UFUNCTION(BlueprintCallable) void TickRadiation();
    UFUNCTION(BlueprintCallable) void TickRadiationNFX(float Event_Name, UNiagaraComponent* NFX);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void TickRadiationWind();
    UFUNCTION(BlueprintCallable) void TickRain();
    UFUNCTION(BlueprintCallable) void TickShelterCapture();
    UFUNCTION(BlueprintCallable) void TickSmoke();
    UFUNCTION(BlueprintCallable) void TickSnow();
    UFUNCTION(BlueprintCallable) void TickSpeckles();
    UFUNCTION(BlueprintCallable) void TickStormWall();
    UFUNCTION(BlueprintCallable) void TickStorms();
    UFUNCTION(BlueprintCallable) void TickWaterInteraction();
    UFUNCTION(BlueprintCallable) void TickWeatherEvent(float Event_Name, UNiagaraComponent* NFX);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void TickWhiteout();
    UFUNCTION(BlueprintCallable) void ToggleAllStormNFX(bool Activate);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateRainDropsPP(float WeatherVal);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void WeatherCaptureGrid();
};
