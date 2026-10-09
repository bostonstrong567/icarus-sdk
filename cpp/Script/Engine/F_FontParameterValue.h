// /Script/Engine.FontParameterValue
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialInstance.h

USTRUCT()
struct FFontParameterValue
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMaterialParameterInfo ParameterInfo;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFont* FontValue;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FontPage;  // 0x0018, size 0x4
    UPROPERTY() FGuid ExpressionGUID;  // 0x001C, size 0x10
};
