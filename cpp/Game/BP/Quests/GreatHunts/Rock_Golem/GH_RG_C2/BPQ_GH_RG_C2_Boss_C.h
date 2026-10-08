// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_C2/BPQ_GH_RG_C2_Boss.BPQ_GH_RG_C2_Boss_C
// Derives from: ABPQ_Common_MapIconOnArrival_Subquests_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_C2_Boss_C : public ABPQ_Common_MapIconOnArrival_Subquests_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RespawnDen;  // 0x0498, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Required_Item;  // 0x049C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum RequiredStat;  // 0x04B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Name;  // 0x04C8, size 0x10

    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_C2_Boss(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceRespawn();
    UFUNCTION(BlueprintCallable) void PlayerEntered(AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RunSubQuests();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
