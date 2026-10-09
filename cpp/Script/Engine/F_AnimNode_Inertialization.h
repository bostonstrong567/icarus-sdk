// /Script/Engine.AnimNode_Inertialization
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_Inertialization.h

USTRUCT()
struct FAnimNode_Inertialization : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink Source;  // 0x0010, size 0x10
private:
    TArray<FInertializationPose,TSizedDefaultAllocator<32> > PoseSnapshots;  // 0x0020, not reflected
    float DeltaTime;  // 0x0030, not reflected
    float RequestedDuration;  // 0x0034, not reflected
    ETeleportType TeleportType;  // 0x0038, not reflected
    EInertializationState InertializationState;  // 0x0039, not reflected
    float InertializationElapsedTime;  // 0x003C, not reflected
    float InertializationDuration;  // 0x0040, not reflected
    float InertializationDeficit;  // 0x0044, not reflected
    FInertializationPoseDiff InertializationPoseDiff;  // 0x0048, not reflected
};
