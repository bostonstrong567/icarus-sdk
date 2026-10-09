// /Script/LiveLinkInterface.LiveLinkVirtualSubject
// Derives from: UObject
// size 0x160, declared in Engine/Source/Runtime/LiveLinkInterface/Public/LiveLinkVirtualSubject.h

UCLASS(Abstract)
class ULiveLinkVirtualSubject : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TSubclassOf<ULiveLinkRole> Role;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) TArray<FLiveLinkSubjectName> Subjects;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere) TArray<ULiveLinkFrameTranslator*> FrameTranslators;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere) bool bRebroadcastSubject;  // 0x0058, size 0x1
    ILiveLinkClient * LiveLinkClient;  // 0x0060, not reflected
    FLiveLinkSubjectFrameData FrameSnapshot;  // 0x0068, not reflected
    FLiveLinkSubjectKey SubjectKey;  // 0x00B8, not reflected
    bool bHasStaticDataBeenRebroadcast;  // 0x00D0, not reflected
    FWindowsCriticalSection SnapshotAccessCriticalSection;  // 0x00D8, not reflected
private:
    TArray<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,TSizedDefaultAllocator<32> > CurrentFrameTranslators;  // 0x0100, not reflected
    FLiveLinkSubjectFrameData CurrentFrameSnapshot;  // 0x0110, not reflected

    // Virtual functions that start here:
    //   DependsOnSubject
};
