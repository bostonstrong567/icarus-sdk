// /Script/Engine.MaterialExpressionCustom
// Derives from: UMaterialExpression > UObject
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionCustom.h

UCLASS(MinimalAPI)
class UMaterialExpressionCustom : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere) FString Code;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) TEnumAsByte<ECustomMaterialOutputType> OutputType;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere) FString Description;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere) TArray<FCustomInput> Inputs;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere) TArray<FCustomOutput> AdditionalOutputs;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere) TArray<FCustomDefine> AdditionalDefines;  // 0x0088, size 0x10
    UPROPERTY(EditAnywhere) TArray<FString> IncludeFilePaths;  // 0x0098, size 0x10
};
