// /Script/Engine.MaterialExpressionFunctionInput
// Derives from: UMaterialExpression > UObject
// size 0xC0, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h

UCLASS(MinimalAPI)
class UMaterialExpressionFunctionInput : public UMaterialExpression
{
public:
    UPROPERTY() FExpressionInput Preview;  // 0x0040, size 0x14
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName InputName;  // 0x0054, size 0x8
    UPROPERTY(EditAnywhere) FString Description;  // 0x0060, size 0x10
    UPROPERTY() FGuid Id;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EFunctionInputType> InputType;  // 0x0080, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector4 PreviewValue;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUsePreviewValueAsDefault : 1;  // 0x00A0, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SortPriority;  // 0x00A4, size 0x4
    UPROPERTY(Transient) uint8 bCompilingFunctionPreview : 1;  // 0x00A8, mask 0x01
    FExpressionInput EffectivePreviewDuringCompile;  // 0x00AC, not reflected
};
