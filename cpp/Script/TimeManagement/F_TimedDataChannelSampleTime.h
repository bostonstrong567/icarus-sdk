// /Script/TimeManagement.TimedDataChannelSampleTime
// size 0x18, declared in Engine/Source/Runtime/TimeManagement/Public/ITimedDataInput.h

USTRUCT()
struct FTimedDataChannelSampleTime
{
public:
    double PlatformSecond;  // 0x0000, not reflected
    FQualifiedFrameTime Timecode;  // 0x0008, not reflected
};
