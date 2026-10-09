// /Script/AIModule.EnvQueryInstanceCache
// size 0x178, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h

USTRUCT()
struct FEnvQueryInstanceCache
{
public:
    UPROPERTY() UEnvQuery* Template;  // 0x0000, size 0x8
    FEnvQueryInstance Instance;  // 0x0008, not reflected
    FName AssetName;  // 0x0170, not reflected
};
