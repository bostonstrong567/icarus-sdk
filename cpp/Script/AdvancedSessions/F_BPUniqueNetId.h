// /Script/AdvancedSessions.BPUniqueNetId
// size 0x20, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/BlueprintDataDefinitions.h

USTRUCT()
struct FBPUniqueNetId
{

    // Not reflected:
    bool bUseDirectPointer;  // 0x0000
    TSharedPtr<FUniqueNetId const ,0> UniqueNetId;  // 0x0008
    const FUniqueNetId * UniqueNetIdPtr;  // 0x0018
};
