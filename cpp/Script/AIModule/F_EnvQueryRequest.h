// /Script/AIModule.EnvQueryRequest
// size 0x68, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h

USTRUCT()
struct FEnvQueryRequest
{
    UPROPERTY() UEnvQuery* QueryTemplate;  // 0x0000, size 0x8
    UPROPERTY() UObject* Owner;  // 0x0008, size 0x8
    UPROPERTY() UWorld* World;  // 0x0010, size 0x8

    // Not reflected:
    TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0> > NamedParams;  // 0x0018
};
