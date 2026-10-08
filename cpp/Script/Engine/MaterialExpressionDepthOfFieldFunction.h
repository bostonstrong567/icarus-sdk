// /Script/Engine.MaterialExpressionDepthOfFieldFunction
// Derives from: UMaterialExpression > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionDepthOfFieldFunction.h

UCLASS()
class UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EDepthOfFieldFunctionValue> FunctionValue;  // 0x0040, size 0x1
    UPROPERTY() FExpressionInput Depth;  // 0x0044, size 0x14
};
