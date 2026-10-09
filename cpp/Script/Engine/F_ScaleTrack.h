// /Script/Engine.ScaleTrack
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimSequence.h

USTRUCT()
struct FScaleTrack
{
public:
    UPROPERTY() TArray<FVector> ScaleKeys;  // 0x0000, size 0x10
    UPROPERTY() TArray<float> Times;  // 0x0010, size 0x10
};
