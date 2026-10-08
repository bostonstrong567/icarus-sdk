// /Game/BP/Quests/Olympus/Riverlands/Extermination/BPQ_OLY_Riverlands_Extermination_Kill.BPQ_OLY_Riverlands_Extermination_Kill_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Riverlands_Extermination_Kill_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x0470, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_NPC_Jaguar_Black_Character_C* SpawnedBoss;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* DenActor;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* BossScaling;  // 0x0498, size 0x8

    UFUNCTION(BlueprintCallable) void BossKilled(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckBossState();
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Riverlands_Extermination_Kill(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnBoss();
};
