// /Script/Engine.PoseData
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Animation/PoseAsset.h

USTRUCT()
struct FPoseData
{
    UPROPERTY() TArray<FTransform> LocalSpacePose;  // 0x0000, size 0x10
    UPROPERTY() TMap<int32, int32> TrackToBufferIndex;  // 0x0010, size 0x50
    UPROPERTY() TArray<float> CurveData;  // 0x0060, size 0x10
};
