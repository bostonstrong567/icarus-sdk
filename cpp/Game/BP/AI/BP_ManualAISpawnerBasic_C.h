// /Game/BP/AI/BP_ManualAISpawnerBasic.BP_ManualAISpawnerBasic_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x340, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ManualAISpawnerBasic_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x02D0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesRowHandle EpicCreature;  // 0x02E8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Level;  // 0x0300, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RespawnTime;  // 0x0304, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentTime;  // 0x0308, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CurrentAI;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FirstTime;  // 0x0318, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FAIKilled AIKilled;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FAISpawned AISpawned;  // 0x0330, size 0x10

    UFUNCTION(BlueprintCallable) void AIKilled__DelegateSignature(ABP_ManualAISpawnerBasic_C* Spawner);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AISpawned__DelegateSignature(AActor* AI);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ActorDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_ManualAISpawnerBasic(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
