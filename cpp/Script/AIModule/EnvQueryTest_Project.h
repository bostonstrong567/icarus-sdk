// /Script/AIModule.EnvQueryTest_Project
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x228, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Project.h

UCLASS(MinimalAPI)
class UEnvQueryTest_Project : public UEnvQueryTest
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) FEnvTraceData ProjectionData;  // 0x01F8, size 0x30
};
