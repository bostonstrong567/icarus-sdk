// /Script/Icarus.SettlementNPCSurvivalValues
// size 0x14, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementNPCSurvivalValues
{
    UPROPERTY(BlueprintReadWrite) int32 Hunger;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 Water;  // 0x0004, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 Oxygen;  // 0x0008, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 Rest;  // 0x000C, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 Mood;  // 0x0010, size 0x4
};
