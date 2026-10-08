// /Game/BP/Quests/Elysium/Story/Story6/BPQ_Story_6_Stronghold_Sneak.BPQ_Story_6_Stronghold_Sneak_C
// Derives from: ABPQ_Travel_Small_C > ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x498, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Story_6_Stronghold_Sneak_C : public ABPQ_Travel_Small_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_ManualAISpawnPoint_C*> Spawners;  // 0x0488, size 0x10

    UFUNCTION() void ExecuteUbergraph_BPQ_Story_6_Stronghold_Sneak(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OutsideSpawned(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
