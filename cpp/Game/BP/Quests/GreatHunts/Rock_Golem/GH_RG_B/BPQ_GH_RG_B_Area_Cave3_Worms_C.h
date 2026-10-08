// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_B/BPQ_GH_RG_B_Area_Cave3_Worms.BPQ_GH_RG_B_Area_Cave3_Worms_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x518, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_B_Area_Cave3_Worms_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* _5;  // 0x0468, size 0x8, named "5"
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* _4;  // 0x0470, size 0x8, named "4"
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* _3;  // 0x0478, size 0x8, named "3"
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* _2;  // 0x0480, size 0x8, named "2"
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* _1;  // 0x0488, size 0x8, named "1"
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Spawners;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x04A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x04A1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Duration;  // 0x04A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusPawn*> Spawned;  // 0x04A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Selected_Player;  // 0x04B8, size 0x8, named "Selected Player"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BaseMax;  // 0x04C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<USceneComponent*, AIcarusPawn*> Mapping;  // 0x04C8, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_B_Area_Cave3_Worms(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceTrigger();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFreeSpawnLocations(TArray<USceneComponent*>& SpawnLocations);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveWorm(AIcarusPawn* Worm);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetupWorm(AIcarusPawn* Creature, USceneComponent* Scene);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SpawnWorms();
    UFUNCTION(BlueprintCallable) void WormDamageResetTimer(AActor* DamagedActor, float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void WormDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void WormDeleted(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
};
