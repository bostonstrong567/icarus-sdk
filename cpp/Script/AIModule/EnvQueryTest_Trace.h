// /Script/AIModule.EnvQueryTest_Trace
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x2D8, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Trace.h

UCLASS(MinimalAPI)
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
    UPROPERTY(EditAnywhere) FEnvTraceData TraceData;  // 0x01F8, size 0x30
    UPROPERTY(EditAnywhere) FAIDataProviderBoolValue TraceFromContext;  // 0x0228, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue ItemHeightOffset;  // 0x0260, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue ContextHeightOffset;  // 0x0298, size 0x38
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> Context;  // 0x02D0, size 0x8
};
