// /Game/BP/Quests/Components/BP_HordeSpawner.BP_HordeSpawner_C
// Derives from: AActor > UObject
// size 0x304, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_HordeSpawner_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0230, size 0xC
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FNPCSpawned NPCSpawned;  // 0x0240, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHordeCreatureSetup Creature;  // 0x0250, size 0xA0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Multiplier;  // 0x02F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream Random_Stream;  // 0x02F4, size 0x8, named "Random Stream"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpawnRadius;  // 0x02FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpaceBetween;  // 0x0300, size 0x4

    UFUNCTION(BlueprintCallable) void EQSComplete(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BP_HordeSpawner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetLevelForAI(int32& Level);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void NPCSpawned__DelegateSignature(ABP_IcarusNPCGOAPCharacter_C* NPC);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SpawnCreature(FHordeCreatureSetup Creature, float Multiplier, float InitialSpawnDelay);  // parameters 0xA8
};
