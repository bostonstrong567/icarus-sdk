// /Script/GameplayTags.GameplayTagsSettings
// Derives from: UGameplayTagsList > UObject
// size 0xB8, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagsSettings.h

UCLASS(NotPlaceable, Config=GameplayTags)
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
    UPROPERTY(EditAnywhere, Config) bool ImportTagsFromConfig;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, Config) bool WarnOnInvalidTags;  // 0x0049, size 0x1
    UPROPERTY(EditAnywhere, Config) bool ClearInvalidTags;  // 0x004A, size 0x1
    UPROPERTY(EditAnywhere, Config) bool FastReplication;  // 0x004B, size 0x1
    UPROPERTY(EditAnywhere, Config) FString InvalidTagCharacters;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FGameplayTagCategoryRemap> CategoryRemapping;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FSoftObjectPath> GameplayTagTableList;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FGameplayTagRedirect> GameplayTagRedirects;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FName> CommonlyReplicatedTags;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, Config) int32 NumBitsForContainerSize;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 NetIndexFirstBitSegment;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, Config) TArray<FRestrictedConfigInfo> RestrictedConfigFiles;  // 0x00A8, size 0x10
};
