// /Script/Icarus.TalentTree
// size 0xB8, declared in Icarus/Source/Icarus/Talents/Model/Data/TalentTree.h

USTRUCT()
struct FTalentTree : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> BackgroundTexture;  // 0x0030, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0058, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentArchetypesRowHandle Archetype;  // 0x0080, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentRanksRowHandle FirstRank;  // 0x0098, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredLevel;  // 0x00B0, size 0x4
};
