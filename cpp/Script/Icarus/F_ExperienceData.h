// /Script/Icarus.ExperienceData
// size 0x68, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/ExperienceComponent.generated.h

USTRUCT()
struct FExperienceData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EExperienceSource, FExperienceInfo> ExperienceEvents;  // 0x0018, size 0x50
};
