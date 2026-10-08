// /Script/Icarus.TalentRank
// size 0x78, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/TalentRanksLibrary.generated.h

USTRUCT()
struct FTalentRank : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0030, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Investment;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentRanksRowHandle NextRank;  // 0x005C, size 0x18
};
