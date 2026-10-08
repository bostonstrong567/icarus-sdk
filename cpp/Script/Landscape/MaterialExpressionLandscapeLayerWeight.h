// /Script/Landscape.MaterialExpressionLandscapeLayerWeight
// Derives from: UMaterialExpression > UObject
// size 0x90, declared in Engine/Source/Runtime/Landscape/Classes/Materials/MaterialExpressionLandscapeLayerWeight.h

UCLASS()
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Base;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Layer;  // 0x0054, size 0x14
    UPROPERTY(EditAnywhere) FName ParameterName;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere) float PreviewWeight;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere) FVector ConstBase;  // 0x0074, size 0xC
    UPROPERTY() FGuid ExpressionGUID;  // 0x0080, size 0x10
};
