// /Script/Icarus.StatDisplayCalculation
// size 0x8, declared in Icarus/Source/Icarus/Stats/IcarusStat.h

USTRUCT()
struct FStatDisplayCalculation
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EStatDisplayOperation Operation;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Value;  // 0x0004, size 0x4
};
