// /Script/Engine.MaterialExpressionTime
// Derives from: UMaterialExpression > UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTime.h

UCLASS(MinimalAPI)
class UMaterialExpressionTime : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) uint8 bIgnorePause : 1;  // 0x0040, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOverride_Period : 1;  // 0x0040, mask 0x02
    UPROPERTY(EditAnywhere) float Period;  // 0x0044, size 0x4
};
