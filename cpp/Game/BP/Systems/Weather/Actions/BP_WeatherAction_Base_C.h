// /Game/BP/Systems/Weather/Actions/BP_WeatherAction_Base.BP_WeatherAction_Base_C
// Derives from: UIcarusWeatherAction > UActorComponent > UObject
// size 0x8CC, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_WeatherAction_Base_C : public UIcarusWeatherAction
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ActiveWarningMessage;  // 0x07D0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> WindDamagedBuildings;  // 0x07E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_WeatherController_C* WeatherControllerRef;  // 0x07F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DamageDeployablesRef;  // 0x0800, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DamagePlayerRef;  // 0x0808, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> LoadedSoftObjects;  // 0x0810, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AIcarusPlayerCharacter*, int32> AppliedExposureModifiers;  // 0x0820, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DamageTaggedRef;  // 0x0870, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle ClogProcessorsRef;  // 0x0878, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DamagePlayerTaggedRef;  // 0x0880, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> TaggedBuildings;  // 0x0888, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ADeployable*> TaggedDeployables;  // 0x0898, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> TaggedBuildingsDamaged;  // 0x08A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TaggedBuildingMaxPiecesToDamage;  // 0x08B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle NetworkUpdateRef;  // 0x08C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ColorAmount;  // 0x08C8, size 0x4

    UFUNCTION(BlueprintCallable) void Action_AIPerception();
    UFUNCTION(BlueprintCallable) void Action_AshBuildUp();
    UFUNCTION(BlueprintCallable) void Action_ExtinguishFire();
    UFUNCTION(BlueprintCallable) void Action_RainFillable();
    UFUNCTION(BlueprintCallable) void Action_SandBuildUp();
    UFUNCTION(BlueprintCallable) void Action_SnowBuildUp();
    UFUNCTION(BlueprintCallable) void Action_Temperature();
    UFUNCTION(BlueprintCallable) void Action_Wind();
    UFUNCTION(BlueprintCallable) void ClearExposureModifierForPlayer(const AIcarusPlayerCharacter*& Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CloggedCycle();
    UFUNCTION(BlueprintCallable) void DamageTaggedCycle();
    UFUNCTION(BlueprintCallable) void Damage_Deployables();
    UFUNCTION(BlueprintCallable) void Damage_Player();
    UFUNCTION(BlueprintCallable) void DebugWeatherActionBase(const FBiomesRowHandle& BiomesRowHandle, float CurrentLifeTime, float TotalLifeTime, float Delta);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void DmagePlayerItemCycle();
    UFUNCTION(BlueprintCallable) void DoTaggedDamage(int32 Intensity, EIcarusDamageType DamageType, float DutyCycle, bool IsRampingUp);  // parameters 0xD
    UFUNCTION() void ExecuteUbergraph_BP_WeatherAction_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetColorCurveTimeRemaining(UCurveLinearColor* Curve, bool Inverse, FLinearColor NewParam);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetStormTier() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTimeRemaining(UCurveFloat* Curve, bool Inverse);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void LoadSoftObjects();
    UFUNCTION(BlueprintCallable) void NetworkUpdateCycle();
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B7F63BB814(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PickUnzipGrid(ABP_Grid_Base_C*& SelectedGrid);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayerExposureChecks();
    UFUNCTION(BlueprintCallable) void RandomizeWind();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void StartTaggedDamage(FTagQueriesRowHandle TagQueryRow, FBiomesRowHandle Biome, int32 StormTier);  // parameters 0x34
    UFUNCTION(BlueprintCallable) void StartWindDamageToBuilding();
    UFUNCTION(BlueprintCallable) void StopTaggedDamage();
    UFUNCTION(BlueprintCallable) void StormWindDamageSelectBuildingPiece();
    UFUNCTION(BlueprintCallable) void Visual_AcidRain();
    UFUNCTION(BlueprintCallable) void Visual_Ash();
    UFUNCTION(BlueprintCallable) void Visual_Clouds();
    UFUNCTION(BlueprintCallable) void Visual_Debris();
    UFUNCTION(BlueprintCallable) void Visual_Embers();
    UFUNCTION(BlueprintCallable) void Visual_FogColor();
    UFUNCTION(BlueprintCallable) void Visual_FogDensity();
    UFUNCTION(BlueprintCallable) void Visual_FogExtinction();
    UFUNCTION(BlueprintCallable) void Visual_Hail();
    UFUNCTION(BlueprintCallable) void Visual_LightningCloud();
    UFUNCTION(BlueprintCallable) void Visual_Radiation();
    UFUNCTION(BlueprintCallable) void Visual_RadiationWind();
    UFUNCTION(BlueprintCallable) void Visual_Rain();
    UFUNCTION(BlueprintCallable) void Visual_Sand();
    UFUNCTION(BlueprintCallable) void Visual_Smoke();
    UFUNCTION(BlueprintCallable) void Visual_Snow();
    UFUNCTION(BlueprintCallable) void Visual_SnowStorm();
    UFUNCTION(BlueprintCallable) void Visual_Speckles();
    UFUNCTION(BlueprintCallable) void Visual_Whiteout();
    UFUNCTION(BlueprintCallable) void Visual_Wind();
    UFUNCTION(BlueprintImplementableEvent) void WeatherActionEnded(AWeatherController* WeatherController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void WeatherActionStarted(AWeatherController* WeatherController);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void WeatherActionTick(float Delta, AWeatherController* WeatherController);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void WeatherActionVisualTick(float Delta, AWeatherController* WeatherController);  // parameters 0x10
};
