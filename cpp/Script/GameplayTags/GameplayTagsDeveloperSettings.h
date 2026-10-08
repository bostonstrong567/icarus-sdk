// /Script/GameplayTags.GameplayTagsDeveloperSettings
// Derives from: UDeveloperSettings > UObject
// size 0x50, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagsSettings.h

UCLASS(Config=EditorPerProjectUserSettings)
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) FString DeveloperConfigName;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, Config) FName FavoriteTagSource;  // 0x0048, size 0x8
};
