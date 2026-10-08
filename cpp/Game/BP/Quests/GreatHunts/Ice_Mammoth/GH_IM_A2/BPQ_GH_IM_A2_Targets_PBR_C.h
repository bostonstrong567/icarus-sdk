// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_A2/BPQ_GH_IM_A2_Targets_PBR.BPQ_GH_IM_A2_Targets_PBR_C
// Derives from: ABPQ_Common_MapIconOnArrival_WithBeacon_Subquests_C > ABPQ_Common_MapIconOnArrival_Subquests_C > AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_A2_Targets_PBR_C : public ABPQ_Common_MapIconOnArrival_WithBeacon_Subquests_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Spawned_AI;  // 0x04A0, size 0x8, named "Spawned AI"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x04A8, size 0x18

    UFUNCTION(BlueprintCallable) void AiKilled_Event_0();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_A2_Targets_PBR(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTarget(AActor*& Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnAISpawned(AActor* SpawnedAI);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayerEntered(AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RunSubQuests();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TriggerAI();
};
