// /Script/Icarus.TalentModelView
// size 0x48, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/TalentModelViewsLibrary.generated.h

USTRUCT()
struct FTalentModelView : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentViewsRowHandle ViewData;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentModelsRowHandle ModelData;  // 0x0030, size 0x18
};
