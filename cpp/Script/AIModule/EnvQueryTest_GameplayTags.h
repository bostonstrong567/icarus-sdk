// /Script/AIModule.EnvQueryTest_GameplayTags
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x268, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_GameplayTags.h

UCLASS(MinimalAPI)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) FGameplayTagQuery TagQueryToMatch;  // 0x01F8, size 0x48
    UPROPERTY() bool bUpdatedToUseQuery;  // 0x0240, size 0x1
    UPROPERTY() EGameplayContainerMatchType TagsToMatch;  // 0x0241, size 0x1
    UPROPERTY() FGameplayTagContainer GameplayTags;  // 0x0248, size 0x20
};
