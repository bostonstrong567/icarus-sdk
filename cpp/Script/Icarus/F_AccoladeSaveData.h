// /Script/Icarus.AccoladeSaveData
// size 0xB0, declared in Icarus/Source/Icarus/Subsystems/LocalPlayer/AccoladeSaveData.h

USTRUCT()
struct FAccoladeSaveData
{
public:
    UPROPERTY(SaveGame) TArray<FAccoladeCompletedState> CompletedAccolades;  // 0x0000, size 0x10
    UPROPERTY(SaveGame) TMap<FPlayerTrackersRowHandle, int32> PlayerTrackers;  // 0x0010, size 0x50
    UPROPERTY(SaveGame) TMap<FPlayerTrackersRowHandle, FTrackerTaskListProgress> PlayerTaskListTrackers;  // 0x0060, size 0x50
};
