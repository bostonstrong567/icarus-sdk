// /Script/Icarus.StatCollection
// size 0x10, declared in Icarus/Source/Icarus/Stats/StatsFunctionLibrary.h

USTRUCT()
struct FStatCollection
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FIcarusStatReplicated> Stats;  // 0x0000, size 0x10
};
