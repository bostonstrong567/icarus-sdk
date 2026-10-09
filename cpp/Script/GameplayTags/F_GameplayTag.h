// /Script/GameplayTags.GameplayTag
// size 0x8, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagContainer.h

USTRUCT()
struct FGameplayTag
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, SaveGame) FName TagName;  // 0x0000, size 0x8
};
