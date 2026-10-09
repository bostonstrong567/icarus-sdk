// /Script/Icarus.FishRarity
// size 0x10, declared in Icarus/Source/Icarus/Systems/Bestiary/BestiaryFunctionLibrary.h

USTRUCT()
struct FFishRarity
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFishDataRowHandle> Fish;  // 0x0000, size 0x10
};
