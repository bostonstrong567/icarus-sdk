// /Script/AIModule.EnvQueryGenerator_CurrentLocation
// Derives from: UEnvQueryGenerator > UEnvQueryNode > UObject
// size 0x58, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_CurrentLocation.h

UCLASS(EditInlineNew)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> QueryContext;  // 0x0050, size 0x8
};
