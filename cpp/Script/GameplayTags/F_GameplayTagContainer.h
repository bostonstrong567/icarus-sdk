// /Script/GameplayTags.GameplayTagContainer
// size 0x20, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagContainer.h

USTRUCT()
struct FGameplayTagContainer
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) TArray<FGameplayTag> GameplayTags;  // 0x0000, size 0x10
    UPROPERTY(Transient) TArray<FGameplayTag> ParentTags;  // 0x0010, size 0x10
};
