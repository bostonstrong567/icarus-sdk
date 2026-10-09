// /Script/AIModule.CrowdManager
// Derives from: UCrowdManagerBase > UObject
// size 0xF0, declared in Engine/Source/Runtime/AIModule/Classes/Navigation/CrowdManager.h

UCLASS(Transient, Config=Engine)
class UCrowdManager : public UCrowdManagerBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Transient) ANavigationData* MyNavData;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, Config) TArray<FCrowdAvoidanceConfig> AvoidanceConfig;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FCrowdAvoidanceSamplingPattern> SamplingPatterns;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, Config) int32 MaxAgents;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, Config) float MaxAgentRadius;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 MaxAvoidedAgents;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 MaxAvoidedWalls;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, Config) float NavmeshCheckInterval;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, Config) float PathOptimizationInterval;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, Config) float SeparationDirClamp;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere, Config) float PathOffsetRadiusMultiplier;  // 0x006C, size 0x4
    uint32 : 1 bAllowPathReplan;  // 0x0070, not reflected
    uint32 : 1 bEarlyReachTestOptimization;  // 0x0070, not reflected
    uint32 : 1 bPruneStartedOffmeshConnections;  // 0x0070, not reflected
    uint32 : 1 bSingleAreaVisibilityOptimization;  // 0x0070, not reflected
    UPROPERTY(EditAnywhere, Config) uint8 bResolveCollisions : 1;  // 0x0070, mask 0x10
    TMap<ICrowdAgentInterface *,FCrowdAgentData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ICrowdAgentInterface *,FCrowdAgentData,0> > ActiveAgents;  // 0x0078, not reflected
    TArray<unsigned char,TSizedDefaultAllocator<32> > AgentFlags;  // 0x00C8, not reflected
    dtCrowd * DetourCrowd;  // 0x00D8, not reflected
    dtCrowdAgentDebugInfo * DetourAgentDebug;  // 0x00E0, not reflected
    dtObstacleAvoidanceDebugData * DetourAvoidanceDebug;  // 0x00E8, not reflected

    // Virtual functions that start here:
    //   ApplyVelocity, IsSuitableNavData, PostMovePointUpdate, PostProximityUpdate, UpdateAvoidanceConfig
    //   UpdateNavData
};
