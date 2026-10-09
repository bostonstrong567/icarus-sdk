// /Script/GameplayTags.GameplayTagTableRow
// size 0x20, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagsManager.h

USTRUCT()
struct FGameplayTagTableRow : public FTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName Tag;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString DevComment;  // 0x0010, size 0x10
};
