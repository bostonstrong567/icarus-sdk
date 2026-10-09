// /Script/Icarus.StasisBagData
// size 0x58, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/StasisBagLibrary.generated.h

USTRUCT()
struct FStasisBagData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AActor> ActorInput;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle ItemOutput;  // 0x0040, size 0x18
};
