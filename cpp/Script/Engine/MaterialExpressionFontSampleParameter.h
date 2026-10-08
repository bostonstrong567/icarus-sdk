// /Script/Engine.MaterialExpressionFontSampleParameter
// Derives from: UMaterialExpressionFontSample > UMaterialExpression > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionFontSampleParameter.h

UCLASS(MinimalAPI)
class UMaterialExpressionFontSampleParameter : public UMaterialExpressionFontSample
{
public:
    UPROPERTY(EditAnywhere) FName ParameterName;  // 0x0050, size 0x8
    UPROPERTY() FGuid ExpressionGUID;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere) FName Group;  // 0x0068, size 0x8

    // Virtual functions that start here:
    //   SetDefaultFont
};
