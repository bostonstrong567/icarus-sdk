// /Game/BP/Quests/Olympus/Omni/Recovery/BPQ_OLY_Omni_Recovery_Wildlife.BPQ_OLY_Omni_Recovery_Wildlife_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4BC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Omni_Recovery_Wildlife_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle CreatureToSpawn;  // 0x0470, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UObject> SpawnClass;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpawnZOffset;  // 0x0490, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HostileTargetLocationKey;  // 0x0494, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x049C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusNPCGOAPCharacter*> SpawnedAI;  // 0x04A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TotalCreatures;  // 0x04B8, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckAnimals();
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Omni_Recovery_Wildlife(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void OnAnimalKilled(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnEQSQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SpawnAnimals();
    UFUNCTION(BlueprintCallable) void SpawnFallback();
};
