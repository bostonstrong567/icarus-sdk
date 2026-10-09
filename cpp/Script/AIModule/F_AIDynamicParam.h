// /Script/AIModule.AIDynamicParam
// size 0x38, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h

USTRUCT()
struct FAIDynamicParam
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ParamName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EAIParamType ParamType;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Value;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector BBKey;  // 0x0010, size 0x28
};
