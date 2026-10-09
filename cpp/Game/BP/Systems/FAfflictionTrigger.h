// /Game/BP/Systems/FAfflictionTrigger.FAfflictionTrigger
// size 0x30

USTRUCT()
struct FAfflictionTrigger
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Threshold;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EndCondition;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Triggered;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UID;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifier Modifier;  // 0x0010, size 0x20
};
