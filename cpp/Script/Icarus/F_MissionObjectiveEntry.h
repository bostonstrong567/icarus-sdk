// /Script/Icarus.MissionObjectiveEntry
// size 0x1C, declared in Icarus/Source/Icarus/Systems/FactionMissions/FactionMission.h

USTRUCT()
struct FMissionObjectiveEntry
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FQuestsRowHandle QuestRow;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Depth;  // 0x0018, size 0x4
};
