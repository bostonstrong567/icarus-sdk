// /Script/Engine.MaterialExpressionMaterialProxyReplace
// Derives from: UMaterialExpression > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionMaterialProxyReplace.h

UCLASS()
class UMaterialExpressionMaterialProxyReplace : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Realtime;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput MaterialProxy;  // 0x0054, size 0x14
};
