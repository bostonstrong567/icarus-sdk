// /Script/GameplayTags.GameplayTagSource
// size 0x20, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagsManager.h

USTRUCT()
struct FGameplayTagSource
{
public:
    UPROPERTY() FName SourceName;  // 0x0000, size 0x8
    UPROPERTY() EGameplayTagSourceType SourceType;  // 0x0008, size 0x1
    UPROPERTY() UGameplayTagsList* SourceTagList;  // 0x0010, size 0x8
    UPROPERTY() URestrictedGameplayTagsList* SourceRestrictedTagList;  // 0x0018, size 0x8
};
