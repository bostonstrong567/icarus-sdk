// /Script/GameplayTags.GameplayTagCategoryRemap
// size 0x20, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagsSettings.h

USTRUCT()
struct FGameplayTagCategoryRemap
{
    UPROPERTY(EditAnywhere) FString BaseCategory;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) TArray<FString> RemapCategories;  // 0x0010, size 0x10
};
