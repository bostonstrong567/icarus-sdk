// /Script/Icarus.EnvQueryTest_ActorOverlap
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x238, declared in Icarus/Source/Icarus/AI/EQS/EnvQueryTest_ActorOverlap.h

UCLASS(MinimalAPI)
class UEnvQueryTest_ActorOverlap : public UEnvQueryTest
{
public:
    UPROPERTY(EditAnywhere) FEnvOverlapData OverlapData;  // 0x01F8, size 0x20
    UPROPERTY(EditAnywhere) TArray<TEnumAsByte<ECollisionChannel>> AdditionalTraceChannels;  // 0x0218, size 0x10
    UPROPERTY(EditAnywhere) TArray<TSoftClassPtr<AActor>> ActorClassFilters;  // 0x0228, size 0x10
};
