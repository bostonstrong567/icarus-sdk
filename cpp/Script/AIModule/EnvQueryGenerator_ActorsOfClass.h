// /Script/AIModule.EnvQueryGenerator_ActorsOfClass
// Derives from: UEnvQueryGenerator > UEnvQueryNode > UObject
// size 0xD0, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ActorsOfClass.h

UCLASS(EditInlineNew)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<AActor> SearchedActorClass;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) FAIDataProviderBoolValue GenerateOnlyActorsInRadius;  // 0x0058, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue SearchRadius;  // 0x0090, size 0x38
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> SearchCenter;  // 0x00C8, size 0x8

    // Virtual functions that start here:
    //   ProcessItems
};
