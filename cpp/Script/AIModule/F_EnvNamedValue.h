// /Script/AIModule.EnvNamedValue
// size 0x10, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h

USTRUCT()
struct FEnvNamedValue
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ParamName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAIParamType ParamType;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Value;  // 0x000C, size 0x4
};
