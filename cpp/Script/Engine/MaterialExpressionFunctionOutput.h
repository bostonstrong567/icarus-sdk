// /Script/Engine.MaterialExpressionFunctionOutput
// Derives from: UMaterialExpression > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h

UCLASS(MinimalAPI)
class UMaterialExpressionFunctionOutput : public UMaterialExpression
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName OutputName;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) FString Description;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere) int32 SortPriority;  // 0x0058, size 0x4
    UPROPERTY() FExpressionInput A;  // 0x005C, size 0x14
    UPROPERTY() uint8 bLastPreviewed : 1;  // 0x0070, mask 0x01
    UPROPERTY() FGuid Id;  // 0x0074, size 0x10
};
