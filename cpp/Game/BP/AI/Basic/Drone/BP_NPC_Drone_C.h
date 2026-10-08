// /Game/BP/AI/Basic/Drone/BP_NPC_Drone.BP_NPC_Drone_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD70, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Drone_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Active_VFX;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusSpotLight_C* BP_IcarusSpotLight;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_G;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_R;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DroneFlare_L;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_DroneFlare_R;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* DroneFly;  // 0x0CF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* AttachedComponents;  // 0x0CF8, size 0x8
    UPROPERTY() float TimelineLights_Alpha2_7E005599419271A0900B7798031FD2DA;  // 0x0D00, size 0x4
    UPROPERTY() float TimelineLights_Alpha1_7E005599419271A0900B7798031FD2DA;  // 0x0D04, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> TimelineLights__Direction_7E005599419271A0900B7798031FD2DA;  // 0x0D08, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* TimelineLights;  // 0x0D10, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<DroneState> DroneState;  // 0x0D18, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<DroneState> LastDroneState;  // 0x0D19, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DroneLightMaterial;  // 0x0D20, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* SmokeFX;  // 0x0D28, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) UFMODEvent* SpotVocal;  // 0x0D30, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* DroneSpawn;  // 0x0D38, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* DroneDeathSpark;  // 0x0D40, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EmissiveLightSlot;  // 0x0D48, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MinDistToTargetBBKeyName;  // 0x0D4C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MaxDistFromAnchorBBKeyName;  // 0x0D54, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName MaxDistToEngageTargetBBKeyName;  // 0x0D5C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<DroneType> DroneType;  // 0x0D64, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UDestructibleMesh* DeathDestructibleMesh;  // 0x0D68, size 0x8

    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CreateDynMat();
    UFUNCTION(BlueprintCallable) void DroneStateUpdated();
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Drone(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) EStealthAttackType GetStealthAwarenessLevel() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetTargetAlertness() const;  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsCriticalHitDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_SettleExplosion();
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable) void OnRagdollSettled();
    UFUNCTION(BlueprintCallable) void OnRep_DroneState();
    UFUNCTION(BlueprintCallable) void PlaySpotAudio();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ReplaceSelfWithDeadItem(AIcarusActor*& ReplacementActor, const TArray<FIcarusStatReplicated>& CustomStats);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void ReplicateBlackboardVariables();
    UFUNCTION(BlueprintCallable) void SetupNavLights();
    UFUNCTION(BlueprintCallable) void SpawnLoot();
    UFUNCTION() void TimelineLights__FinishedFunc();
    UFUNCTION() void TimelineLights__UpdateFunc();
    UFUNCTION(BlueprintCallable) void UpdateAudioOcclusionParam();
    UFUNCTION(BlueprintCallable) void UpdateDroneLights();
    UFUNCTION(BlueprintCallable) void UpdateNavLights();
};
