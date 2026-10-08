// /Script/Engine.MaterialExpressionShadingModel
// Derives from: UMaterialExpression > UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionShadingModel.h

UCLASS(MinimalAPI)
class UMaterialExpressionShadingModel : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EMaterialShadingModel> ShadingModel;  // 0x0040, size 0x1
};
