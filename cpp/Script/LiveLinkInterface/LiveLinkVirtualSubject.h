// /Script/LiveLinkInterface.LiveLinkVirtualSubject
// Derives from: UObject
// size 0x160, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkVirtualSubject.h

UCLASS(Abstract)
class ULiveLinkVirtualSubject : public UObject
{
public:
    UPROPERTY() TSubclassOf<ULiveLinkRole> Role;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) TArray<FLiveLinkSubjectName> Subjects;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere) TArray<ULiveLinkFrameTranslator*> FrameTranslators;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere) bool bRebroadcastSubject;  // 0x0058, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    ILiveLinkClient * LiveLinkClient;  // 0x0060, protected
    FLiveLinkSubjectFrameData FrameSnapshot;  // 0x0068, protected
    FLiveLinkSubjectKey SubjectKey;  // 0x00B8, protected
    bool bHasStaticDataBeenRebroadcast;  // 0x00D0, protected
    FWindowsCriticalSection SnapshotAccessCriticalSection;  // 0x00D8, protected
    TArray<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,TSizedDefaultAllocator<32> > CurrentFrameTranslators;  // 0x0100, private
    FLiveLinkSubjectFrameData CurrentFrameSnapshot;  // 0x0110, private

    // Virtual functions that start here:
    //   DependsOnSubject
};
