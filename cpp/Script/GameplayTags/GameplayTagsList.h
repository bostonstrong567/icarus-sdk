// /Script/GameplayTags.GameplayTagsList
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagsSettings.h

UCLASS(NotPlaceable, Config=GameplayTagsList)
class UGameplayTagsList : public UObject
{
public:
    UPROPERTY() FString ConfigFileName;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FGameplayTagTableRow> GameplayTagList;  // 0x0038, size 0x10
};
