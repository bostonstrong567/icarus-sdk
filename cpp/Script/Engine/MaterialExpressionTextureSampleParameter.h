// /Script/Engine.MaterialExpressionTextureSampleParameter
// Derives from: UMaterialExpressionTextureSample > UMaterialExpressionTextureBase > UMaterialExpression > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureSampleParameter.h

UCLASS(Abstract)
class UMaterialExpressionTextureSampleParameter : public UMaterialExpressionTextureSample
{
public:
    UPROPERTY(EditAnywhere) FName ParameterName;  // 0x0060, size 0x8
    UPROPERTY() FGuid ExpressionGUID;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere) FName Group;  // 0x0078, size 0x8
};
