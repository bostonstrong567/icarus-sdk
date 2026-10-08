// /Script/AudioSynesthesia.EConstantQFFTSizeEnum
UENUM()
enum class EConstantQFFTSizeEnum : uint8
{
    Min = 0,
    XXSmall = 1,
    XSmall = 2,
    Small = 3,
    Medium = 4,
    Large = 5,
    XLarge = 6,
    XXLarge = 7,
    Max = 8,
};

// /Script/AudioSynesthesia.EConstantQNormalizationEnum
UENUM()
enum class EConstantQNormalizationEnum : uint8
{
    EqualEuclideanNorm = 0,
    EqualEnergy = 1,
    EqualAmplitude = 2,
};

// /Script/AudioSynesthesia.ELoudnessNRTCurveTypeEnum
UENUM()
enum class ELoudnessNRTCurveTypeEnum : uint8
{
    A = 0,
    B = 1,
    C = 2,
    D = 3,
    None = 4,
};
