// /Script/Icarus.TalentModel
// size 0x40, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/TalentModelsLibrary.generated.h

USTRUCT()
struct FTalentModel : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UTalentModelInterface> ModelClass;  // 0x0018, size 0x28
};
