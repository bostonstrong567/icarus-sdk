// /Game/BP/AI/Basic/Drone/BP_NPC_Drone_Hunter.BP_NPC_Drone_Hunter_C
// Derives from: ABP_NPC_Drone_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xDB8, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Drone_Hunter_C : public ABP_NPC_Drone_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0D70, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Drone_EngineHeat;  // 0x0D78, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* CriticalArea_Propeller;  // 0x0D80, size 0x8
    UPROPERTY() float ExplosionTimeline_LightFalloffExponent_3320F4B04877526E991054AECBD7D717;  // 0x0D88, size 0x4
    UPROPERTY() float ExplosionTimeline_LightIntensity_3320F4B04877526E991054AECBD7D717;  // 0x0D8C, size 0x4
    UPROPERTY() float ExplosionTimeline_EmissiveIntensity_3320F4B04877526E991054AECBD7D717;  // 0x0D90, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> ExplosionTimeline__Direction_3320F4B04877526E991054AECBD7D717;  // 0x0D94, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* ExplosionTimeline;  // 0x0D98, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ExplosionTriggered;  // 0x0DA0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SphereRadius;  // 0x0DA4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DroneStateName;  // 0x0DA8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ExplosionCountdownTriggered;  // 0x0DB0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WantsExplode;  // 0x0DB1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Damage_Radius;  // 0x0DB4, size 0x4, named "Damage Radius"

    UFUNCTION(BlueprintCallable) void DroneStateUpdated();
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Drone_Hunter(int32 EntryPoint);  // parameters 0x4
    UFUNCTION() void ExplosionTimeline__BeepTrigger__EventFunc();
    UFUNCTION() void ExplosionTimeline__Explode__EventFunc();
    UFUNCTION() void ExplosionTimeline__FinishedFunc();
    UFUNCTION() void ExplosionTimeline__SetProximityColour__EventFunc();
    UFUNCTION() void ExplosionTimeline__UpdateFunc();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable) void InstantExplode();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_OnExplodeFX();
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TriggerExplosion();
};
