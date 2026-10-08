// /Script/Engine.MaterialExpressionGetMaterialAttributes
// Derives from: UMaterialExpression > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionGetMaterialAttributes.h

UCLASS(MinimalAPI)
class UMaterialExpressionGetMaterialAttributes : public UMaterialExpression
{
public:
    UPROPERTY() FMaterialAttributesInput MaterialAttributes;  // 0x0040, size 0x18
    UPROPERTY(EditAnywhere) TArray<FGuid> AttributeGetTypes;  // 0x0058, size 0x10
};
