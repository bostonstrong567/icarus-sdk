// /Script/GameplayTags.RestrictedGameplayTagTableRow
// size 0x28, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagsManager.h

USTRUCT()
struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bAllowNonRestrictedChildren;  // 0x0020, size 0x1
};
