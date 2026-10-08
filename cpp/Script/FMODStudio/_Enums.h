// /Script/FMODStudio.EFMODEventControlKey
UENUM()
enum class EFMODEventControlKey : uint8
{
    Stop = 0,
    Play = 1,
};

// /Script/FMODStudio.EFMODEventProperty
UENUM()
enum class EFMODEventProperty : int32
{
    ChannelPriority = 0,
    ScheduleDelay = 1,
    ScheduleLookahead = 2,
    MinimumDistance = 3,
    MaximumDistance = 4,
    Count = 5,
};

// /Script/FMODStudio.EFMODLogging
UENUM()
enum class EFMODLogging : int32
{
    LEVEL_NONE = 0,
    LEVEL_ERROR = 1,
    LEVEL_WARNING = 2,
    LEVEL_LOG = 4,
};

// /Script/FMODStudio.EFMODSpeakerMode
UENUM()
enum class EFMODSpeakerMode : int32
{
    Stereo = 0,
    Surround_5_1 = 1,
    Surround_7_1 = 2,
};

// /Script/FMODStudio.EFMODValid
UENUM()
enum class EFMODValid : uint8
{
    Valid = 0,
    NotValid = 1,
};

// /Script/FMODStudio.EFMOD_STUDIO_STOP_MODE
UENUM()
enum class EFMOD_STUDIO_STOP_MODE : int32
{
    ALLOWFADEOUT = 0,
    IMMEDIATE = 1,
};
