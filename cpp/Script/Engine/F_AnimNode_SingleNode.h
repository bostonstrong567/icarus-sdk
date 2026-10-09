// /Script/Engine.AnimNode_SingleNode
// size 0x30, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimSingleNodeInstanceProxy.h

USTRUCT()
struct FAnimNode_SingleNode : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink SourcePose;  // 0x0010, size 0x10
    FName ActiveMontageSlot;  // 0x0020, not reflected
private:
    FAnimSingleNodeInstanceProxy * Proxy;  // 0x0028, not reflected
};
