// /Script/Engine.MaterialExpressionAppendVector
// Derives from: UMaterialExpression > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionAppendVector.h

UCLASS(MinimalAPI)
class UMaterialExpressionAppendVector : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput A;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput B;  // 0x0054, size 0x14
};
