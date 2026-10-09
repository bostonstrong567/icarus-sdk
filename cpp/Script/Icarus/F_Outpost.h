// /Script/Icarus.Outpost
// size 0x70, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/OutpostsLibrary.generated.h

USTRUCT()
struct FOutpost : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectListRowHandle ProspectListRowHandle;  // 0x0040, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentsRowHandle RequiredMission;  // 0x0058, size 0x18
};
