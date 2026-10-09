// /Script/Icarus.FishCategory
// size 0x50, declared in Icarus/Source/Icarus/Systems/Bestiary/BestiaryFunctionLibrary.h

USTRUCT()
struct FFishCategory
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EFishRarity, FFishRarity> Rarity;  // 0x0000, size 0x50
};
