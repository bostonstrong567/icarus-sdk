// /Script/AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// size 0x38, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_MakeDynamicAdditive.h

USTRUCT()
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink Base;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink Additive;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bMeshSpaceAdditive;  // 0x0030, size 0x1
};
