// /Script/Engine.MaterialExpressionSamplePhysicsVectorField
// Derives from: UMaterialExpression > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionSamplePhysicsField.h

UCLASS()
class UMaterialExpressionSamplePhysicsVectorField : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput WorldPosition;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere) TEnumAsByte<EFieldVectorType> FieldTarget;  // 0x0054, size 0x1
};
