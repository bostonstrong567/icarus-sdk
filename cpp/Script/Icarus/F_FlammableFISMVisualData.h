// /Script/Icarus.FlammableFISMVisualData
// size 0xC, declared in Icarus/Source/Icarus/Traits/FlammableFISM.h

USTRUCT()
struct FFlammableFISMVisualData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MainFireSpread;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MainFireTemperature;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EffectsMeshFireSpread;  // 0x0008, size 0x4
};
