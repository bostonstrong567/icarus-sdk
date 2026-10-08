// /Script/Engine.MaterialExpressionMaterialFunctionCall
// Derives from: UMaterialExpression > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h

UCLASS(MinimalAPI)
class UMaterialExpressionMaterialFunctionCall : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) UMaterialFunctionInterface* MaterialFunction;  // 0x0040, size 0x8
    UPROPERTY(Transient) FMaterialParameterInfo FunctionParameterInfo;  // 0x0048, size 0x10
};
