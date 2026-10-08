// /Script/LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
// size 0x28, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Private/LiveLinkMessageBusSource.h

USTRUCT()
struct FLiveLinkSubjectDataMessage
{
    UPROPERTY() FLiveLinkRefSkeleton RefSkeleton;  // 0x0000, size 0x20
    UPROPERTY() FName SubjectName;  // 0x0020, size 0x8
};
