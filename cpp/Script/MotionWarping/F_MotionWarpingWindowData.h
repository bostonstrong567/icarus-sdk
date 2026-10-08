// /Script/MotionWarping.MotionWarpingWindowData
// size 0x10, declared in Engine/Plugins/Animation/MotionWarping/Source/MotionWarping/Public/MotionWarpingComponent.h

USTRUCT()
struct FMotionWarpingWindowData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimNotifyState_MotionWarping* AnimNotify;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StartTime;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EndTime;  // 0x000C, size 0x4
};
