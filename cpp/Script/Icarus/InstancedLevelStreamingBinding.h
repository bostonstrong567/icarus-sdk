// /Script/Icarus.InstancedLevelStreamingBinding
// Derives from: ULevelStreamingBinding > UObject
// size 0x60, declared in Icarus/Source/Icarus/TerrainAnchorSubsystem.h

UCLASS()
class UInstancedLevelStreamingBinding : public ULevelStreamingBinding
{
private:
    FString UniqueName;  // 0x0050, not reflected
public:
    UFUNCTION() void OnDynamicStreamingLevelUnloaded();

    // Virtual functions that start here:
    //   InitInstanced, OnDynamicStreamingLevelUnloaded
};
