// /Script/Icarus.BestiaryGroupTracking
// size 0x1C, declared in Icarus/Source/Icarus/PlayerData/PlayerBestiaryData.h

USTRUCT()
struct FBestiaryGroupTracking
{
    UPROPERTY(BlueprintReadWrite) FBestiaryDataRowHandle BestiaryGroup;  // 0x0000, size 0x18
    UPROPERTY(BlueprintReadWrite) int32 NumPoints;  // 0x0018, size 0x4
};
