// /Script/AnimGraphRuntime.AnimNode_BlendListByInt
// size 0xA0, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListByInt.h

USTRUCT()
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ActiveChildIndex;  // 0x0098, size 0x4
};
