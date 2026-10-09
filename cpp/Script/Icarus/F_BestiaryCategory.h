// /Script/Icarus.BestiaryCategory
// size 0x50, declared in Icarus/Source/Icarus/Systems/Bestiary/BestiaryFunctionLibrary.h

USTRUCT()
struct FBestiaryCategory
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FAtmospheresRowHandle, FBestiaryBiome> Biomes;  // 0x0000, size 0x50
};
