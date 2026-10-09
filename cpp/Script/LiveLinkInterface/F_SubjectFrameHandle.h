// /Script/LiveLinkInterface.SubjectFrameHandle
// size 0x18, declared in Engine/Source/Runtime/LiveLinkInterface/Public/Roles/LiveLinkAnimationBlueprintStructs.h

USTRUCT()
struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{
private:
    TSharedPtr<FCachedSubjectFrame,0> CachedFrame;  // 0x0008, not reflected
};
