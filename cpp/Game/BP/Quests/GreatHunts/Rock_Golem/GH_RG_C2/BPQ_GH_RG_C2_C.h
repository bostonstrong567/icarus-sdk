// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_C2/BPQ_GH_RG_C2.BPQ_GH_RG_C2_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x510, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_C2_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FQuestQueriesRowHandle, int32> QuestMarkers;  // 0x0470, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FQuestQueriesRowHandle, FString> Names;  // 0x04C0, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_C2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
