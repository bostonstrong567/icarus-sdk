// /Game/BP/AI/Basic/Caves/BP_CRE_CaveWorm.BP_CRE_CaveWorm_C
// Derives from: ABP_FactionBoss_SandWorm_C > ABP_FactionBoss_Base_C > AIcarusPawn > APawn > AActor > UObject
// size 0x6CC, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_CRE_CaveWorm_C : public ABP_FactionBoss_SandWorm_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0660, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVocalisationComponent* Vocalisation;  // 0x0668, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* LootBagLocation;  // 0x0670, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioContextComponent* AudioContext;  // 0x0678, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_MED_01;  // 0x0680, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_02;  // 0x0688, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_MED_06;  // 0x0690, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_MED_03;  // 0x0698, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_01;  // 0x06A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_05;  // 0x06A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_CF_SML_03;  // 0x06B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cylinder;  // 0x06B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SelfCleanupTimer;  // 0x06C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SelfCleanupDuration;  // 0x06C8, size 0x4

    UFUNCTION(BlueprintCallable) void CleanupSelf();
    UFUNCTION(BlueprintCallable) void DropScales(AActor* Causer, int32 DamageTaken);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_CRE_CaveWorm(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FadeOutComponents(TArray<UPrimitiveComponent*>& ComponentList);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) EMusicConditionCombatState GetCombatMusicConditionOverride(AIcarusPlayerCharacter* TargetPlayer, float Threat);  // parameters 0xD
    UFUNCTION(BlueprintImplementableEvent) void OnActorDeath(UActorState* ActorStateIn);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnCurrentStateUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SpawnLootBag();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
