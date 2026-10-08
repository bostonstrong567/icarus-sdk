// /Script/AugmentedReality.EARAltitudeSource
UENUM()
enum class EARAltitudeSource : uint8
{
    Precise = 0,
    Coarse = 1,
    UserDefined = 2,
    Unknown = 3,
};

// /Script/AugmentedReality.EARCandidateImageOrientation
UENUM()
enum class EARCandidateImageOrientation : uint8
{
    Landscape = 0,
    Portrait = 1,
};

// /Script/AugmentedReality.EARCaptureType
UENUM()
enum class EARCaptureType : uint8
{
    Camera = 0,
    QRCode = 1,
    SpatialMapping = 2,
    SceneUnderstanding = 3,
    HandMesh = 4,
};

// /Script/AugmentedReality.EARDepthAccuracy
UENUM()
enum class EARDepthAccuracy : uint8
{
    Unkown = 0,
    Approximate = 1,
    Accurate = 2,
};

// /Script/AugmentedReality.EARDepthQuality
UENUM()
enum class EARDepthQuality : uint8
{
    Unkown = 0,
    Low = 1,
    High = 2,
};

// /Script/AugmentedReality.EAREnvironmentCaptureProbeType
UENUM()
enum class EAREnvironmentCaptureProbeType : uint8
{
    None = 0,
    Manual = 1,
    Automatic = 2,
};

// /Script/AugmentedReality.EAREye
UENUM()
enum class EAREye : uint8
{
    LeftEye = 0,
    RightEye = 1,
};

// /Script/AugmentedReality.EARFaceBlendShape
UENUM()
enum class EARFaceBlendShape : uint8
{
    EyeBlinkLeft = 0,
    EyeLookDownLeft = 1,
    EyeLookInLeft = 2,
    EyeLookOutLeft = 3,
    EyeLookUpLeft = 4,
    EyeSquintLeft = 5,
    EyeWideLeft = 6,
    EyeBlinkRight = 7,
    EyeLookDownRight = 8,
    EyeLookInRight = 9,
    EyeLookOutRight = 10,
    EyeLookUpRight = 11,
    EyeSquintRight = 12,
    EyeWideRight = 13,
    JawForward = 14,
    JawLeft = 15,
    JawRight = 16,
    JawOpen = 17,
    MouthClose = 18,
    MouthFunnel = 19,
    MouthPucker = 20,
    MouthLeft = 21,
    MouthRight = 22,
    MouthSmileLeft = 23,
    MouthSmileRight = 24,
    MouthFrownLeft = 25,
    MouthFrownRight = 26,
    MouthDimpleLeft = 27,
    MouthDimpleRight = 28,
    MouthStretchLeft = 29,
    MouthStretchRight = 30,
    MouthRollLower = 31,
    MouthRollUpper = 32,
    MouthShrugLower = 33,
    MouthShrugUpper = 34,
    MouthPressLeft = 35,
    MouthPressRight = 36,
    MouthLowerDownLeft = 37,
    MouthLowerDownRight = 38,
    MouthUpperUpLeft = 39,
    MouthUpperUpRight = 40,
    BrowDownLeft = 41,
    BrowDownRight = 42,
    BrowInnerUp = 43,
    BrowOuterUpLeft = 44,
    BrowOuterUpRight = 45,
    CheekPuff = 46,
    CheekSquintLeft = 47,
    CheekSquintRight = 48,
    NoseSneerLeft = 49,
    NoseSneerRight = 50,
    TongueOut = 51,
    HeadYaw = 52,
    HeadPitch = 53,
    HeadRoll = 54,
    LeftEyeYaw = 55,
    LeftEyePitch = 56,
    LeftEyeRoll = 57,
    RightEyeYaw = 58,
    RightEyePitch = 59,
    RightEyeRoll = 60,
    MAX = 61,
};

// /Script/AugmentedReality.EARFaceTrackingDirection
UENUM()
enum class EARFaceTrackingDirection : uint8
{
    FaceRelative = 0,
    FaceMirrored = 1,
};

// /Script/AugmentedReality.EARFaceTrackingUpdate
UENUM()
enum class EARFaceTrackingUpdate : uint8
{
    CurvesAndGeo = 0,
    CurvesOnly = 1,
};

