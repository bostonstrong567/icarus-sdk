// /Script/Icarus.CharacterPerk
// size 0xC8, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/CharacterPerksLibrary.generated.h

USTRUCT()
struct FCharacterPerk : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Name;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Description;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Icon;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECharacterAttribute Attribute;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredAttributeLevel;  // 0x0074, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> StatsGranted;  // 0x0078, size 0x50
};
