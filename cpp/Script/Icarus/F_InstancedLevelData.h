// /Script/Icarus.InstancedLevelData
// size 0x70, declared in Icarus/Source/Icarus/World/InstancedLevels/BaseLevelCaveRecorderActor.h

USTRUCT()
struct FInstancedLevelData
{

    // Not reflected:
    int32 SelectedSlot;  // 0x0000
    FVector LoadedLocation;  // 0x0004
    FString UniqueLevelName;  // 0x0010
    FInstancedBlobSave InstancedSave;  // 0x0020
    TArray<int,TSizedDefaultAllocator<32> > InstancedInventories;  // 0x0060
};
