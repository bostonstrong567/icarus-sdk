// /Game/BP/Quests/Styx/A/Research/BPQ_Styx_A_Research_Nest_Kiwi.BPQ_Styx_A_Research_Nest_Kiwi_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Styx_A_Research_Nest_Kiwi_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* _5;  // 0x0468, size 0x8, named "5"
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* _4;  // 0x0470, size 0x8, named "4"
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* _3;  // 0x0478, size 0x8, named "3"
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* _2;  // 0x0480, size 0x8, named "2"
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* _1;  // 0x0488, size 0x8, named "1"
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SpawnerLocations;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* Target;  // 0x04A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSpawnersActive;  // 0x04B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_ManualAISpawnPoint_C*> Spawners;  // 0x04B8, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DestroySpawners();
    UFUNCTION() void ExecuteUbergraph_BPQ_Styx_A_Research_Nest_Kiwi(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnSpawners();
};
