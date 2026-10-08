// /Script/Engine.MaterialExpressionWorldPosition
// Derives from: UMaterialExpression > UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionWorldPosition.h

UCLASS(MinimalAPI)
class UMaterialExpressionWorldPosition : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EWorldPositionIncludedOffsets> WorldPositionShaderOffset;  // 0x0040, size 0x1
};
