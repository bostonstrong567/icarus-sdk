// /Script/Engine.ExpressionInput
// size 0x14, declared in Engine/Source/Runtime/Engine/Public/MaterialExpressionIO.h

USTRUCT()
struct FExpressionInput
{
public:
    UPROPERTY() int32 OutputIndex;  // 0x0000, size 0x4
    UPROPERTY() FName InputName;  // 0x0004, size 0x8
    UPROPERTY() FName ExpressionName;  // 0x000C, size 0x8
};
