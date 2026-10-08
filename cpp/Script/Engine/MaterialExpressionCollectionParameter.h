// /Script/Engine.MaterialExpressionCollectionParameter
// Derives from: UMaterialExpression > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionCollectionParameter.h

UCLASS(MinimalAPI)
class UMaterialExpressionCollectionParameter : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) UMaterialParameterCollection* Collection;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) FName ParameterName;  // 0x0048, size 0x8
    UPROPERTY() FGuid ParameterId;  // 0x0050, size 0x10
};
