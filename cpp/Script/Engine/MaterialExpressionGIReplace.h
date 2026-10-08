// /Script/Engine.MaterialExpressionGIReplace
// Derives from: UMaterialExpression > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionGIReplace.h

UCLASS()
class UMaterialExpressionGIReplace : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Default;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput StaticIndirect;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput DynamicIndirect;  // 0x0068, size 0x14
};
