// /Script/LiveLink.LiveLinkTimeSynchronizationSource
// Derives from: UTimeSynchronizationSource > UObject
// size 0x80, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkTimeSynchronizationSource.h

UCLASS(EditInlineNew)
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
    UPROPERTY(EditAnywhere) FLiveLinkSubjectName SubjectName;  // 0x0030, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FLiveLinkClient * LiveLinkClient;  // 0x0038, private
    ULiveLinkTimeSynchronizationSource::ESyncState State;  // 0x0040, private
    FLiveLinkSubjectTimeSyncData CachedData;  // 0x0044, private
    int64 LastUpdateFrame;  // 0x0060, private
    FLiveLinkSubjectKey SubjectKey;  // 0x0068, private
};
