// /Script/Icarus.IcarusGOAPProperty
// size 0x2, declared in Icarus/Source/Icarus/AI/IcarusGOAPProperty.h

USTRUCT()
struct FIcarusGOAPProperty
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty Key;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bValue;  // 0x0001, size 0x1
};
