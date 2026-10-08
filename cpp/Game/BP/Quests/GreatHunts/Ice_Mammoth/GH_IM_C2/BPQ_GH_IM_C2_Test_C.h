// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_C2/BPQ_GH_IM_C2_Test.BPQ_GH_IM_C2_Test_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x48A, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_C2_Test_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* Spawner_Bat;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* Spawner_Heavy;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* Spawner_Light;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Deployed;  // 0x0488, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Powered;  // 0x0489, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_C2_Test(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
