// /Script/Engine.MaterialExpressionReflectionVectorWS
// Derives from: UMaterialExpression > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionReflectionVectorWS.h

UCLASS(MinimalAPI)
class UMaterialExpressionReflectionVectorWS : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput CustomWorldNormal;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere) uint8 bNormalizeCustomWorldNormal : 1;  // 0x0054, mask 0x01
};
