// /Script/HeadMountedDisplay.EHMDTrackingOrigin
UENUM()
enum class EHMDTrackingOrigin : int32
{
    Floor = 0,
    Eye = 1,
    Stage = 2,
};

// /Script/HeadMountedDisplay.EHMDWornState
UENUM()
enum class EHMDWornState : int32
{
    Unknown = 0,
    Worn = 1,
    NotWorn = 2,
};

// /Script/HeadMountedDisplay.EHandKeypoint
UENUM()
enum class EHandKeypoint : uint8
{
    Palm = 0,
    Wrist = 1,
    ThumbMetacarpal = 2,
    ThumbProximal = 3,
    ThumbDistal = 4,
    ThumbTip = 5,
    IndexMetacarpal = 6,
    IndexProximal = 7,
    IndexIntermediate = 8,
    IndexDistal = 9,
    IndexTip = 10,
    MiddleMetacarpal = 11,
    MiddleProximal = 12,
    MiddleIntermediate = 13,
    MiddleDistal = 14,
    MiddleTip = 15,
    RingMetacarpal = 16,
    RingProximal = 17,
    RingIntermediate = 18,
    RingDistal = 19,
    RingTip = 20,
    LittleMetacarpal = 21,
    LittleProximal = 22,
    LittleIntermediate = 23,
    LittleDistal = 24,
    LittleTip = 25,
};

// /Script/HeadMountedDisplay.EOrientPositionSelector
UENUM()
enum class EOrientPositionSelector : int32
{
    Orientation = 0,
    Position = 1,
    OrientationAndPosition = 2,
};

// /Script/HeadMountedDisplay.ESpatialInputGestureAxis
UENUM()
enum class ESpatialInputGestureAxis : uint8
{
    None = 0,
    Manipulation = 1,
    Navigation = 2,
    NavigationRails = 3,
};

// /Script/HeadMountedDisplay.ESpectatorScreenMode
UENUM()
enum class ESpectatorScreenMode : uint8
{
    Disabled = 0,
    SingleEyeLetterboxed = 1,
    Undistorted = 2,
    Distorted = 3,
    SingleEye = 4,
    SingleEyeCroppedToFill = 5,
    Texture = 6,
    TexturePlusEye = 7,
};

// /Script/HeadMountedDisplay.ETrackingStatus
UENUM()
enum class ETrackingStatus : uint8
{
    NotTracked = 0,
    InertialOnly = 1,
    Tracked = 2,
};

// /Script/HeadMountedDisplay.EXRDeviceConnectionResult
UENUM()
enum class EXRDeviceConnectionResult : int32
{
    NoTrackingSystem = 0,
    FeatureNotSupported = 1,
    NoValidViewport = 2,
    MiscFailure = 3,
    Success = 4,
};

// /Script/HeadMountedDisplay.EXRSystemFlags
UENUM()
enum class EXRSystemFlags : int32
{
    NoFlags = 0,
    IsAR = 1,
    IsTablet = 2,
    IsHeadMounted = 4,
    SupportsHandTracking = 8,
};

// /Script/HeadMountedDisplay.EXRTrackedDeviceType
UENUM()
enum class EXRTrackedDeviceType : uint8
{
    HeadMountedDisplay = 0,
    Controller = 1,
    TrackingReference = 2,
    Other = 3,
    Invalid = 254,
    Any = 255,
};

// /Script/HeadMountedDisplay.EXRVisualType
UENUM()
enum class EXRVisualType : uint8
{
    Controller = 0,
    Hand = 1,
};
