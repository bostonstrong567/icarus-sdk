// /Game/BP/Quests/Components/BPQC_PawnSwarm.BPQC_PawnSwarm_C
// Derives from: UActorComponent > UObject
// size 0xE8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPQC_PawnSwarm_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCreatures;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle Creature;  // 0x00BC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeBetweenSpawns;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusPawn*> NPCs;  // 0x00D8, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanSpawn();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CreatureDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BPQC_PawnSwarm(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Setup(FAISetupRowHandle Creature, int32 MaxCreatures, float TimeBetweenSpawns);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SpawnPawn();
};
