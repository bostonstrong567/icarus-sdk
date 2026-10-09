// /Script/AIModule.EnvQueryGenerator_CurrentLocation
// Derives from: UEnvQueryGenerator > UEnvQueryNode > UObject
// size 0x58, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_CurrentLocation.h

UCLASS(EditInlineNew)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> QueryContext;  // 0x0050, size 0x8
};
