// /Script/Icarus.InstancedLevelData
// size 0x70, declared in Icarus/Source/Icarus/World/InstancedLevels/BaseLevelCaveRecorderActor.h

USTRUCT()
struct FInstancedLevelData
{
public:
    int32 SelectedSlot;  // 0x0000, not reflected
    FVector LoadedLocation;  // 0x0004, not reflected
    FString UniqueLevelName;  // 0x0010, not reflected
    FInstancedBlobSave InstancedSave;  // 0x0020, not reflected
    TArray<int,TSizedDefaultAllocator<32> > InstancedInventories;  // 0x0060, not reflected
};
