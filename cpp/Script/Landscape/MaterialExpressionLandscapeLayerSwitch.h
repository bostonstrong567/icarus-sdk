// /Script/Landscape.MaterialExpressionLandscapeLayerSwitch
// Derives from: UMaterialExpression > UObject
// size 0x88, declared in Engine/Source/Runtime/Landscape/Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h

UCLASS()
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput LayerUsed;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput LayerNotUsed;  // 0x0054, size 0x14
    UPROPERTY(EditAnywhere) FName ParameterName;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere) uint8 PreviewUsed : 1;  // 0x0070, mask 0x01
    UPROPERTY() FGuid ExpressionGUID;  // 0x0074, size 0x10
};
