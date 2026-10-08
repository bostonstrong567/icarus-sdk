// /Script/RTXGI.EDDGIDistanceBits
UENUM()
enum class EDDGIDistanceBits : uint8
{
    n16 = 0,
    n32 = 1,
};

// /Script/RTXGI.EDDGIIrradianceBits
UENUM()
enum class EDDGIIrradianceBits : uint8
{
    n10 = 0,
    n32 = 1,
};

// /Script/RTXGI.EDDGIProbesVisulizationMode
UENUM()
enum class EDDGIProbesVisulizationMode : uint8
{
    off = 0,
    irrad = 1,
    distr = 2,
    distg = 3,
};

// /Script/RTXGI.EDDGIRaysPerProbe
UENUM()
enum class EDDGIRaysPerProbe : int32
{
    n144 = 144,
    n288 = 288,
    n432 = 432,
    n576 = 576,
    n720 = 720,
    n864 = 864,
    n1008 = 1008,
};

// /Script/RTXGI.EDDGISkyLightType
UENUM()
enum class EDDGISkyLightType : int32
{
    None = 0,
    Raster = 1,
    RayTracing = 2,
};
