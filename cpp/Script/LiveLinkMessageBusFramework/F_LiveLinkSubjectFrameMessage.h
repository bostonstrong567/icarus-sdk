// /Script/LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
// size 0x90, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Private/LiveLinkMessageBusSource.h

USTRUCT()
struct FLiveLinkSubjectFrameMessage
{
    UPROPERTY() FName SubjectName;  // 0x0000, size 0x8
    UPROPERTY() TArray<FTransform> Transforms;  // 0x0008, size 0x10
    UPROPERTY() TArray<FLiveLinkCurveElement> Curves;  // 0x0018, size 0x10
    UPROPERTY() FLiveLinkMetaData MetaData;  // 0x0028, size 0x60
    UPROPERTY() double Time;  // 0x0088, size 0x8
};
