// /Script/Engine.MaterialExpressionShadingPathSwitch
// Derives from: UMaterialExpression > UObject
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionShadingPathSwitch.h

UCLASS(MinimalAPI)
class UMaterialExpressionShadingPathSwitch : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Default;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Inputs;  // 0x0054, size 0x14
};
