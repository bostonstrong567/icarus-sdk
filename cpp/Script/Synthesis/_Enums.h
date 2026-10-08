// /Script/Synthesis.CurveInterpolationType
UENUM()
enum class CurveInterpolationType : uint8
{
    AUTOINTERP = 0,
    LINEAR = 1,
    CONSTANT = 2,
};

// /Script/Synthesis.EEnvelopeFollowerPeakMode
UENUM()
enum class EEnvelopeFollowerPeakMode : uint8
{
    MeanSquared = 0,
    RootMeanSquared = 1,
    Peak = 2,
    Count = 3,
};

// /Script/Synthesis.EGranularSynthEnvelopeType
UENUM()
enum class EGranularSynthEnvelopeType : uint8
{
    Rectangular = 0,
    Triangle = 1,
    DownwardTriangle = 2,
    UpwardTriangle = 3,
    ExponentialDecay = 4,
    ExponentialIncrease = 5,
    Gaussian = 6,
    Hanning = 7,
    Lanczos = 8,
    Cosine = 9,
    CosineSquared = 10,
    Welch = 11,
    Blackman = 12,
    BlackmanHarris = 13,
    Count = 14,
};

// /Script/Synthesis.EGranularSynthSeekType
UENUM()
enum class EGranularSynthSeekType : uint8
{
    FromBeginning = 0,
    FromCurrentPosition = 1,
    Count = 2,
};

// /Script/Synthesis.EPhaserLFOType
UENUM()
enum class EPhaserLFOType : uint8
{
    Sine = 0,
    UpSaw = 1,
    DownSaw = 2,
    Square = 3,
    Triangle = 4,
    Exponential = 5,
    RandomSampleHold = 6,
    Count = 7,
};

// /Script/Synthesis.ERingModulatorTypeSourceEffect
UENUM()
enum class ERingModulatorTypeSourceEffect : uint8
{
    Sine = 0,
    Saw = 1,
    Triangle = 2,
    Square = 3,
    Count = 4,
};

// /Script/Synthesis.ESamplePlayerSeekType
UENUM()
enum class ESamplePlayerSeekType : uint8
{
    FromBeginning = 0,
    FromCurrentPosition = 1,
    FromEnd = 2,
    Count = 3,
};

// /Script/Synthesis.ESourceEffectDynamicsPeakMode
UENUM()
enum class ESourceEffectDynamicsPeakMode : uint8
{
    MeanSquared = 0,
    RootMeanSquared = 1,
    Peak = 2,
    Count = 3,
};

// /Script/Synthesis.ESourceEffectDynamicsProcessorType
UENUM()
enum class ESourceEffectDynamicsProcessorType : uint8
{
    Compressor = 0,
    Limiter = 1,
    Expander = 2,
    Gate = 3,
    Count = 4,
};

// /Script/Synthesis.ESourceEffectFilterCircuit
UENUM()
enum class ESourceEffectFilterCircuit : uint8
{
    OnePole = 0,
    StateVariable = 1,
    Ladder = 2,
    Count = 3,
};

// /Script/Synthesis.ESourceEffectFilterParam
UENUM()
enum class ESourceEffectFilterParam : uint8
{
    FilterFrequency = 0,
    FilterResonance = 1,
    Count = 2,
};

// /Script/Synthesis.ESourceEffectFilterType
UENUM()
enum class ESourceEffectFilterType : uint8
{
    LowPass = 0,
    HighPass = 1,
    BandPass = 2,
    BandStop = 3,
    Count = 4,
};

// /Script/Synthesis.EStereoChannelMode
UENUM()
enum class EStereoChannelMode : uint8
{
    MidSide = 0,
    LeftRight = 1,
    count = 2,
};

// /Script/Synthesis.EStereoDelayFiltertype
UENUM()
enum class EStereoDelayFiltertype : uint8
{
    Lowpass = 0,
    Highpass = 1,
    Bandpass = 2,
    Notch = 3,
    Count = 4,
};

// /Script/Synthesis.EStereoDelaySourceEffect
UENUM()
enum class EStereoDelaySourceEffect : uint8
{
    Normal = 0,
    Cross = 1,
    PingPong = 2,
    Count = 3,
};

// /Script/Synthesis.ESubmixEffectConvolutionReverbBlockSize
UENUM()
enum class ESubmixEffectConvolutionReverbBlockSize : uint8
{
    BlockSize256 = 0,
    BlockSize512 = 1,
    BlockSize1024 = 2,
};

// /Script/Synthesis.ESubmixFilterAlgorithm
UENUM()
enum class ESubmixFilterAlgorithm : uint8
{
    OnePole = 0,
    StateVariable = 1,
    Ladder = 2,
    Count = 3,
};

