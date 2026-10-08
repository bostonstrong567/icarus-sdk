// /Game/BP/Quests/Implementations/Bw6_Research/BP_Quest_Bw6_Research_Flower_2.BP_Quest_Bw6_Research_Flower_2_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x478, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Quest_Bw6_Research_Flower_2_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_Quest_Bw6_Research_Flower_2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnPickedUp();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
