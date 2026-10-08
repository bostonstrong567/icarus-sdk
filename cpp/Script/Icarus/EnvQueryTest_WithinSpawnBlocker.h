// /Script/Icarus.EnvQueryTest_WithinSpawnBlocker
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x208, declared in Icarus/Source/Icarus/AI/EQS/EnvQueryTest_WithinSpawnBlocker.h

UCLASS()
class UEnvQueryTest_WithinSpawnBlocker : public UEnvQueryTest
{
public:
    UPROPERTY(EditAnywhere) bool bCheckForSpawnAttractors;  // 0x01F8, size 0x1
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> SpawnBlockersContext;  // 0x0200, size 0x8
};
