// /Game/BP/Quests/Olympus/Omni/Research2/BPQ_OLY_Omni_Research_2_Equipment_Extra.BPQ_OLY_Omni_Research_2_Equipment_Extra_C
// Derives from: ABPQ_Retrieve_Item_And_Spawn_Crate_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Omni_Research_2_Equipment_Extra_C : public ABPQ_Retrieve_Item_And_Spawn_Crate_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* BossSpawn;  // 0x04C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* Spawnpoint1;  // 0x04D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* Spawnpoint2;  // 0x04D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* Spawnpoint3;  // 0x04E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Omni_Research_2_Equipment_Extra(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
