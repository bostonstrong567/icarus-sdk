// /Script/Engine.MaterialExpressionParameter
// Derives from: UMaterialExpression > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionParameter.h

UCLASS(MinimalAPI)
class UMaterialExpressionParameter : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) FName ParameterName;  // 0x0040, size 0x8
    UPROPERTY() FGuid ExpressionGUID;  // 0x0048, size 0x10

    // Virtual functions that start here:
    //   GetAllParameterInfo
};
