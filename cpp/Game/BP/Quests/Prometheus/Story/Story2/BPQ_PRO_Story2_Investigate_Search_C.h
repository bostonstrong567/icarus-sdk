// /Game/BP/Quests/Prometheus/Story/Story2/BPQ_PRO_Story2_Investigate_Search.BPQ_PRO_Story2_Investigate_Search_C
// Derives from: ABPQ_Retrieve_Item_Base_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story2_Investigate_Search_C : public ABPQ_Retrieve_Item_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04D8, size 0x8

    UFUNCTION(BlueprintCallable) void AttemptSpawn();
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Story2_Investigate_Search(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
