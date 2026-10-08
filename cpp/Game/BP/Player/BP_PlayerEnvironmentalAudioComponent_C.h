// /Game/BP/Player/BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C
// Derives from: UPlayerEnvironmentalAudioComponent > UActorComponent > UObject
// size 0x2E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PlayerEnvironmentalAudioComponent_C : public UPlayerEnvironmentalAudioComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0178, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_AtmosphereController_C* AtmosphereController;  // 0x0180, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float AmbienceUpdateFrequency;  // 0x0188, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CaveOverride;  // 0x0190, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBiomesEnum, UFMODAudioComponent*> BiomeAmbiences;  // 0x0198, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseExperimentalReflections;  // 0x01E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ReflectionTraceIndex;  // 0x01EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> ReflectionTraceResults;  // 0x01F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool DebugBiomes;  // 0x0200, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FoliageUpdateFrequency;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName FMODParamWind;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName FMODParamShelter;  // 0x0210, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ReflectionTraceDistance;  // 0x0218, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacterSurvival* Player;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LevelHeightScale;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ShelterRoomToneThreshold;  // 0x022C, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* RoomToneAudioComponent;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* RoomToneFMODEvent;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EPhysicalSurface> CurrentRoomToneSurface;  // 0x0240, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* DistantThunderFMODEvent;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* SleepFMODEvent;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* SleepSnapshotFMODEvent;  // 0x0258, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UCurveFloat* FireIntensityCurve;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxFireIntensity;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TEnumAsByte<EPhysicalSurface>, float> SurfaceReflectionMultipliers;  // 0x0270, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFMODEventInstance SleepSnapshotFMODEventInstance;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomesRowHandle CurrentAmbienceBiome;  // 0x02C8, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* RadiationAudioComponent;  // 0x02E0, size 0x8

    UFUNCTION(BlueprintCallable) void AddBiomeAmbience(FBiomesEnum Biome);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Environment_Update();  // named "Environment Update"
    UFUNCTION() void ExecuteUbergraph_BP_PlayerEnvironmentalAudioComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAmbienceInfluence(FBiomesEnum Biome, float& Value);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFireIntensity(float Weighting, float Distance, float& Intensity);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FVector GetFoliageTraceLocation();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FVector GetShelterTraceLocation();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTreeDensityValue(int32 Count, int32 CloseCount, float CoverDepth, float GroupOverlap, float& TreeDensity);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void InitialiseReflections();
    UFUNCTION(BlueprintCallable) void On_Player_Health_Updated(UActorState* ActorState, float NewHealth);  // parameters 0xC, named "On Player Health Updated"
    UFUNCTION(BlueprintCallable) void OnConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void OnPlayerAttachedSeatChanged();
    UFUNCTION(BlueprintCallable) void PlayCosmeticThunderSound(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void PlaySleepAudio();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveBiomeAmbience(FBiomesEnum Biome);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveCaveOverride();
    UFUNCTION(BlueprintCallable) void SetCaveOverride(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetGlobalWeatherParameters(float Time, float Rain, float Overcast, float Snow, float Sandstorm, float Snowstorm, float Thunder, float Debris, float Wind, float AcidRain, float VolcanicEmbers, float VolcanicAsh, float Hail, float Speckles, float LightningCloud);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void SetPlayerPositionParameters();
    UFUNCTION(BlueprintCallable) void SetSleepSnapshotActive(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Update_Radiation_Geiger();  // named "Update Radiation Geiger"
    UFUNCTION(BlueprintCallable) void UpdateBiome();
    UFUNCTION(BlueprintCallable) void UpdateBiomeAmbiences();
    UFUNCTION(BlueprintCallable) void UpdateFireIntensity();
    UFUNCTION(BlueprintCallable) void UpdateFoliageParameters();
    UFUNCTION(BlueprintCallable) void UpdateRoomTone();
    UFUNCTION(BlueprintCallable) void UpdateShelterParameters();
};
