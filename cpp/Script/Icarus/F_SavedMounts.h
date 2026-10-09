// /Script/Icarus.SavedMounts
// size 0x10, declared in Icarus/Source/Icarus/Subsystems/Offline/OfflineProfileIcarus.h

USTRUCT()
struct FSavedMounts
{
public:
    UPROPERTY() TArray<FMountSaveData> SavedMounts;  // 0x0000, size 0x10
};
