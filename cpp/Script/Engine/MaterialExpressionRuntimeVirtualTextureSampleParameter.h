// /Script/Engine.MaterialExpressionRuntimeVirtualTextureSampleParameter
// Derives from: UMaterialExpressionRuntimeVirtualTextureSample > UMaterialExpression > UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionRuntimeVirtualTextureSampleParameter.h

UCLASS(MinimalAPI)
class UMaterialExpressionRuntimeVirtualTextureSampleParameter : public UMaterialExpressionRuntimeVirtualTextureSample
{
public:
    UPROPERTY(EditAnywhere) FName ParameterName;  // 0x0090, size 0x8
    UPROPERTY() FGuid ExpressionGUID;  // 0x0098, size 0x10
    UPROPERTY(EditAnywhere) FName Group;  // 0x00A8, size 0x8
};
