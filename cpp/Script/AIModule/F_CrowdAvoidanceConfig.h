// /Script/AIModule.CrowdAvoidanceConfig
// size 0x1C, declared in Engine/Source/Runtime/AIModule/Classes/Navigation/CrowdManager.h

USTRUCT()
struct FCrowdAvoidanceConfig
{
public:
    UPROPERTY(EditAnywhere) float VelocityBias;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float DesiredVelocityWeight;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float CurrentVelocityWeight;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float SideBiasWeight;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) float ImpactTimeWeight;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float ImpactTimeRange;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) uint8 CustomPatternIdx;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere) uint8 AdaptiveDivisions;  // 0x0019, size 0x1
    UPROPERTY(EditAnywhere) uint8 AdaptiveRings;  // 0x001A, size 0x1
    UPROPERTY(EditAnywhere) uint8 AdaptiveDepth;  // 0x001B, size 0x1
};
