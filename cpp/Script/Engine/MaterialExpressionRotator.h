// /Script/Engine.MaterialExpressionRotator
// Derives from: UMaterialExpression > UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionRotator.h

UCLASS()
class UMaterialExpressionRotator : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Coordinate;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Time;  // 0x0054, size 0x14
    UPROPERTY(EditAnywhere) float CenterX;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere) float CenterY;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere) float Speed;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere) uint32 ConstCoordinate;  // 0x0074, size 0x4
};
