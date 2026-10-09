// /Script/MotionWarping.MotionWarpingTarget
// size 0x34, declared in Engine/Plugins/Animation/MotionWarping/Source/MotionWarping/Public/RootMotionModifier.h

USTRUCT()
struct FMotionWarpingTarget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0008, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Rotation;  // 0x0014, size 0xC
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) TWeakObjectPtr<USceneComponent> Component;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName BoneName;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bFollowComponent;  // 0x0030, size 0x1
};
