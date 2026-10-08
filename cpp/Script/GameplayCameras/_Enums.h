// /Script/GameplayCameras.EInitialOscillatorOffset
UENUM()
enum class EInitialOscillatorOffset : int32
{
    EOO_OffsetRandom = 0,
    EOO_OffsetZero = 1,
    EOO_MAX = 2,
};

// /Script/GameplayCameras.EInitialWaveOscillatorOffsetType
UENUM()
enum class EInitialWaveOscillatorOffsetType : uint8
{
    Random = 0,
    Zero = 1,
};

// /Script/GameplayCameras.EOscillatorWaveform
UENUM()
enum class EOscillatorWaveform : uint8
{
    SineWave = 0,
    PerlinNoise = 1,
};
