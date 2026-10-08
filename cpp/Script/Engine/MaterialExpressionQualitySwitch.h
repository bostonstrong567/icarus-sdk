// /Script/Engine.MaterialExpressionQualitySwitch
// Derives from: UMaterialExpression > UObject
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionQualitySwitch.h

UCLASS(MinimalAPI)
class UMaterialExpressionQualitySwitch : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Default;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Inputs;  // 0x0054, size 0x14
};
