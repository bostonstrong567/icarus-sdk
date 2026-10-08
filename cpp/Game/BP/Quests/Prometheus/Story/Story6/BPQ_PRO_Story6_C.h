// /Game/BP/Quests/Prometheus/Story/Story6/BPQ_PRO_Story6.BPQ_PRO_Story6_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4AC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story6_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_PersistantBlocker_C* BPQC_PersistantBlocker;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x0478, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CaveContentsSpawned;  // 0x0490, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterFlagsRowHandle Character_Flag;  // 0x0494, size 0x18, named "Character Flag"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CustomEvent(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CustomEvent_1(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Story6(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetItemFromClass(TSubclassOf<AActor> Class, FItemData& Item);  // parameters 0x1F8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestAbandoned();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnCaveContent(bool FirstTime);  // parameters 0x1
};
