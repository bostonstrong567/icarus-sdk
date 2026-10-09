// /Script/GameplayTags.GameplayTagAssetInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagAssetInterface.h

UCLASS(Abstract, MinimalAPI)
class UGameplayTagAssetInterface : public UInterface
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const;  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const;  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const;  // parameters 0x9
};
