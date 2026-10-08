// /Script/AIModule.EnvQueryOption
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h

UCLASS()
class UEnvQueryOption : public UObject
{
public:
    UPROPERTY() UEnvQueryGenerator* Generator;  // 0x0028, size 0x8
    UPROPERTY() TArray<UEnvQueryTest*> Tests;  // 0x0030, size 0x10
};
