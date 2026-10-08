// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_OP1/BPQ_GH_RG_OP1.BPQ_GH_RG_OP1_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_OP1_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle Session_Flag;  // 0x0470, size 0x18, named "Session Flag"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccountFlagsRowHandle Quarrite_Flag;  // 0x0488, size 0x18, named "Quarrite Flag"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQuestQueriesRowHandle> QuestMarkers;  // 0x04A0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_OP1(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GrantAccountFlag(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
