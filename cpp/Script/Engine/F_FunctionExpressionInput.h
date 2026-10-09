// /Script/Engine.FunctionExpressionInput
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h

USTRUCT()
struct FFunctionExpressionInput
{
public:
    UPROPERTY(Transient) UMaterialExpressionFunctionInput* ExpressionInput;  // 0x0000, size 0x8
    UPROPERTY() FGuid ExpressionInputId;  // 0x0008, size 0x10
    UPROPERTY() FExpressionInput Input;  // 0x0018, size 0x14
};