// /Script/AugmentedReality.EARFaceTransformMixing
UENUM()
enum class EARFaceTransformMixing : uint8
{
    ComponentOnly = 0,
    ComponentLocationTrackedRotation = 1,
    ComponentWithTracked = 2,
    TrackingOnly = 3,
};

// /Script/AugmentedReality.EARFrameSyncMode
UENUM()
enum class EARFrameSyncMode : uint8
{
    SyncTickWithCameraImage = 0,
    SyncTickWithoutCameraImage = 1,
};

// /Script/AugmentedReality.EARGeoTrackingAccuracy
UENUM()
enum class EARGeoTrackingAccuracy : uint8
{
    Undetermined = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

// /Script/AugmentedReality.EARGeoTrackingState
UENUM()
enum class EARGeoTrackingState : uint8
{
    Initializing = 0,
    Localized = 1,
    Localizing = 2,
    NotAvailable = 3,
};

// /Script/AugmentedReality.EARGeoTrackingStateReason
UENUM()
enum class EARGeoTrackingStateReason : uint8
{
    None = 0,
    NotAvailableAtLocation = 1,
    NeedLocationPermissions = 2,
    DevicePointedTooLow = 3,
    WorldTrackingUnstable = 4,
    WaitingForLocation = 5,
    GeoDataNotLoaded = 6,
    VisualLocalizationFailed = 7,
    WaitingForAvailabilityCheck = 8,
};

// /Script/AugmentedReality.EARJointTransformSpace
UENUM()
enum class EARJointTransformSpace : uint8
{
    Model = 0,
    ParentJoint = 1,
};

// /Script/AugmentedReality.EARLightEstimationMode
UENUM()
enum class EARLightEstimationMode : uint8
{
    None = 0,
    AmbientLightEstimate = 1,
    DirectionalLightEstimate = 2,
};

// /Script/AugmentedReality.EARLineTraceChannels
UENUM()
enum class EARLineTraceChannels : uint8
{
    None = 0,
    FeaturePoint = 1,
    GroundPlane = 2,
    PlaneUsingExtent = 4,
    PlaneUsingBoundaryPolygon = 8,
};

// /Script/AugmentedReality.EARObjectClassification
UENUM()
enum class EARObjectClassification : uint8
{
    NotApplicable = 0,
    Unknown = 1,
    Wall = 2,
    Ceiling = 3,
    Floor = 4,
    Table = 5,
    Seat = 6,
    Face = 7,
    Image = 8,
    World = 9,
    SceneObject = 10,
    HandMesh = 11,
    Door = 12,
    Window = 13,
};

// /Script/AugmentedReality.EARPlaneDetectionMode
UENUM()
enum class EARPlaneDetectionMode : uint8
{
    None = 0,
    HorizontalPlaneDetection = 1,
    VerticalPlaneDetection = 2,
};

// /Script/AugmentedReality.EARPlaneOrientation
UENUM()
enum class EARPlaneOrientation : uint8
{
    Horizontal = 0,
    Vertical = 1,
    Diagonal = 2,
};

// /Script/AugmentedReality.EARSceneReconstruction
UENUM()
enum class EARSceneReconstruction : uint8
{
    None = 0,
    MeshOnly = 1,
    MeshWithClassification = 2,
};

// /Script/AugmentedReality.EARServiceAvailability
UENUM()
enum class EARServiceAvailability : uint8
{
    UnknownError = 0,
    UnknownChecking = 1,
    UnknownTimedOut = 2,
    UnsupportedDeviceNotCapable = 3,
    SupportedNotInstalled = 4,
    SupportedVersionTooOld = 5,
    SupportedInstalled = 6,
};

// /Script/AugmentedReality.EARServiceInstallRequestResult
UENUM()
enum class EARServiceInstallRequestResult : uint8
{
    Installed = 0,
    DeviceNotCompatible = 1,
    UserDeclinedInstallation = 2,
    FatalError = 3,
};

// /Script/AugmentedReality.EARServicePermissionRequestResult
UENUM()
enum class EARServicePermissionRequestResult : uint8
{
    Granted = 0,
    Denied = 1,
};

// /Script/AugmentedReality.EARSessionConfigFlags
UENUM()
enum class EARSessionConfigFlags : uint8
{
    None = 0,
    GenerateMeshData = 1,
    RenderMeshDataInWireframe = 2,
    GenerateCollisionForMeshData = 4,
    GenerateNavMeshForMeshData = 8,
    UseMeshDataForOcclusion = 16,
};

// /Script/AugmentedReality.EARSessionStatus
UENUM()
enum class EARSessionStatus : uint8
{
    NotStarted = 0,
    Running = 1,
    NotSupported = 2,
    FatalError = 3,
    PermissionNotGranted = 4,
    UnsupportedConfiguration = 5,
    Other = 6,
};

// /Script/AugmentedReality.EARSessionTrackingFeature
UENUM()
enum class EARSessionTrackingFeature : uint8
{
    None = 0,
    PoseDetection2D = 1,
    PersonSegmentation = 2,
    PersonSegmentationWithDepth = 3,
    SceneDepth = 4,
    SmoothedSceneDepth = 5,
};

// /Script/AugmentedReality.EARSessionType
UENUM()
enum class EARSessionType : uint8
{
    None = 0,
    Orientation = 1,
    World = 2,
    Face = 3,
    Image = 4,
    ObjectScanning = 5,
    PoseTracking = 6,
    GeoTracking = 7,
};

// /Script/AugmentedReality.EARSpatialMeshUsageFlags
UENUM()
enum class EARSpatialMeshUsageFlags : uint8
{
    NotApplicable = 0,
    Visible = 1,
    Collision = 2,
};

// /Script/AugmentedReality.EARTextureType
UENUM()
enum class EARTextureType : uint8
{
    Unknown = 0,
    CameraImage = 1,
    CameraDepth = 2,
    EnvironmentCapture = 3,
    PersonSegmentationImage = 4,
    PersonSegmentationDepth = 5,
    SceneDepthMap = 6,
    SceneDepthConfidenceMap = 7,
};

// /Script/AugmentedReality.EARTrackingQuality
UENUM()
enum class EARTrackingQuality : uint8
{
    NotTracking = 0,
    OrientationOnly = 1,
    OrientationAndPosition = 2,
};

// /Script/AugmentedReality.EARTrackingQualityReason
UENUM()
enum class EARTrackingQualityReason : uint8
{
    None = 0,
    Initializing = 1,
    Relocalizing = 2,
    ExcessiveMotion = 3,
    InsufficientFeatures = 4,
    InsufficientLight = 5,
    BadState = 6,
};

// /Script/AugmentedReality.EARTrackingState
UENUM()
enum class EARTrackingState : uint8
{
    Unknown = 0,
    Tracking = 1,
    NotTracking = 2,
    StoppedTracking = 3,
};

// /Script/AugmentedReality.EARWorldAlignment
UENUM()
enum class EARWorldAlignment : uint8
{
    Gravity = 0,
    GravityAndHeading = 1,
    Camera = 2,
};

// /Script/AugmentedReality.EARWorldMappingState
UENUM()
enum class EARWorldMappingState : uint8
{
    NotAvailable = 0,
    StillMappingNotRelocalizable = 1,
    StillMappingRelocalizable = 2,
    Mapped = 3,
};

// /Script/AugmentedReality.EFaceComponentDebugMode
UENUM()
enum class EFaceComponentDebugMode : uint8
{
    None = 0,
    ShowEyeVectors = 1,
    ShowFaceMesh = 2,
};

// /Script/AugmentedReality.EGeoAnchorComponentDebugMode
UENUM()
enum class EGeoAnchorComponentDebugMode : uint8
{
    None = 0,
    ShowGeoData = 1,
};

// /Script/AugmentedReality.EImageComponentDebugMode
UENUM()
enum class EImageComponentDebugMode : uint8
{
    None = 0,
    ShowDetectedImage = 1,
};

// /Script/AugmentedReality.EPlaneComponentDebugMode
UENUM()
enum class EPlaneComponentDebugMode : uint8
{
    None = 0,
    ShowNetworkRole = 1,
    ShowClassification = 2,
};

// /Script/AugmentedReality.EPoseComponentDebugMode
UENUM()
enum class EPoseComponentDebugMode : uint8
{
    None = 0,
    ShowSkeleton = 1,
};

// /Script/AugmentedReality.EQRCodeComponentDebugMode
UENUM()
enum class EQRCodeComponentDebugMode : uint8
{
    None = 0,
    ShowQRCode = 1,
};
