// /Script/Icarus.MissionStatus
// size 0x20, declared in Icarus/Source/Icarus/IcarusGameModeSurvival.h

USTRUCT()
struct FMissionStatus
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FFactionMissionsRowHandle Mission;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EMissionState MissionState;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MissionEndTime;  // 0x001C, size 0x4
};
