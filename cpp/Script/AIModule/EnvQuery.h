// /Script/AIModule.EnvQuery
// Derives from: UDataAsset > UObject
// size 0x48, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h

UCLASS()
class UEnvQuery : public UDataAsset
{
public:
    UPROPERTY() FName QueryName;  // 0x0030, size 0x8
    UPROPERTY() TArray<UEnvQueryOption*> Options;  // 0x0038, size 0x10
};
