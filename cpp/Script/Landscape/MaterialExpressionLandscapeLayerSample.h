// /Script/Landscape.MaterialExpressionLandscapeLayerSample
// Derives from: UMaterialExpression > UObject
// size 0x60, declared in Engine/Source/Runtime/Landscape/Classes/Materials/MaterialExpressionLandscapeLayerSample.h

UCLASS()
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) FName ParameterName;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) float PreviewWeight;  // 0x0048, size 0x4
    UPROPERTY() FGuid ExpressionGUID;  // 0x004C, size 0x10
};
