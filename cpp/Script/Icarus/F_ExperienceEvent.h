// /Script/Icarus.ExperienceEvent
// size 0x38, declared in Icarus/Source/Icarus/Traits/Behaviours/Experience/ExperienceEvent.h

USTRUCT()
struct FExperienceEvent : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText EventDescription;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SharedExperience;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ExperienceGranted;  // 0x0034, size 0x4
};
