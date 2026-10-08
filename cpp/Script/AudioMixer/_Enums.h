// /Script/AudioMixer.EMusicalNoteName
UENUM()
enum class EMusicalNoteName : uint8
{
    C = 0,
    Db = 1,
    D = 2,
    Eb = 3,
    E = 4,
    F = 5,
    Gb = 6,
    G = 7,
    Ab = 8,
    A = 9,
    Bb = 10,
    B = 11,
};

// /Script/AudioMixer.EQuarztClockManagerType
UENUM()
enum class EQuarztClockManagerType : uint8
{
    AudioEngine = 0,
    QuartzSubsystem = 1,
    Count = 2,
};

// /Script/AudioMixer.ESubmixEffectDynamicsChannelLinkMode
UENUM()
enum class ESubmixEffectDynamicsChannelLinkMode : uint8
{
    Disabled = 0,
    Average = 1,
    Peak = 2,
    Count = 3,
};

// /Script/AudioMixer.ESubmixEffectDynamicsKeySource
UENUM()
enum class ESubmixEffectDynamicsKeySource : uint8
{
    Default = 0,
    AudioBus = 1,
    Submix = 2,
    Count = 3,
};

// /Script/AudioMixer.ESubmixEffectDynamicsPeakMode
UENUM()
enum class ESubmixEffectDynamicsPeakMode : uint8
{
    MeanSquared = 0,
    RootMeanSquared = 1,
    Peak = 2,
    Count = 3,
};

// /Script/AudioMixer.ESubmixEffectDynamicsProcessorType
UENUM()
enum class ESubmixEffectDynamicsProcessorType : uint8
{
    Compressor = 0,
    Limiter = 1,
    Expander = 2,
    Gate = 3,
    Count = 4,
};
