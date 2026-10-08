// /Game/BP/Quests/Prometheus/Story/Story6/BPQ_PRO_Story6_Traitor.BPQ_PRO_Story6_Traitor_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story6_Traitor_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SearchActors;  // 0x0470, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInteractableRowHandle InteractableHandle;  // 0x0480, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> DecalActors;  // 0x0498, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Story6_Traitor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FoundTraitor();
    UFUNCTION(BlueprintCallable) void OnClueInteract(int32 QuestData);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateSearchArea();
};
