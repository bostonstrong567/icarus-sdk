// /Script/Icarus.GOAPProperty
// size 0x1C, declared in Icarus/Source/Icarus/AI/GOAPStructs.h

USTRUCT()
struct FGOAPProperty
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGOAPPropertiesRowHandle Property;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Value;  // 0x0018, size 0x1
};
