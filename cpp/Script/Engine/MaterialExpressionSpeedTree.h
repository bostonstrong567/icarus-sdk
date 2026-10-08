// /Script/Engine.MaterialExpressionSpeedTree
// Derives from: UMaterialExpression > UObject
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionSpeedTree.h

UCLASS(MinimalAPI)
class UMaterialExpressionSpeedTree : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput GeometryInput;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput WindInput;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput LODInput;  // 0x0068, size 0x14
    UPROPERTY() FExpressionInput ExtraBendWS;  // 0x007C, size 0x14
    UPROPERTY(EditAnywhere) TEnumAsByte<ESpeedTreeGeometryType> GeometryType;  // 0x0090, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ESpeedTreeWindType> WindType;  // 0x0091, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ESpeedTreeLODType> LODType;  // 0x0092, size 0x1
    UPROPERTY(EditAnywhere) float BillboardThreshold;  // 0x0094, size 0x4
    UPROPERTY(EditAnywhere) bool bAccurateWindVelocities;  // 0x0098, size 0x1
};
