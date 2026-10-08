// /Script/Engine.CurveTrack
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimSequence.h

USTRUCT()
struct FCurveTrack
{
    UPROPERTY() FName CurveName;  // 0x0000, size 0x8
    UPROPERTY() TArray<float> CurveWeights;  // 0x0008, size 0x10
};
