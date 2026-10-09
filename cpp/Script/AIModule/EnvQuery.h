// /Script/AIModule.EnvQuery
// Derives from: UDataAsset > UObject
// size 0x48, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h

UCLASS()
class UEnvQuery : public UDataAsset
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() FName QueryName;  // 0x0030, size 0x8
    UPROPERTY() TArray<UEnvQueryOption*> Options;  // 0x0038, size 0x10
};
