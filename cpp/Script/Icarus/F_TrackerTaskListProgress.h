// /Script/Icarus.TrackerTaskListProgress
// size 0x50, declared in Icarus/Source/Icarus/Systems/PlayerTracker/PlayerTrackerListener.h

USTRUCT()
struct FTrackerTaskListProgress
{
    UPROPERTY(SaveGame, BlueprintReadOnly) TSet<FName> CompletedTasks;  // 0x0000, size 0x50
};
