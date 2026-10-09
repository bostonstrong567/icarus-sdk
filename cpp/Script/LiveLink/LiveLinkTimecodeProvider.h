// /Script/LiveLink.LiveLinkTimecodeProvider
// Derives from: UTimecodeProvider > UObject
// size 0xC0, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkTimecodeProvider.h

UCLASS(EditInlineNew, Config=Engine)
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere) FLiveLinkSubjectKey SubjectKey;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere) ELiveLinkTimecodeProviderEvaluationType Evaluation;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) bool bOverrideFrameRate;  // 0x004C, size 0x1
    UPROPERTY(EditAnywhere) FFrameRate OverrideFrameRate;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) int32 BufferSize;  // 0x0058, size 0x4
    TAtomic<enum ETimecodeProviderSynchronizationState> State;  // 0x005C, not reflected
    ILiveLinkClient * LiveLinkClient;  // 0x0060, not reflected
    FLiveLinkSubjectKey RegisteredSubjectKey;  // 0x0068, not reflected
    TArray<FLiveLinkTime,TSizedDefaultAllocator<32> > SubjectFrameTimes;  // 0x0080, not reflected
    FWindowsCriticalSection SubjectFrameLock;  // 0x0090, not reflected
    FDelegateHandle RegisterForFrameDataReceivedHandle;  // 0x00B8, not reflected
};
