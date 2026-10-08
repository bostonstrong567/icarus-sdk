// /Script/LiveLinkInterface.ELiveLinkCameraProjectionMode
UENUM()
enum class ELiveLinkCameraProjectionMode : uint8
{
    Perspective = 0,
    Orthographic = 1,
};

// /Script/LiveLinkInterface.ELiveLinkSourceMode
UENUM()
enum class ELiveLinkSourceMode : uint8
{
    Latest = 0,
    EngineTime = 1,
    Timecode = 2,
};
