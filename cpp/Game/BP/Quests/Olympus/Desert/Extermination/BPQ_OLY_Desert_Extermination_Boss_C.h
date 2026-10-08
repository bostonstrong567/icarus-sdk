// /Game/BP/Quests/Olympus/Desert/Extermination/BPQ_OLY_Desert_Extermination_Boss.BPQ_OLY_Desert_Extermination_Boss_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x480, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Desert_Extermination_Boss_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SetIndex;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_FactionBoss_SandWorm_C* SandwormBoss;  // 0x0478, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Desert_Extermination_Boss(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void KilledBoss(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void KilledSecondWorm(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void WormRetreat();
};
