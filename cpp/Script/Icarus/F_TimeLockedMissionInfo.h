// /Script/Icarus.TimeLockedMissionInfo
// size 0x1C, declared in Icarus/Source/Icarus/Systems/IcarusGameStateSurvival.h

USTRUCT()
struct FTimeLockedMissionInfo
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle Mission;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LockedUntilProspectTime;  // 0x0018, size 0x4
};
