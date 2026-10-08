// /Game/BP/Quests/Prometheus/Story/Story4/BPQ_PRO_Story4_Body1_Interact.BPQ_PRO_Story4_Body1_Interact_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_PRO_Story4_Body1_Interact_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_PRO_Story4_Body1_Interact(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnInteract();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
