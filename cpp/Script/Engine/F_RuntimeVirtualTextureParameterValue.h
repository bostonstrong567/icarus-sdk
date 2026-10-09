// /Script/Engine.RuntimeVirtualTextureParameterValue
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialInstance.h

USTRUCT()
struct FRuntimeVirtualTextureParameterValue
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMaterialParameterInfo ParameterInfo;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) URuntimeVirtualTexture* ParameterValue;  // 0x0010, size 0x8
    UPROPERTY() FGuid ExpressionGUID;  // 0x0018, size 0x10
};
