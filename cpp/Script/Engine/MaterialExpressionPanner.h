// /Script/Engine.MaterialExpressionPanner
// Derives from: UMaterialExpression > UObject
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionPanner.h

UCLASS(MinimalAPI)
class UMaterialExpressionPanner : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Coordinate;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput Time;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput Speed;  // 0x0068, size 0x14
    UPROPERTY(EditAnywhere) float SpeedX;  // 0x007C, size 0x4
    UPROPERTY(EditAnywhere) float SpeedY;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) uint32 ConstCoordinate;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere) bool bFractionalPart;  // 0x0088, size 0x1
};
