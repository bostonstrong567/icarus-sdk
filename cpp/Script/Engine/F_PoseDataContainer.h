// /Script/Engine.PoseDataContainer
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Animation/PoseAsset.h

USTRUCT()
struct FPoseDataContainer
{
    UPROPERTY() TArray<FSmartName> PoseNames;  // 0x0000, size 0x10
    UPROPERTY() TArray<FName> Tracks;  // 0x0010, size 0x10
    UPROPERTY(Transient) TMap<FName, int32> TrackMap;  // 0x0020, size 0x50
    UPROPERTY() TArray<FPoseData> Poses;  // 0x0070, size 0x10
    UPROPERTY() TArray<FAnimCurveBase> Curves;  // 0x0080, size 0x10
};
