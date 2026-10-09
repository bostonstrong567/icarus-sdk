// /Game/BP/AI/Bosses/Data/AdditionalAddsBTTaskConfig.AdditionalAddsBTTaskConfig
// size 0x20

USTRUCT()
struct AdditionalAddsBTTaskConfig
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BaseMaxNumberNearbyAdds;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ExtraMaxAddsPerConnectedPlayer;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinNumberAddsPerExecution;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D MaxNewAddsPerExecutionPerPlayer;  // 0x000C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D SpawnedAddsLevel;  // 0x0014, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxNumberNearbyAddsCap;  // 0x001C, size 0x4
};
