// /Script/Engine.FunctionExpressionOutput
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h

USTRUCT()
struct FFunctionExpressionOutput
{
public:
    UPROPERTY(Transient) UMaterialExpressionFunctionOutput* ExpressionOutput;  // 0x0000, size 0x8
    UPROPERTY() FGuid ExpressionOutputId;  // 0x0008, size 0x10
    UPROPERTY() FExpressionOutput Output;  // 0x0018, size 0x8
};
