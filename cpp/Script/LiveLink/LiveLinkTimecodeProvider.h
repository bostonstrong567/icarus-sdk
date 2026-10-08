// /Script/LiveLink.LiveLinkTimecodeProvider
// Derives from: UTimecodeProvider > UObject
// size 0xC0, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkTimecodeProvider.h

UCLASS(EditInlineNew, Config=Engine)
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{
public:
    UPROPERTY(EditAnywhere) FLiveLinkSubjectKey SubjectKey;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere) ELiveLinkTimecodeProviderEvaluationType Evaluation;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) bool bOverrideFrameRate;  // 0x004C, size 0x1
    UPROPERTY(EditAnywhere) FFrameRate OverrideFrameRate;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) int32 BufferSize;  // 0x0058, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TAtomic<enum ETimecodeProviderSynchronizationState> State;  // 0x005C, private
    ILiveLinkClient * LiveLinkClient;  // 0x0060, private
    FLiveLinkSubjectKey RegisteredSubjectKey;  // 0x0068, private
    TArray<FLiveLinkTime,TSizedDefaultAllocator<32> > SubjectFrameTimes;  // 0x0080, private
    FWindowsCriticalSection SubjectFrameLock;  // 0x0090, private
    FDelegateHandle RegisterForFrameDataReceivedHandle;  // 0x00B8, private
};
