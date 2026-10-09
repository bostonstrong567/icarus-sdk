// /Script/Icarus.ProspectCompletionCondition
// size 0x1C, declared in Icarus/Source/Icarus/Systems/Prospects/ProspectRewardCondition.h

USTRUCT()
struct FProspectCompletionCondition
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMetaCurrencyRowHandle MetaCurrency;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Amount;  // 0x0018, size 0x4
};
