// /Game/BP/AI/Bosses/BP_SlugManager.BP_SlugManager_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x318, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SlugManager_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_AIAlert_C* BP_UIProjectionComponent_AIAlert;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusNPCGOAPCharacter*> CurrentSlugs;  // 0x02D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AddedPercentages;  // 0x02E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AveragePercentage;  // 0x02EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle HideHealthTimer;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool SpawnerMapIconActive;  // 0x02F8, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AWorldBossSpawner* SlugBossSpawner;  // 0x0300, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSlugDeath SlugDeath;  // 0x0308, size 0x10

    UFUNCTION(BlueprintCallable) void AddSlug(ABP_IcarusNPCGOAPCharacter_C* Slug);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckForFinalSlug(AActor* Slug);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_SlugManager(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Get_Closest_World_Boss_Spawner(AWorldBossSpawner*& AsWorld_Boss_Spawner);  // parameters 0x8, named "Get Closest World Boss Spawner"
    UFUNCTION(BlueprintCallable) void IsFinalSlug(bool& IsFinal);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Remove_Slug(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9, named "Remove Slug"
    UFUNCTION(BlueprintCallable) void SetSpawnerMapIconActive();
    UFUNCTION(BlueprintCallable) void SetWorldSpawnerIcon();
    UFUNCTION(BlueprintCallable) void ShowHealthBar();
    UFUNCTION(BlueprintCallable) void SlugDeath__DelegateSignature();
    UFUNCTION(BlueprintCallable) void TickHealth();
};
