// /Script/LiveLink.LiveLinkInstanceProxy
// size 0x7C0, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkInstance.h

USTRUCT()
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
public:
    UPROPERTY(EditAnywhere) FAnimNode_LiveLinkPose PoseNode;  // 0x0770, size 0x50
};
