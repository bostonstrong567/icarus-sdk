// /Script/MotionWarping.MotionWarpingUpdateContext
// size 0x1C, declared in Engine/Plugins/Animation/MotionWarping/Source/MotionWarping/Public/RootMotionModifier.h

USTRUCT()
struct FMotionWarpingUpdateContext
{
    UPROPERTY() TWeakObjectPtr<UAnimSequenceBase> Animation;  // 0x0000, size 0x8
    UPROPERTY() float PreviousPosition;  // 0x0008, size 0x4
    UPROPERTY() float CurrentPosition;  // 0x000C, size 0x4
    UPROPERTY() float Weight;  // 0x0010, size 0x4
    UPROPERTY() float PlayRate;  // 0x0014, size 0x4
    UPROPERTY() float DeltaSeconds;  // 0x0018, size 0x4
};
