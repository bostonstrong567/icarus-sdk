// /Script/Icarus.EnvQueryGenerator_CachedSpawns
// Derives from: UEnvQueryGenerator > UEnvQueryNode > UObject
// size 0x90, declared in Icarus/Source/Icarus/AI/EQS/EnvQueryGenerator_CachedSpawns.h

UCLASS(EditInlineNew)
class UEnvQueryGenerator_CachedSpawns : public UEnvQueryGenerator
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> Context;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue MaxPointRadius;  // 0x0058, size 0x38
};
