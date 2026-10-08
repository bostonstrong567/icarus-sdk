// /Script/GameplayTags.GameplayTagNode
// size 0x50, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagsManager.h

USTRUCT()
struct FGameplayTagNode
{

    // Not reflected:
    FName Tag;  // 0x0000
    FGameplayTagContainer CompleteTagWithParents;  // 0x0008
    TArray<TSharedPtr<FGameplayTagNode,0>,TSizedDefaultAllocator<32> > ChildTags;  // 0x0028
    TSharedPtr<FGameplayTagNode,0> ParentNode;  // 0x0038
    uint16 NetIndex;  // 0x0048
};
