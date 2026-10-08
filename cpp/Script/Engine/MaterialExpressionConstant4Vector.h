// /Script/Engine.MaterialExpressionConstant4Vector
// Derives from: UMaterialExpression > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionConstant4Vector.h

UCLASS(MinimalAPI)
class UMaterialExpressionConstant4Vector : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Constant;  // 0x0040, size 0x10
};
