// /Script/AnimGraphRuntime.AnimNode_BlendListByEnum
// size 0xB0, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListByEnum.h

USTRUCT()
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
public:
    UPROPERTY() TArray<int32> EnumToPoseIndex;  // 0x0098, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 ActiveEnumValue;  // 0x00A8, size 0x1
};
