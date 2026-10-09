// /Script/Icarus.TerrainAnchorSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x168, declared in Icarus/Source/Icarus/TerrainAnchorSubsystem.h

UCLASS()
class UTerrainAnchorSubsystem : public UWorldSubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) bool bDisabled;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) bool bDisableWithoutWorldData;  // 0x0031, size 0x1
    UPROPERTY(EditAnywhere) TMap<ULevelStreamingBinding*, ULevelStreamingBinding*> HeightmapGeneratedMap;  // 0x0038, size 0x50
    UPROPERTY(EditAnywhere) TMap<FString, ULevelStreamingBinding*> InstancedMap;  // 0x0088, size 0x50
    UPROPERTY(EditAnywhere) bool bInitialized;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere) TMap<AActor*, UTerrainAnchorComponent*> RegisteredSubjects;  // 0x00E0, size 0x50
    UPROPERTY(EditAnywhere) FTimerHandle TerrainAnchorsDirtyTimerHandle;  // 0x0130, size 0x8
    FWindowsCriticalSection OneAtATime;  // 0x0138, not reflected
    volatile int32 LastProcessedID;  // 0x0160, not reflected
};
