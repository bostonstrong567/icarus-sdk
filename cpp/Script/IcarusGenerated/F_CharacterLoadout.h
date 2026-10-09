// /Script/IcarusGenerated.CharacterLoadout
// size 0x138, declared in Icarus/Source/IcarusGenerated/Public/Struct/CharacterLoadout.h

USTRUCT()
struct FCharacterLoadout
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMetaItem EnviroSuit;  // 0x0000, size 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDropship Dropship;  // 0x0040, size 0xE0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaItem> MetaItems;  // 0x0120, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Valid;  // 0x0130, size 0x1
};
