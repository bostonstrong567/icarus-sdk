// /Script/Engine.MaterialExpressionShadowReplace
// Derives from: UMaterialExpression > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionShadowReplace.h

UCLASS()
class UMaterialExpressionShadowReplace : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Default;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Shadow;  // 0x0054, size 0x14
};
