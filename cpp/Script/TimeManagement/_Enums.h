// /Script/TimeManagement.EFrameNumberDisplayFormats
UENUM()
enum class EFrameNumberDisplayFormats : uint8
{
    NonDropFrameTimecode = 0,
    DropFrameTimecode = 1,
    Seconds = 2,
    Frames = 3,
    MAX_Count = 4,
};

// /Script/TimeManagement.ETimedDataInputEvaluationType
UENUM()
enum class ETimedDataInputEvaluationType : uint8
{
    None = 0,
    Timecode = 1,
    PlatformTime = 2,
};

// /Script/TimeManagement.ETimedDataInputState
UENUM()
enum class ETimedDataInputState : uint8
{
    Connected = 0,
    Unresponsive = 1,
    Disconnected = 2,
};
