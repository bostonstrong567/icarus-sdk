// /Script/Icarus.FishTypeTracking
// size 0x28, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/FishingFunctionLibrary.generated.h

USTRUCT()
struct FFishTypeTracking
{
public:
    UPROPERTY(BlueprintReadWrite) FFishDataRowHandle FishRow;  // 0x0000, size 0x18
    UPROPERTY(BlueprintReadWrite) int32 MaxQuality;  // 0x0018, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 MaxWeight;  // 0x001C, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 MaxLength;  // 0x0020, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 CaughtCount;  // 0x0024, size 0x4
};
