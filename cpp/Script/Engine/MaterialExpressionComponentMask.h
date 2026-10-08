// /Script/Engine.MaterialExpressionComponentMask
// Derives from: UMaterialExpression > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionComponentMask.h

UCLASS(MinimalAPI)
class UMaterialExpressionComponentMask : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Input;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere) uint8 R : 1;  // 0x0054, mask 0x01
    UPROPERTY(EditAnywhere) uint8 G : 1;  // 0x0054, mask 0x02
    UPROPERTY(EditAnywhere) uint8 B : 1;  // 0x0054, mask 0x04
    UPROPERTY(EditAnywhere) uint8 A : 1;  // 0x0054, mask 0x08
};
