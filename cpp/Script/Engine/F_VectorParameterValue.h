// /Script/Engine.VectorParameterValue
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialInstance.h

USTRUCT()
struct FVectorParameterValue
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMaterialParameterInfo ParameterInfo;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor ParameterValue;  // 0x0010, size 0x10
    UPROPERTY() FGuid ExpressionGUID;  // 0x0020, size 0x10
};
