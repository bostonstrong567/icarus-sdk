// /Script/Engine.AnimNode_ConvertLocalToComponentSpace
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNodeSpaceConversions.h

USTRUCT()
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink LocalPose;  // 0x0010, size 0x10
};
