// /Script/Icarus.Alteration
// size 0xE8, declared in Icarus/Source/Icarus/Alterations/Alteration.h

USTRUCT()
struct FAlteration : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0030, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0058, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> RankIcon;  // 0x0070, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> Stats;  // 0x0098, size 0x50
};
