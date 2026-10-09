// /Script/Engine.ScalarParameterValue
// size 0x24, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialInstance.h

USTRUCT()
struct FScalarParameterValue
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMaterialParameterInfo ParameterInfo;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ParameterValue;  // 0x0010, size 0x4
    UPROPERTY() FGuid ExpressionGUID;  // 0x0014, size 0x10
};
