// /Script/StreamlineBlueprint.UStreamlineDLSSGMode
UENUM()
enum class UStreamlineDLSSGMode : uint8
{
    Off = 0,
    On = 1,
};

// /Script/StreamlineBlueprint.UStreamlineDLSSGSupport
UENUM()
enum class UStreamlineDLSSGSupport : uint8
{
    Supported = 0,
    NotSupported = 1,
    NotSupportedIncompatibleHardware = 2,
    NotSupportedDriverOutOfDate = 3,
    NotSupportedOperatingSystemOutOfDate = 4,
    NotSupportedByPlatformAtBuildTime = 5,
    NotSupportedIncompatibleAPICaptureToolActive = 6,
};

// /Script/StreamlineBlueprint.UStreamlineReflexMode
UENUM()
enum class UStreamlineReflexMode : uint8
{
    Disabled = 0,
    Enabled = 1,
    EnabledPlusBoost = 3,
};

// /Script/StreamlineBlueprint.UStreamlineReflexSupport
UENUM()
enum class UStreamlineReflexSupport : uint8
{
    Supported = 0,
    NotSupported = 1,
};
