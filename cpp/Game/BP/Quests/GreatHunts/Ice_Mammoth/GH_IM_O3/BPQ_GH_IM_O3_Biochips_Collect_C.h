// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_O3/BPQ_GH_IM_O3_Biochips_Collect.BPQ_GH_IM_O3_Biochips_Collect_C
// Derives from: ABPQ_Collect_Item_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_O3_Biochips_Collect_C : public ABPQ_Collect_Item_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_ManualAISpawnPoint_C*> Spawners;  // 0x04A0, size 0x10
};
