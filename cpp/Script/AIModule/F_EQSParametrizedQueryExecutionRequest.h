// /Script/AIModule.EQSParametrizedQueryExecutionRequest
// size 0x48, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h

USTRUCT()
struct FEQSParametrizedQueryExecutionRequest
{
public:
    UPROPERTY(EditAnywhere) UEnvQuery* QueryTemplate;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) TArray<FAIDynamicParam> QueryConfig;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) FBlackboardKeySelector EQSQueryBlackboardKey;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere) TEnumAsByte<EEnvQueryRunMode> RunMode;  // 0x0040, size 0x1
    uint32 : 1 bInitialized;  // 0x0044, not reflected
    UPROPERTY(EditAnywhere) uint8 bUseBBKeyForQueryTemplate : 1;  // 0x0044, mask 0x01
};
