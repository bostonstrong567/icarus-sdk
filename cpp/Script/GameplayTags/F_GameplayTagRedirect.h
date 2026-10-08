// /Script/GameplayTags.GameplayTagRedirect
// size 0x10, declared in Engine/Source/Runtime/GameplayTags/Public/GameplayTagRedirectors.h

USTRUCT()
struct FGameplayTagRedirect
{
    UPROPERTY(EditAnywhere) FName OldTagName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FName NewTagName;  // 0x0008, size 0x8
};
