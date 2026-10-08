// /Script/Icarus.EnvQueryTest_AITrace
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x2F8, declared in Icarus/Source/Icarus/AI/EQS/EnvQueryTest_AITrace.h

UCLASS(MinimalAPI)
class UEnvQueryTest_AITrace : public UEnvQueryTest
{
public:
    UPROPERTY(EditAnywhere) FAIDataProviderBoolValue TraceFromContext;  // 0x01F8, size 0x38
    UPROPERTY(EditAnywhere) bool UseComplex;  // 0x0230, size 0x1
    UPROPERTY(EditAnywhere) bool bIgnoreAllAITargetable;  // 0x0231, size 0x1
    UPROPERTY(EditAnywhere) TArray<TSoftClassPtr<AActor>> IgnoreClasses;  // 0x0238, size 0x10
    UPROPERTY(EditAnywhere) float MaxTraceDistance;  // 0x0248, size 0x4
    UPROPERTY(EditAnywhere) float MinTraceDistance;  // 0x024C, size 0x4
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue ItemHeightOffset;  // 0x0250, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue ContextHeightOffset;  // 0x0288, size 0x38
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> Context;  // 0x02C0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FEnvTraceData TraceData;  // 0x02C8, private
};
