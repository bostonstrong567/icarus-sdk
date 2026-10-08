// /Script/AIModule.CrowdAvoidanceSamplingPattern
// size 0x20, declared in Engine/Source/Runtime/AIModule/Classes/Navigation/CrowdManager.h

USTRUCT()
struct FCrowdAvoidanceSamplingPattern
{
    UPROPERTY(EditAnywhere) TArray<float> Angles;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) TArray<float> Radii;  // 0x0010, size 0x10
};
