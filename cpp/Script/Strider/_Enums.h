// /Script/Strider.ESlopeDetectionMode
UENUM()
enum class ESlopeDetectionMode : uint8
{
    ManualSlope = 0,
    AutomaticSlope = 1,
};

// /Script/Strider.ESlopeRollCompensation
UENUM()
enum class ESlopeRollCompensation : uint8
{
    None = 0,
    AdjustHips = 1,
    AdjustFeet = 2,
};

// /Script/Strider.ESlopeWarpQuality
UENUM()
enum class ESlopeWarpQuality : uint8
{
    Capsule = 0,
    PerFootRay = 1,
    PerFootShape = 2,
    LODBased = 3,
};

// /Script/Strider.EStrideVectorMethod
UENUM()
enum class EStrideVectorMethod : uint8
{
    ManualVelocity = 0,
    ActorVelocity = 1,
};
