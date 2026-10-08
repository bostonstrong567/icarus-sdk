// /Script/Engine.MaterialExpressionSetMaterialAttributes
// Derives from: UMaterialExpression > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionSetMaterialAttributes.h

UCLASS(MinimalAPI)
class UMaterialExpressionSetMaterialAttributes : public UMaterialExpression
{
public:
    UPROPERTY() TArray<FExpressionInput> Inputs;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) TArray<FGuid> AttributeSetTypes;  // 0x0050, size 0x10
};
