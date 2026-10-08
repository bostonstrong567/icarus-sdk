// /Script/Engine.AnimNode_Inertialization
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_Inertialization.h

USTRUCT()
struct FAnimNode_Inertialization : public FAnimNode_Base
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink Source;  // 0x0010, size 0x10

    // Not reflected:
    TArray<FInertializationPose,TSizedDefaultAllocator<32> > PoseSnapshots;  // 0x0020
    float DeltaTime;  // 0x0030
    float RequestedDuration;  // 0x0034
    ETeleportType TeleportType;  // 0x0038
    EInertializationState InertializationState;  // 0x0039
    float InertializationElapsedTime;  // 0x003C
    float InertializationDuration;  // 0x0040
    float InertializationDeficit;  // 0x0044
    FInertializationPoseDiff InertializationPoseDiff;  // 0x0048
};
