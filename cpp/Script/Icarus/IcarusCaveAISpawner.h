// /Script/Icarus.IcarusCaveAISpawner
// Derives from: AIcarusActor > AActor > UObject
// size 0x320, declared in Icarus/Source/Icarus/AI/IcarusCaveAISpawner.h

UCLASS(Config=Engine)
class AIcarusCaveAISpawner : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TSubclassOf<AActor>, FCaveSpawnConfig> CaveActorSpawnMap;  // 0x02C0, size 0x50

    // Not reflected: the engine's scripting cannot see these.
    TArray<FCaveSpawnLoadedData,TSizedDefaultAllocator<32> > LoadedData;  // 0x0310, protected

    UFUNCTION(BlueprintImplementableEvent) void OnRestoredFromDatabase();
    UFUNCTION() void WorldStatsSet();
};
