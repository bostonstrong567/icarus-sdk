// /Game/BP/Quests/Elysium/Story/Story4/BPQ_ELY_Story_4_Outpost_Search.BPQ_ELY_Story_4_Outpost_Search_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x491, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_4_Outpost_Search_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool SearchAreaActive;  // 0x0490, size 0x1

    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_4_Outpost_Search(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_SearchAreaActive();
    UFUNCTION(BlueprintCallable) void Overlap();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
