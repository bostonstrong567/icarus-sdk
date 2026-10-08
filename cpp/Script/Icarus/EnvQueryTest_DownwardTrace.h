// /Script/Icarus.EnvQueryTest_DownwardTrace
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x2B0, declared in Icarus/Source/Icarus/AI/EQS/EnvQueryTest_DownwardTrace.h

UCLASS()
class UEnvQueryTest_DownwardTrace : public UEnvQueryTest
{
public:
    UPROPERTY(EditAnywhere) bool bTraceComplex;  // 0x01F8, size 0x1
    UPROPERTY(EditAnywhere) TArray<TEnumAsByte<ECollisionChannel>> CollisionChannels;  // 0x0200, size 0x10
    UPROPERTY(EditAnywhere) TArray<TSoftClassPtr<AActor>> IgnoreClasses;  // 0x0210, size 0x10
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue DownwardsTraceDistance;  // 0x0220, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue ItemHeightOffset;  // 0x0258, size 0x38
    UPROPERTY(EditAnywhere) bool bShowDebug;  // 0x0290, size 0x1
    UPROPERTY(EditAnywhere) TArray<TSoftClassPtr<AActor>> BlacklistActors;  // 0x0298, size 0x10
    UPROPERTY() TSubclassOf<UEnvQueryContext> Context;  // 0x02A8, size 0x8
};
