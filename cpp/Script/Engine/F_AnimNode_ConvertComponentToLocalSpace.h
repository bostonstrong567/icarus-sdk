// /Script/Engine.AnimNode_ConvertComponentToLocalSpace
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNodeSpaceConversions.h

USTRUCT()
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FComponentSpacePoseLink ComponentPose;  // 0x0010, size 0x10
};
