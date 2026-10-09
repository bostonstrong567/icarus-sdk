// /Script/Icarus.FlammableTargetExtinguish
// size 0x38, declared in Icarus/Source/Icarus/Systems/Disaster/FlammableTarget.h

USTRUCT()
struct FFlammableTargetExtinguish : public FFlammableTarget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExtinguishRampTime;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExtinguishTime;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bStopCombustionImmediately;  // 0x0030, size 0x1
};
