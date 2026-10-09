// /Script/Icarus.BestiaryBiome
// size 0x10, declared in Icarus/Source/Icarus/Systems/Bestiary/BestiaryFunctionLibrary.h

USTRUCT()
struct FBestiaryBiome
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBestiaryDataRowHandle> Creatures;  // 0x0000, size 0x10
};
