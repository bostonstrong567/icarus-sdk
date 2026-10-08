// /Game/BP/Systems/Disaster/FBiomeLightning.FBiomeLightning
// size 0xC

USTRUCT()
struct FBiomeLightning
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NextStrikeTime;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinInterval;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxInterval;  // 0x0008, size 0x4
};
