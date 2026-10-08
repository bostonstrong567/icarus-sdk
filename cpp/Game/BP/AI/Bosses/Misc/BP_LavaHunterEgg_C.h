// /Game/BP/AI/Bosses/Misc/BP_LavaHunterEgg.BP_LavaHunterEgg_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x330, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_LavaHunterEgg_C : public AIcarusActor, public IAITargetable
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGenericAITargetComponent* GenericAITarget;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* LavaEggAudio;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SK_LavaHunter_Egg;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* Destructible;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* EggScale;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AIToSpawn;  // 0x02F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeBeforeHatch;  // 0x0310, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AILevel;  // 0x0314, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetScale;  // 0x0318, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumToSpawn;  // 0x031C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle HatchTimer;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool HasBroken;  // 0x0328, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 StartingHealth;  // 0x032C, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_LavaHunterEgg(int32 EntryPoint);  // parameters 0x4
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
    UFUNCTION(BlueprintCallable) void OnEggDestroyed(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ShouldOverrideTargetNeutrality(AActor* TargetActor, ERelationshipType& OutRelationshipType) const;  // parameters 0xA
    UFUNCTION(BlueprintCallable) void SpawnEggAI();
    UFUNCTION(BlueprintCallable) void StartHatch();
};
