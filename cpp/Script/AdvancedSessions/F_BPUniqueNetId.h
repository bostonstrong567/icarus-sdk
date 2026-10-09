// /Script/AdvancedSessions.BPUniqueNetId
// size 0x20, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/BlueprintDataDefinitions.h

USTRUCT()
struct FBPUniqueNetId
{
public:
    TSharedPtr<FUniqueNetId const ,0> UniqueNetId;  // 0x0008, not reflected
    const FUniqueNetId * UniqueNetIdPtr;  // 0x0018, not reflected
private:
    bool bUseDirectPointer;  // 0x0000, not reflected
};
