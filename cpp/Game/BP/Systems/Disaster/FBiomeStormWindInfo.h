// /Game/BP/Systems/Disaster/FBiomeStormWindInfo.FBiomeStormWindInfo
// size 0x1C

USTRUCT()
struct FBiomeStormWindInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NextToppleTime;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector BiomeWindDirection;  // 0x0004, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinToppleInterval;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxToppleInterval;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WindStrengthThreshold;  // 0x0018, size 0x4
};
