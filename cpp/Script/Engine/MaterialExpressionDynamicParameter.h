// /Script/Engine.MaterialExpressionDynamicParameter
// Derives from: UMaterialExpression > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionDynamicParameter.h

UCLASS(MinimalAPI)
class UMaterialExpressionDynamicParameter : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) TArray<FString> ParamNames;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) FLinearColor DefaultValue;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere) uint32 ParameterIndex;  // 0x0060, size 0x4
};
