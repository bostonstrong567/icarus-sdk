// /Script/TimeManagement.TimedDataChannelSampleTime
// size 0x18, declared in Engine/Source/Runtime/TimeManagement/Public/ITimedDataInput.h

USTRUCT()
struct FTimedDataChannelSampleTime
{

    // Not reflected:
    double PlatformSecond;  // 0x0000
    FQualifiedFrameTime Timecode;  // 0x0008
};
