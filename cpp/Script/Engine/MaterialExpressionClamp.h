// /Script/Engine.MaterialExpressionClamp
// Derives from: UMaterialExpression > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionClamp.h

UCLASS(MinimalAPI)
class UMaterialExpressionClamp : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Input;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Min;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput Max;  // 0x0068, size 0x14
    UPROPERTY(EditAnywhere) TEnumAsByte<EClampMode> ClampMode;  // 0x007C, size 0x1
    UPROPERTY(EditAnywhere) float MinDefault;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) float MaxDefault;  // 0x0084, size 0x4
};
