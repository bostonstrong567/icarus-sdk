// /Game/BP/Quests/Olympus/Desert/Extermination/BPQ_OLY_Desert_Extermination_Interact.BPQ_OLY_Desert_Extermination_Interact_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x474, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Desert_Extermination_Interact_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SetIndex;  // 0x0470, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Desert_Extermination_Interact(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnInteracted();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
