// /Script/Engine.GarbageCollectionSettings
// Derives from: UDeveloperSettings > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Engine/CoreSettings.h

UCLASS(Config=Engine)
class UGarbageCollectionSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) float TimeBetweenPurgingPendingKillObjects;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 FlushStreamingOnGC : 1;  // 0x003C, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 AllowParallelGC : 1;  // 0x003C, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 IncrementalBeginDestroyEnabled : 1;  // 0x003C, mask 0x04
    UPROPERTY(EditAnywhere, Config) uint8 MultithreadedDestructionEnabled : 1;  // 0x003C, mask 0x08
    UPROPERTY(EditAnywhere, Config) uint8 CreateGCClusters : 1;  // 0x003C, mask 0x10
    UPROPERTY(EditAnywhere, Config) uint8 AssetClusteringEnabled : 1;  // 0x003C, mask 0x20
    UPROPERTY(EditAnywhere, Config) uint8 ActorClusteringEnabled : 1;  // 0x003C, mask 0x40
    UPROPERTY(EditAnywhere, Config) uint8 BlueprintClusteringEnabled : 1;  // 0x003C, mask 0x80
    UPROPERTY(EditAnywhere, Config) uint8 UseDisregardForGCOnDedicatedServers : 1;  // 0x003D, mask 0x01
    UPROPERTY(EditAnywhere, Config) int32 MinGCClusterSize;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 NumRetriesBeforeForcingGC;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 MaxObjectsNotConsideredByGC;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 SizeOfPermanentObjectPool;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 MaxObjectsInGame;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 MaxObjectsInEditor;  // 0x0054, size 0x4
};
