// /Game/BP/AI/Bosses/Misc/BP_WyrmQueenEgg.BP_WyrmQueenEgg_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x38C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WyrmQueenEgg_C : public AIcarusActor, public IAITargetable
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Wyrm_Queen_EggShell;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* DustCloud;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* Capsule;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* EmergeEffect;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_SandMould;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* Destructible;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_CRE_Wyrm_Queen_Egg;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGenericAITargetComponent* GenericAITarget;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* LavaEggAudio;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* EggScale;  // 0x0310, size 0x8
    UPROPERTY() float Timeline_2_ZHeight_BC9990FB4DC91693F992418A33B0FC0A;  // 0x0318, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_2__Direction_BC9990FB4DC91693F992418A33B0FC0A;  // 0x031C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_2;  // 0x0320, size 0x8
    UPROPERTY() float Timeline_1_ZHeight_B12F97C64F35D52F782728A7E28F12F2;  // 0x0328, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_1__Direction_B12F97C64F35D52F782728A7E28F12F2;  // 0x032C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_1;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AIToSpawn;  // 0x0338, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float TimeBeforeHatch;  // 0x0350, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AILevel;  // 0x0354, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetScale;  // 0x0358, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumToSpawn;  // 0x035C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle HatchTimer;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool HasBroken;  // 0x0368, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartingHealth;  // 0x036C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float InitalZHeight;  // 0x0370, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float Delay;  // 0x0374, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ObjectHeight;  // 0x0378, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ProjectileResistance;  // 0x037C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MeleeResistance;  // 0x0380, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LaserResistance;  // 0x0384, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FireResistance;  // 0x0388, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_WyrmQueenEgg(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TArray<FCriticalHitLocation> GetCriticalHitBones() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FAIRelationshipsRowHandle GetRelationshipData() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetTargetAlertness() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetTargetLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsActorAlive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsCriticalHitDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsHidden() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsStealthBonusDamageDisabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_BreakEgg();
    UFUNCTION(BlueprintCallable) void OnDamaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnEggDestroyed(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void RaiseEgg();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ShouldOverrideTargetNeutrality(AActor* TargetActor, ERelationshipType& OutRelationshipType) const;  // parameters 0xA
    UFUNCTION(BlueprintCallable) void SpawnEggAI();
    UFUNCTION(BlueprintCallable) void StartHatch();
    UFUNCTION() void Timeline_1__FinishedFunc();
    UFUNCTION() void Timeline_1__NewTrack_0__EventFunc();
    UFUNCTION() void Timeline_1__StopAudio__EventFunc();
    UFUNCTION() void Timeline_1__UpdateFunc();
    UFUNCTION() void Timeline_2__FinishedFunc();
    UFUNCTION() void Timeline_2__NewTrack_0__EventFunc();
    UFUNCTION() void Timeline_2__StopAudio__EventFunc();
    UFUNCTION() void Timeline_2__UpdateFunc();
};
