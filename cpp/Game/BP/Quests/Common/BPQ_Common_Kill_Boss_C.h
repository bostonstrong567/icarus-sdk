// /Game/BP/Quests/Common/BPQ_Common_Kill_Boss.BPQ_Common_Kill_Boss_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_Kill_Boss_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FEpicCreaturesRowHandle Epic_Creature;  // 0x0470, size 0x18, named "Epic Creature"
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FAISetupRowHandle AITo_Spawn;  // 0x0488, size 0x18, named "AITo Spawn"

    UFUNCTION(BlueprintCallable) void Boss_Killed(AActor* Spawner);  // parameters 0x8, named "Boss Killed"
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Common_Kill_Boss(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