// /Script/Synthesis.ESubmixFilterType
UENUM()
enum class ESubmixFilterType : uint8
{
    LowPass = 0,
    HighPass = 1,
    BandPass = 2,
    BandStop = 3,
    Count = 4,
};

// /Script/Synthesis.ESynth1OscType
UENUM()
enum class ESynth1OscType : uint8
{
    Sine = 0,
    Saw = 1,
    Triangle = 2,
    Square = 3,
    Noise = 4,
    Count = 5,
};

// /Script/Synthesis.ESynth1PatchDestination
UENUM()
enum class ESynth1PatchDestination : uint8
{
    Osc1Gain = 0,
    Osc1Frequency = 1,
    Osc1Pulsewidth = 2,
    Osc2Gain = 3,
    Osc2Frequency = 4,
    Osc2Pulsewidth = 5,
    FilterFrequency = 6,
    FilterQ = 7,
    Gain = 8,
    Pan = 9,
    LFO1Frequency = 10,
    LFO1Gain = 11,
    LFO2Frequency = 12,
    LFO2Gain = 13,
    Count = 14,
};

// /Script/Synthesis.ESynth1PatchSource
UENUM()
enum class ESynth1PatchSource : uint8
{
    LFO1 = 0,
    LFO2 = 1,
    Envelope = 2,
    BiasEnvelope = 3,
    Count = 4,
};

// /Script/Synthesis.ESynthFilterAlgorithm
UENUM()
enum class ESynthFilterAlgorithm : uint8
{
    OnePole = 0,
    StateVariable = 1,
    Ladder = 2,
    Count = 3,
};

// /Script/Synthesis.ESynthFilterType
UENUM()
enum class ESynthFilterType : uint8
{
    LowPass = 0,
    HighPass = 1,
    BandPass = 2,
    BandStop = 3,
    Count = 4,
};

// /Script/Synthesis.ESynthKnobSize
UENUM()
enum class ESynthKnobSize : uint8
{
    Medium = 0,
    Large = 1,
    Count = 2,
};

// /Script/Synthesis.ESynthLFOMode
UENUM()
enum class ESynthLFOMode : uint8
{
    Sync = 0,
    OneShot = 1,
    Free = 2,
    Count = 3,
};

// /Script/Synthesis.ESynthLFOPatchType
UENUM()
enum class ESynthLFOPatchType : uint8
{
    PatchToNone = 0,
    PatchToGain = 1,
    PatchToOscFreq = 2,
    PatchToFilterFreq = 3,
    PatchToFilterQ = 4,
    PatchToOscPulseWidth = 5,
    PatchToOscPan = 6,
    PatchLFO1ToLFO2Frequency = 7,
    PatchLFO1ToLFO2Gain = 8,
    Count = 9,
};

// /Script/Synthesis.ESynthLFOType
UENUM()
enum class ESynthLFOType : uint8
{
    Sine = 0,
    UpSaw = 1,
    DownSaw = 2,
    Square = 3,
    Triangle = 4,
    Exponential = 5,
    RandomSampleHold = 6,
    Count = 7,
};

// /Script/Synthesis.ESynthModEnvBiasPatch
UENUM()
enum class ESynthModEnvBiasPatch : uint8
{
    PatchToNone = 0,
    PatchToOscFreq = 1,
    PatchToFilterFreq = 2,
    PatchToFilterQ = 3,
    PatchToLFO1Gain = 4,
    PatchToLFO2Gain = 5,
    PatchToLFO1Freq = 6,
    PatchToLFO2Freq = 7,
    Count = 8,
};

// /Script/Synthesis.ESynthModEnvPatch
UENUM()
enum class ESynthModEnvPatch : uint8
{
    PatchToNone = 0,
    PatchToOscFreq = 1,
    PatchToFilterFreq = 2,
    PatchToFilterQ = 3,
    PatchToLFO1Gain = 4,
    PatchToLFO2Gain = 5,
    PatchToLFO1Freq = 6,
    PatchToLFO2Freq = 7,
    Count = 8,
};

// /Script/Synthesis.ESynthSlateColorStyle
UENUM()
enum class ESynthSlateColorStyle : uint8
{
    Light = 0,
    Dark = 1,
    Count = 2,
};

// /Script/Synthesis.ESynthSlateSizeType
UENUM()
enum class ESynthSlateSizeType : uint8
{
    Small = 0,
    Medium = 1,
    Large = 2,
    Count = 3,
};

// /Script/Synthesis.ESynthStereoDelayMode
UENUM()
enum class ESynthStereoDelayMode : uint8
{
    Normal = 0,
    Cross = 1,
    PingPong = 2,
    Count = 3,
};

// /Script/Synthesis.ETapLineMode
UENUM()
enum class ETapLineMode : uint8
{
    SendToChannel = 0,
    Panning = 1,
    Disabled = 2,
};
