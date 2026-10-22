// /Script/VanguardBPLibrary.EBPLogVerbosity
UENUM()
enum class EBPLogVerbosity : uint8
{
    Fatal = 0,
    Error = 1,
    Warning = 2,
    Display = 3,
    Log = 4,
    Verbose = 5,
    VeryVerbose = 6,
};

// /Script/VanguardBPLibrary.EFunctionResult
UENUM()
enum class EFunctionResult : uint8
{
    Found = 0,
    NotFound = 1,
};

// /Script/VanguardBPLibrary.EVanguardCustomNavGeometry
UENUM()
enum class EVanguardCustomNavGeometry : uint8
{
    No = 0,
    Yes = 1,
    EvenIfNotCollidable = 2,
    DontExport = 3,
    Error = 4,
};
