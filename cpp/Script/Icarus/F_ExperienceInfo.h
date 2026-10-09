// /Script/Icarus.ExperienceInfo
// size 0x1C, declared in Icarus/Source/Icarus/Traits/Behaviours/Experience/ExperienceData.h

USTRUCT()
struct FExperienceInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceEventsRowHandle ExperienceEvent;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 GainedExperience;  // 0x0018, size 0x4
};
