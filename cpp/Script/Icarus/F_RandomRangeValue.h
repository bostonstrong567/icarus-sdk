// /Script/Icarus.RandomRangeValue
// size 0x8, declared in Icarus/Source/Icarus/Modifiers/ModifierStateData.h

USTRUCT()
struct FRandomRangeValue
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseValue;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Deviation;  // 0x0004, size 0x4
};
