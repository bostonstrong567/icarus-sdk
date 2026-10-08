// /Script/Engine.AnimNode_Root
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_Root.h

USTRUCT()
struct FAnimNode_Root : public FAnimNode_Base
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink Result;  // 0x0010, size 0x10
    UPROPERTY() FName Name;  // 0x0020, size 0x8
    UPROPERTY() FName Group;  // 0x0028, size 0x8
};
