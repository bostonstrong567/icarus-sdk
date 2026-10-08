// /Script/Engine.MaterialExpressionCurveAtlasRowParameter
// Derives from: UMaterialExpressionScalarParameter > UMaterialExpressionParameter > UMaterialExpression > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionCurveAtlasRowParameter.h

UCLASS(MinimalAPI)
class UMaterialExpressionCurveAtlasRowParameter : public UMaterialExpressionScalarParameter
{
public:
    UPROPERTY(EditAnywhere) UCurveLinearColor* Curve;  // 0x0060, size 0x8
    UPROPERTY(EditAnywhere) UCurveLinearColorAtlas* Atlas;  // 0x0068, size 0x8
    UPROPERTY() FExpressionInput InputTime;  // 0x0070, size 0x14
};
