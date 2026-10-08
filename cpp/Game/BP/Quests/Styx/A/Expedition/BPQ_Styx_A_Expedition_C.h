// /Game/BP/Quests/Styx/A/Expedition/BPQ_Styx_A_Expedition.BPQ_Styx_A_Expedition_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Styx_A_Expedition_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene5;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene4;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene3;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene2;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene1;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* Target;  // 0x04A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_ManualAISpawnPoint_C*> Spawners;  // 0x04A8, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Styx_A_Expedition(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnSpawner(USceneComponent* Target);  // parameters 0x8
};
