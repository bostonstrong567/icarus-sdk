// /Script/Engine.MaterialExpressionStaticBool
// Derives from: UMaterialExpression > UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionStaticBool.h

UCLASS(MinimalAPI)
class UMaterialExpressionStaticBool : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) uint8 Value : 1;  // 0x0040, mask 0x01
};
