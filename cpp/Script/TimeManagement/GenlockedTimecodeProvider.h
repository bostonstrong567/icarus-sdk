// /Script/TimeManagement.GenlockedTimecodeProvider
// Derives from: UTimecodeProvider > UObject
// size 0x58, declared in Engine/Source/Runtime/TimeManagement/Public/GenlockedTimecodeProvider.h

UCLASS(Abstract)
class UGenlockedTimecodeProvider : public UTimecodeProvider
{
public:
    UPROPERTY(EditAnywhere) bool bUseGenlockToCount;  // 0x0030, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    FQualifiedFrameTime LastFrameTime;  // 0x0034, protected
    FQualifiedFrameTime LastFetchedFrameTime;  // 0x0044, protected

    // Virtual functions that start here:
    //   CorrectFromGenlock
};
