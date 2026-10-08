// /Script/Engine.MaterialExpressionShaderStageSwitch
// Derives from: UMaterialExpression > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionShaderStageSwitch.h

UCLASS(MinimalAPI)
class UMaterialExpressionShaderStageSwitch : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput PixelShader;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput VertexShader;  // 0x0054, size 0x14
};
