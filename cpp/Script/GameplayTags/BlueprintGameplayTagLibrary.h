// /Script/GameplayTags.BlueprintGameplayTagLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/GameplayTags/Classes/BlueprintGameplayTagLibrary.h

UCLASS()
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static void AppendGameplayTagContainers(FGameplayTagContainer& InOutTagContainer, const FGameplayTagContainer& InTagContainer);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakGameplayTagContainer(const FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayTag>& GameplayTags);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool DoesContainerMatchTagQuery(const FGameplayTagContainer& TagContainer, const FGameplayTagQuery& TagQuery);  // parameters 0x69
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool DoesTagAssetInterfaceHaveTag(TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, FGameplayTag Tag);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_GameplayTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B);  // parameters 0x41
    UFUNCTION(BlueprintCallable) static void GetAllActorsOfClassMatchingTagQuery(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const FGameplayTagQuery& GameplayTagQuery, TArray<AActor*>& OutActors);  // parameters 0x68
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetDebugStringFromGameplayTag(FGameplayTag GameplayTag);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetDebugStringFromGameplayTagContainer(const FGameplayTagContainer& TagContainer);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetNumGameplayTagsInContainer(const FGameplayTagContainer& TagContainer);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName GetTagName(const FGameplayTag& GameplayTag);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool HasAllMatchingGameplayTags(TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, const FGameplayTagContainer& OtherContainer);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool HasAllTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch);  // parameters 0x42
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool HasAnyTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch);  // parameters 0x42
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool HasTag(const FGameplayTagContainer& TagContainer, FGameplayTag Tag, bool bExactMatch);  // parameters 0x2A
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsGameplayTagValid(FGameplayTag GameplayTag);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsTagQueryEmpty(const FGameplayTagQuery& TagQuery);  // parameters 0x49
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGameplayTagContainer MakeGameplayTagContainerFromArray(const TArray<FGameplayTag>& GameplayTags);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGameplayTagContainer MakeGameplayTagContainerFromTag(FGameplayTag SingleTag);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGameplayTagQuery MakeGameplayTagQuery(FGameplayTagQuery TagQuery);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGameplayTag MakeLiteralGameplayTag(FGameplayTag Value);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static FGameplayTagContainer MakeLiteralGameplayTagContainer(FGameplayTagContainer Value);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool MatchesAnyTags(FGameplayTag TagOne, const FGameplayTagContainer& OtherContainer, bool bExactMatch);  // parameters 0x2A
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch);  // parameters 0x12
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_GameplayTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_TagContainerTagContainer(FGameplayTagContainer A, FString B);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_TagTag(FGameplayTag A, FString B);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static bool RemoveGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);  // parameters 0x29
};
