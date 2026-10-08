// /Game/BP/Quests/Olympus/Desert/Scan/BPQ_OLY_Desert_Scan.BPQ_OLY_Desert_Scan_C
// Derives from: ABPQ_Scan_Parent_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Desert_Scan_C : public ABPQ_Scan_Parent_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusNPCGOAPCharacter*> AnimalsSpawned;  // 0x04D0, size 0x10

    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Desert_Scan(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void HandleQuestEvent(FQuestEventsEnum Event, AQuest* Quest);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnAnimalSpawned(AIcarusNPCGOAPCharacter* Animal);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
