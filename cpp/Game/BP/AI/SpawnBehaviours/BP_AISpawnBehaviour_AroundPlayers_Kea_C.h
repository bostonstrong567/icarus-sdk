// /Game/BP/AI/SpawnBehaviours/BP_AISpawnBehaviour_AroundPlayers_Kea.BP_AISpawnBehaviour_AroundPlayers_Kea_C
// Derives from: UBP_AISpawnBehaviour_AroundPlayers_C > UAISpawnBehaviour > UObject
// size 0x169, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AISpawnBehaviour_AroundPlayers_Kea_C : public UBP_AISpawnBehaviour_AroundPlayers_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0160, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SpawnFlying;  // 0x0168, size 0x1

    UFUNCTION(BlueprintCallable) void DoSpawn(UObject* Context, FVector SpawnLocation);  // parameters 0x14
    UFUNCTION() void ExecuteUbergraph_BP_AISpawnBehaviour_AroundPlayers_Kea(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool FindValidSpawnLocationInsideTree(AActor* AroundActor, FVector& SpawnLocation);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void TrySpawnAsync(AActor* AroundPlayer);  // parameters 0x8
};
