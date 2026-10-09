// /Script/Icarus.AISpawnZones
// size 0xA0, declared in Icarus/Source/Icarus/AI/AISpawnZones.h

USTRUCT()
struct FAISpawnZones : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBiomeAISpawnData Creatures;  // 0x0018, size 0x78
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinLevel;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MedianLevel;  // 0x0094, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxLevel;  // 0x0098, size 0x4
};
