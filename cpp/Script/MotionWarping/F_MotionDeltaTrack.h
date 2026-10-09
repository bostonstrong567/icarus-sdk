// /Script/MotionWarping.MotionDeltaTrack
// size 0x48, declared in Engine/Plugins/Animation/MotionWarping/Source/MotionWarping/Public/RootMotionModifier_AdjustmentBlendWarp.h

USTRUCT()
struct FMotionDeltaTrack
{
public:
    UPROPERTY() TArray<FTransform> BoneTransformTrack;  // 0x0000, size 0x10
    UPROPERTY() TArray<FVector> DeltaTranslationTrack;  // 0x0010, size 0x10
    UPROPERTY() TArray<FRotator> DeltaRotationTrack;  // 0x0020, size 0x10
    UPROPERTY() FVector TotalTranslation;  // 0x0030, size 0xC
    UPROPERTY() FRotator TotalRotation;  // 0x003C, size 0xC
};
