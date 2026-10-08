// /Script/Icarus.InstancedLevelStreamingBinding
// Derives from: ULevelStreamingBinding > UObject
// size 0x60, declared in Icarus/Source/Icarus/TerrainAnchorSubsystem.h

UCLASS()
class UInstancedLevelStreamingBinding : public ULevelStreamingBinding
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FString UniqueName;  // 0x0050, private

    UFUNCTION() void OnDynamicStreamingLevelUnloaded();

    // Virtual functions that start here:
    //   InitInstanced, OnDynamicStreamingLevelUnloaded
};
