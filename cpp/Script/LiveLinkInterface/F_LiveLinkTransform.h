// /Script/LiveLinkInterface.LiveLinkTransform
// size 0x20, declared in Engine/Source/Runtime/LiveLinkInterface/Public/Roles/LiveLinkAnimationBlueprintStructs.h

USTRUCT()
struct FLiveLinkTransform
{

    // Not reflected:
    TSharedPtr<FCachedSubjectFrame,0> CachedFrame;  // 0x0008
    int32 TransformIndex;  // 0x0018
};
