// /Script/Engine.SystemTimeTimecodeProvider
// Derives from: UTimecodeProvider > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Engine/SystemTimeTimecodeProvider.h

UCLASS(EditInlineNew, Config=Engine)
class USystemTimeTimecodeProvider : public UTimecodeProvider
{
public:
    UPROPERTY(EditAnywhere) FFrameRate FrameRate;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) bool bGenerateFullFrame;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere) bool bUseHighPerformanceClock;  // 0x0039, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    ETimecodeProviderSynchronizationState State;  // 0x003C, private
};
