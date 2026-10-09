// /Script/GameplayTags.GameplayTagNode
// size 0x50, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagsManager.h

USTRUCT()
struct FGameplayTagNode
{
private:
    FName Tag;  // 0x0000, not reflected
    FGameplayTagContainer CompleteTagWithParents;  // 0x0008, not reflected
    TArray<TSharedPtr<FGameplayTagNode,0>,TSizedDefaultAllocator<32> > ChildTags;  // 0x0028, not reflected
    TSharedPtr<FGameplayTagNode,0> ParentNode;  // 0x0038, not reflected
    uint16 NetIndex;  // 0x0048, not reflected
};
