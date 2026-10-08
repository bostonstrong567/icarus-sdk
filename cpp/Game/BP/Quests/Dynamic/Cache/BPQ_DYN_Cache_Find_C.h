// /Game/BP/Quests/Dynamic/Cache/BPQ_DYN_Cache_Find.BPQ_DYN_Cache_Find_C
// Derives from: ABPQ_Retrieve_Item_Base_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_DYN_Cache_Find_C : public ABPQ_Retrieve_Item_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemRewardsRowHandle> CacheRewards;  // 0x04E0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_DYN_Cache_Find(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateRewards(FItemRewardsRowHandle RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
