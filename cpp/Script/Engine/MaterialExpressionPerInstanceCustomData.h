// /Script/Engine.MaterialExpressionPerInstanceCustomData
// Derives from: UMaterialExpression > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionPerInstanceCustomData.h

UCLASS()
class UMaterialExpressionPerInstanceCustomData : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput DefaultValue;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere) float ConstDefaultValue;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere) uint32 DataIndex;  // 0x0058, size 0x4
};
