// /Script/LiveLinkInterface.LiveLinkRefSkeleton
// size 0x20, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkRefSkeleton.h

USTRUCT()
struct FLiveLinkRefSkeleton
{
    UPROPERTY() TArray<FName> BoneNames;  // 0x0000, size 0x10
    UPROPERTY() TArray<int32> BoneParents;  // 0x0010, size 0x10
};
