// /Game/BP/Quests/Olympus/Forest/Defense/BPQ_OLY_Forest_Defense_Defend.BPQ_OLY_Forest_Defense_Defend_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x48C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Forest_Defense_Defend_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream Random_Stream;  // 0x0470, size 0x8, named "Random Stream"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_IcarusNPCGOAPCharacter_C*> NPCs;  // 0x0478, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxNPC;  // 0x0488, size 0x4

    UFUNCTION(BlueprintCallable) void AngerNPC(AIcarusNPCGOAPCharacter* NPC);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CustomEvent(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void CustomEvent_0(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CustomEvent_1(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void EQSComplete(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Forest_Defense_Defend(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
