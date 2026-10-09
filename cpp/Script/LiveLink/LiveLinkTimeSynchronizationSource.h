// /Script/LiveLink.LiveLinkTimeSynchronizationSource
// Derives from: UTimeSynchronizationSource > UObject
// size 0x80, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkTimeSynchronizationSource.h

UCLASS(EditInlineNew)
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
    UPROPERTY(EditAnywhere) FLiveLinkSubjectName SubjectName;  // 0x0030, size 0x8
private:
    FLiveLinkClient * LiveLinkClient;  // 0x0038, not reflected
    ULiveLinkTimeSynchronizationSource::ESyncState State;  // 0x0040, not reflected
    FLiveLinkSubjectTimeSyncData CachedData;  // 0x0044, not reflected
    int64 LastUpdateFrame;  // 0x0060, not reflected
    FLiveLinkSubjectKey SubjectKey;  // 0x0068, not reflected
};
