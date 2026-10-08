// /Script/Engine.MaterialExpressionFmod
// Derives from: UMaterialExpression > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionFmod.h

UCLASS(MinimalAPI)
class UMaterialExpressionFmod : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput A;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput B;  // 0x0054, size 0x14
};
