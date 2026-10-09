// /Script/Engine.StaticParameterBase
// size 0x24, declared in Engine/Source/Runtime/Engine/Public/StaticParameterSet.h

USTRUCT()
struct FStaticParameterBase
{
public:
    UPROPERTY() FMaterialParameterInfo ParameterInfo;  // 0x0000, size 0x10
    UPROPERTY() bool bOverride;  // 0x0010, size 0x1
    UPROPERTY() FGuid ExpressionGUID;  // 0x0014, size 0x10
};
