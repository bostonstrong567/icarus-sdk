// /Script/LiveLinkInterface.LiveLinkSourceDebugInfo
// size 0x10, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkSourceSettings.h

USTRUCT()
struct FLiveLinkSourceDebugInfo
{
    UPROPERTY(EditAnywhere) FLiveLinkSubjectName SubjectName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) int32 SnapshotIndex;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) int32 NumberOfBufferAtSnapshot;  // 0x000C, size 0x4
};
