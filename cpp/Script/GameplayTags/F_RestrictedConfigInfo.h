// /Script/GameplayTags.RestrictedConfigInfo
// size 0x20, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagsSettings.h

USTRUCT()
struct FRestrictedConfigInfo
{
public:
    UPROPERTY(EditAnywhere, Config) FString RestrictedConfigName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FString> Owners;  // 0x0010, size 0x10
};
