// /Game/BP/Systems/Disaster/BP_LightningStrike.BP_LightningStrike_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x330, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_LightningStrike_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcessStrike;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* LightningMesh;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BuildupTimeRemaining;  // 0x02E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* ActorTarget;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFLODInstanceID FLODRecordTarget;  // 0x02F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ELightningStrikeTarget> TargetType;  // 0x0308, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Strike;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_Buildup;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EffectTriggered;  // 0x0320, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StrikeDuration;  // 0x0324, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDynamicallyShadowCasting;  // 0x0328, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultLightningBurnChance_;  // 0x032C, size 0x4, named "DefaultLightningBurnChance%"

    UFUNCTION(BlueprintCallable) void CanCastShadows(bool& CanTurnOnShadowCasting);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ConfigureLightningLight(bool CanCastShadows);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_LightningStrike(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Particles_only();  // named "Particles only"
    UFUNCTION(BlueprintCallable) void PlayBuildupSound();
    UFUNCTION(BlueprintCallable) void PlayStrikeSound();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Strike();
    UFUNCTION(BlueprintCallable) void StrikeBuilding();
    UFUNCTION(BlueprintCallable) void StrikeFLOD();
    UFUNCTION(BlueprintCallable) void StrikeLightningRod();
    UFUNCTION(BlueprintCallable) void StrikePlayer();
    UFUNCTION(BlueprintCallable) void TestStrike_works_once_();  // named "TestStrike(works once)"
    UFUNCTION(BlueprintCallable) void TickStrikeSequence(float DeltaTime);  // parameters 0x4
};
