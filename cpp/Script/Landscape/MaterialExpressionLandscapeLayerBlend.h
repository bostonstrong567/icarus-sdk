// /Script/Landscape.MaterialExpressionLandscapeLayerBlend
// Derives from: UMaterialExpression > UObject
// size 0x60, declared in Engine/Source/Runtime/Landscape/Classes/Materials/MaterialExpressionLandscapeLayerBlend.h

UCLASS()
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) TArray<FLayerBlendInput> Layers;  // 0x0040, size 0x10
    UPROPERTY() FGuid ExpressionGUID;  // 0x0050, size 0x10

    // Virtual functions that start here:
    //   GetAllParameterInfo
};
