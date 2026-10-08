// /Script/Engine.AnimPhysCollisionType
UENUM()
enum class AnimPhysCollisionType : uint8
{
    CoM = 0,
    CustomSphere = 1,
    InnerSphere = 2,
    OuterSphere = 3,
};

// /Script/Engine.AnimPhysTwistAxis
UENUM()
enum class AnimPhysTwistAxis : uint8
{
    AxisX = 0,
    AxisY = 1,
    AxisZ = 2,
};

// /Script/Engine.AnimationCompressionFormat
UENUM()
enum class AnimationCompressionFormat : int32
{
    ACF_None = 0,
    ACF_Float96NoW = 1,
    ACF_Fixed48NoW = 2,
    ACF_IntervalFixed32NoW = 3,
    ACF_Fixed32NoW = 4,
    ACF_Float32NoW = 5,
    ACF_Identity = 6,
    ACF_MAX = 7,
};

// /Script/Engine.AnimationKeyFormat
UENUM()
enum class AnimationKeyFormat : int32
{
    AKF_ConstantKeyLerp = 0,
    AKF_VariableKeyLerp = 1,
    AKF_PerTrackCompression = 2,
    AKF_MAX = 3,
};

// /Script/Engine.Beam2SourceTargetMethod
UENUM()
enum class Beam2SourceTargetMethod : int32
{
    PEB2STM_Default = 0,
    PEB2STM_UserSet = 1,
    PEB2STM_Emitter = 2,
    PEB2STM_Particle = 3,
    PEB2STM_Actor = 4,
    PEB2STM_MAX = 5,
};

// /Script/Engine.Beam2SourceTargetTangentMethod
UENUM()
enum class Beam2SourceTargetTangentMethod : int32
{
    PEB2STTM_Direct = 0,
    PEB2STTM_UserSet = 1,
    PEB2STTM_Distribution = 2,
    PEB2STTM_Emitter = 3,
    PEB2STTM_MAX = 4,
};

// /Script/Engine.BeamModifierType
UENUM()
enum class BeamModifierType : int32
{
    PEB2MT_Source = 0,
    PEB2MT_Target = 1,
    PEB2MT_MAX = 2,
};

// /Script/Engine.CylinderHeightAxis
UENUM()
enum class CylinderHeightAxis : int32
{
    PMLPC_HEIGHTAXIS_X = 0,
    PMLPC_HEIGHTAXIS_Y = 1,
    PMLPC_HEIGHTAXIS_Z = 2,
    PMLPC_HEIGHTAXIS_MAX = 3,
};

// /Script/Engine.DistributionParamMode
UENUM()
enum class DistributionParamMode : int32
{
    DPM_Normal = 0,
    DPM_Abs = 1,
    DPM_Direct = 2,
    DPM_MAX = 3,
};

// /Script/Engine.EActorUpdateOverlapsMethod
UENUM()
enum class EActorUpdateOverlapsMethod : uint8
{
    UseConfigDefault = 0,
    AlwaysUpdate = 1,
    OnlyUpdateMovable = 2,
    NeverUpdate = 3,
};

// /Script/Engine.EAdManagerDelegate
UENUM()
enum class EAdManagerDelegate : int32
{
    AMD_ClickedBanner = 0,
    AMD_UserClosedAd = 1,
    AMD_MAX = 2,
};

// /Script/Engine.EAdditiveAnimationType
UENUM()
enum class EAdditiveAnimationType : int32
{
    AAT_None = 0,
    AAT_LocalSpaceBase = 1,
    AAT_RotationOffsetMeshSpace = 2,
    AAT_MAX = 3,
};

// /Script/Engine.EAdditiveBasePoseType
UENUM()
enum class EAdditiveBasePoseType : int32
{
    ABPT_None = 0,
    ABPT_RefPose = 1,
    ABPT_AnimScaled = 2,
    ABPT_AnimFrame = 3,
    ABPT_MAX = 4,
};

// /Script/Engine.EAirAbsorptionMethod
UENUM()
enum class EAirAbsorptionMethod : uint8
{
    Linear = 0,
    CustomCurve = 1,
};

// /Script/Engine.EAlphaBlendOption
UENUM()
enum class EAlphaBlendOption : uint8
{
    Linear = 0,
    Cubic = 1,
    HermiteCubic = 2,
    Sinusoidal = 3,
    QuadraticInOut = 4,
    CubicInOut = 5,
    QuarticInOut = 6,
    QuinticInOut = 7,
    CircularIn = 8,
    CircularOut = 9,
    CircularInOut = 10,
    ExpIn = 11,
    ExpOut = 12,
    ExpInOut = 13,
    Custom = 14,
};

// /Script/Engine.EAlphaChannelMode
UENUM()
enum class EAlphaChannelMode : int32
{
    Disabled = 0,
    LinearColorSpaceOnly = 1,
    AllowThroughTonemapper = 2,
};

// /Script/Engine.EAngularDriveMode
UENUM()
enum class EAngularDriveMode : int32
{
    SLERP = 0,
    TwistAndSwing = 1,
};

// /Script/Engine.EAnimAlphaInputType
UENUM()
enum class EAnimAlphaInputType : uint8
{
    Float = 0,
    Bool = 1,
    Curve = 2,
};

// /Script/Engine.EAnimAssetCurveFlags
UENUM()
enum class EAnimAssetCurveFlags : int32
{
    AACF_NONE = 0,
    AACF_DriveMorphTarget_DEPRECATED = 1,
    AACF_DriveAttribute_DEPRECATED = 2,
    AACF_Editable = 4,
    AACF_DriveMaterial_DEPRECATED = 8,
    AACF_Metadata = 16,
    AACF_DriveTrack = 32,
    AACF_Disabled = 64,
};

// /Script/Engine.EAnimCurveType
UENUM()
enum class EAnimCurveType : uint8
{
    AttributeCurve = 0,
    MaterialCurve = 1,
    MorphTargetCurve = 2,
    MaxAnimCurveType = 3,
};

// /Script/Engine.EAnimGroupRole
UENUM()
enum class EAnimGroupRole : int32
{
    CanBeLeader = 0,
    AlwaysFollower = 1,
    AlwaysLeader = 2,
    TransitionLeader = 3,
    TransitionFollower = 4,
};

// /Script/Engine.EAnimInterpolationType
UENUM()
enum class EAnimInterpolationType : uint8
{
    Linear = 0,
    Step = 1,
};

// /Script/Engine.EAnimLinkMethod
UENUM()
enum class EAnimLinkMethod : int32
{
    Absolute = 0,
    Relative = 1,
    Proportional = 2,
};

// /Script/Engine.EAnimNotifyEventType
UENUM()
enum class EAnimNotifyEventType : int32
{
    Begin = 0,
    End = 1,
};

// /Script/Engine.EAnimSyncGroupScope
UENUM()
enum class EAnimSyncGroupScope : uint8
{
    Local = 0,
    Component = 1,
};

// /Script/Engine.EAnimationMode
UENUM()
enum class EAnimationMode : int32
{
    AnimationBlueprint = 0,
    AnimationSingleNode = 1,
    AnimationCustomMode = 2,
};

// /Script/Engine.EAntiAliasingMethod
UENUM()
enum class EAntiAliasingMethod : int32
{
    AAM_None = 0,
    AAM_FXAA = 1,
    AAM_TemporalAA = 2,
    AAM_MSAA = 3,
    AAM_MAX = 4,
};

// /Script/Engine.EApplicationState
UENUM()
enum class EApplicationState : int32
{
    Unknown = 0,
    Inactive = 1,
    Background = 2,
    Active = 3,
};

// /Script/Engine.EAspectRatioAxisConstraint
UENUM()
enum class EAspectRatioAxisConstraint : int32
{
    AspectRatio_MaintainYFOV = 0,
    AspectRatio_MaintainXFOV = 1,
    AspectRatio_MajorAxisFOV = 2,
    AspectRatio_MAX = 3,
};

// /Script/Engine.EAttachLocation
UENUM()
enum class EAttachLocation : int32
{
    KeepRelativeOffset = 0,
    KeepWorldPosition = 1,
    SnapToTarget = 2,
    SnapToTargetIncludingScale = 3,
};

// /Script/Engine.EAttachmentRule
UENUM()
enum class EAttachmentRule : uint8
{
    KeepRelative = 0,
    KeepWorld = 1,
    SnapToTarget = 2,
};

// /Script/Engine.EAttenuationDistanceModel
UENUM()
enum class EAttenuationDistanceModel : uint8
{
    Linear = 0,
    Logarithmic = 1,
    Inverse = 2,
    LogReverse = 3,
    NaturalSound = 4,
    Custom = 5,
};

// /Script/Engine.EAttenuationShape
UENUM()
enum class EAttenuationShape : int32
{
    Sphere = 0,
    Capsule = 1,
    Box = 2,
    Cone = 3,
};

// /Script/Engine.EAttractorParticleSelectionMethod
UENUM()
enum class EAttractorParticleSelectionMethod : int32
{
    EAPSM_Random = 0,
    EAPSM_Sequential = 1,
    EAPSM_MAX = 2,
};

// /Script/Engine.EAudioBusChannels
UENUM()
enum class EAudioBusChannels : uint8
{
    Mono = 0,
    Stereo = 1,
};

// /Script/Engine.EAudioComponentPlayState
UENUM()
enum class EAudioComponentPlayState : uint8
{
    Playing = 0,
    Stopped = 1,
    Paused = 2,
    FadingIn = 3,
    FadingOut = 4,
    Count = 5,
};

// /Script/Engine.EAudioFaderCurve
UENUM()
enum class EAudioFaderCurve : uint8
{
    Linear = 0,
    Logarithmic = 1,
    SCurve = 2,
    Sin = 3,
    Count = 4,
};

// /Script/Engine.EAudioOutputTarget
UENUM()
enum class EAudioOutputTarget : int32
{
    Speaker = 0,
    Controller = 1,
    ControllerFallbackToSpeaker = 2,
};

// /Script/Engine.EAudioRecordingExportType
UENUM()
enum class EAudioRecordingExportType : uint8
{
    SoundWave = 0,
    WavFile = 1,
};

// /Script/Engine.EAudioSpectrumBandPresetType
UENUM()
enum class EAudioSpectrumBandPresetType : uint8
{
    KickDrum = 0,
    SnareDrum = 1,
    Voice = 2,
    Cymbals = 3,
};

// /Script/Engine.EAudioSpectrumType
UENUM()
enum class EAudioSpectrumType : uint8
{
    MagnitudeSpectrum = 0,
    PowerSpectrum = 1,
    Decibel = 2,
};

// /Script/Engine.EAudioVolumeLocationState
UENUM()
enum class EAudioVolumeLocationState : uint8
{
    InsideTheVolume = 0,
    OutsideTheVolume = 1,
};

// /Script/Engine.EAutoExposureMethod
UENUM()
enum class EAutoExposureMethod : int32
{
    AEM_Histogram = 0,
    AEM_Basic = 1,
    AEM_Manual = 2,
    AEM_MAX = 3,
};

// /Script/Engine.EAutoExposureMethodUI
UENUM()
enum class EAutoExposureMethodUI : int32
{
    AEM_Histogram = 0,
    AEM_Basic = 1,
    AEM_Manual = 2,
    AEM_MAX = 3,
};

// /Script/Engine.EAutoPossessAI
UENUM()
enum class EAutoPossessAI : uint8
{
    Disabled = 0,
    PlacedInWorld = 1,
    Spawned = 2,
    PlacedInWorldOrSpawned = 3,
};

// /Script/Engine.EAutoReceiveInput
UENUM()
enum class EAutoReceiveInput : int32
{
    Disabled = 0,
    Player0 = 1,
    Player1 = 2,
    Player2 = 3,
    Player3 = 4,
    Player4 = 5,
    Player5 = 6,
    Player6 = 7,
    Player7 = 8,
};

// /Script/Engine.EAxisOption
UENUM()
enum class EAxisOption : int32
{
    X = 0,
    Y = 1,
    Z = 2,
    X_Neg = 3,
    Y_Neg = 4,
    Z_Neg = 5,
    Custom = 6,
};

// /Script/Engine.EBeam2Method
UENUM()
enum class EBeam2Method : int32
{
    PEB2M_Distance = 0,
    PEB2M_Target = 1,
    PEB2M_Branch = 2,
    PEB2M_MAX = 3,
};

// /Script/Engine.EBeamTaperMethod
UENUM()
enum class EBeamTaperMethod : int32
{
    PEBTM_None = 0,
    PEBTM_Full = 1,
    PEBTM_Partial = 2,
    PEBTM_MAX = 3,
};

// /Script/Engine.EBlendMode
UENUM()
enum class EBlendMode : int32
{
    BLEND_Opaque = 0,
    BLEND_Masked = 1,
    BLEND_Translucent = 2,
    BLEND_Additive = 3,
    BLEND_Modulate = 4,
    BLEND_AlphaComposite = 5,
    BLEND_AlphaHoldout = 6,
    BLEND_MAX = 7,
};

// /Script/Engine.EBlendSpaceAxis
UENUM()
enum class EBlendSpaceAxis : int32
{
    BSA_None = 0,
    BSA_X = 1,
    BSA_Y = 2,
    BSA_Max = 3,
};

// /Script/Engine.EBlendableLocation
UENUM()
enum class EBlendableLocation : int32
{
    BL_AfterTonemapping = 0,
    BL_BeforeTonemapping = 1,
    BL_BeforeTranslucency = 2,
    BL_ReplacingTonemapper = 3,
    BL_SSRInput = 4,
    BL_MAX = 5,
};

// /Script/Engine.EBloomMethod
UENUM()
enum class EBloomMethod : int32
{
    BM_SOG = 0,
    BM_FFT = 1,
    BM_MAX = 2,
};

// /Script/Engine.EBlueprintCompileMode
UENUM()
enum class EBlueprintCompileMode : uint8
{
    Default = 0,
    Development = 1,
    FinalRelease = 2,
};

// /Script/Engine.EBlueprintNativizationFlag
UENUM()
enum class EBlueprintNativizationFlag : uint8
{
    Disabled = 0,
    Dependency = 1,
    ExplicitlyEnabled = 2,
};

// /Script/Engine.EBlueprintPinStyleType
UENUM()
enum class EBlueprintPinStyleType : int32
{
    BPST_Original = 0,
    BPST_VariantA = 1,
};

// /Script/Engine.EBlueprintStatus
UENUM()
enum class EBlueprintStatus : int32
{
    BS_Unknown = 0,
    BS_Dirty = 1,
    BS_Error = 2,
    BS_UpToDate = 3,
    BS_BeingCreated = 4,
    BS_UpToDateWithWarnings = 5,
    BS_MAX = 6,
};

// /Script/Engine.EBlueprintType
UENUM()
enum class EBlueprintType : int32
{
    BPTYPE_Normal = 0,
    BPTYPE_Const = 1,
    BPTYPE_MacroLibrary = 2,
    BPTYPE_Interface = 3,
    BPTYPE_LevelScript = 4,
    BPTYPE_FunctionLibrary = 5,
    BPTYPE_MAX = 6,
};

// /Script/Engine.EBoneAxis
UENUM()
enum class EBoneAxis : int32
{
    BA_X = 0,
    BA_Y = 1,
    BA_Z = 2,
};

// /Script/Engine.EBoneControlSpace
UENUM()
enum class EBoneControlSpace : int32
{
    BCS_WorldSpace = 0,
    BCS_ComponentSpace = 1,
    BCS_ParentBoneSpace = 2,
    BCS_BoneSpace = 3,
    BCS_MAX = 4,
};

// /Script/Engine.EBoneFilterActionOption
UENUM()
enum class EBoneFilterActionOption : uint8
{
    Remove = 0,
    Keep = 1,
    Invalid = 2,
};

// /Script/Engine.EBoneRotationSource
UENUM()
enum class EBoneRotationSource : int32
{
    BRS_KeepComponentSpaceRotation = 0,
    BRS_KeepLocalSpaceRotation = 1,
    BRS_CopyFromTarget = 2,
};

// /Script/Engine.EBoneSpaces
UENUM()
enum class EBoneSpaces : int32
{
    WorldSpace = 0,
    ComponentSpace = 1,
};

// /Script/Engine.EBoneTranslationRetargetingMode
UENUM()
enum class EBoneTranslationRetargetingMode : int32
{
    Animation = 0,
    Skeleton = 1,
    AnimationScaled = 2,
    AnimationRelative = 3,
    OrientAndScale = 4,
};

// /Script/Engine.EBoneVisibilityStatus
UENUM()
enum class EBoneVisibilityStatus : int32
{
    BVS_HiddenByParent = 0,
    BVS_Visible = 1,
    BVS_ExplicitlyHidden = 2,
    BVS_MAX = 3,
};

// /Script/Engine.EBrushType
UENUM()
enum class EBrushType : int32
{
    Brush_Default = 0,
    Brush_Add = 1,
    Brush_Subtract = 2,
    Brush_MAX = 3,
};

// /Script/Engine.ECameraAlphaBlendMode
UENUM()
enum class ECameraAlphaBlendMode : int32
{
    CABM_Linear = 0,
    CABM_Cubic = 1,
};

// /Script/Engine.ECameraProjectionMode
UENUM()
enum class ECameraProjectionMode : int32
{
    Perspective = 0,
    Orthographic = 1,
};

// /Script/Engine.ECameraShakeAttenuation
UENUM()
enum class ECameraShakeAttenuation : uint8
{
    Linear = 0,
    Quadratic = 1,
};

// /Script/Engine.ECameraShakeDurationType
UENUM()
enum class ECameraShakeDurationType : uint8
{
    Fixed = 0,
    Infinite = 1,
    Custom = 2,
};

// /Script/Engine.ECameraShakePlaySpace
UENUM()
enum class ECameraShakePlaySpace : uint8
{
    CameraLocal = 0,
    World = 1,
    UserDefined = 2,
};

// /Script/Engine.ECameraShakeUpdateResultFlags
UENUM()
enum class ECameraShakeUpdateResultFlags : uint8
{
    ApplyAsAbsolute = 1,
    SkipAutoScale = 2,
    SkipAutoPlaySpace = 4,
    Default = 0,
};

// /Script/Engine.ECanBeCharacterBase
UENUM()
enum class ECanBeCharacterBase : int32
{
    ECB_No = 0,
    ECB_Yes = 1,
    ECB_Owner = 2,
    ECB_MAX = 3,
};

// /Script/Engine.ECanCreateConnectionResponse
UENUM()
enum class ECanCreateConnectionResponse : int32
{
    CONNECT_RESPONSE_MAKE = 0,
    CONNECT_RESPONSE_DISALLOW = 1,
    CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
    CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
    CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
    CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
    CONNECT_RESPONSE_MAX = 6,
};

// /Script/Engine.EChannelMaskParameterColor
UENUM()
enum class EChannelMaskParameterColor : int32
{
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
};

// /Script/Engine.EClampMode
UENUM()
enum class EClampMode : int32
{
    CMODE_Clamp = 0,
    CMODE_ClampMin = 1,
    CMODE_ClampMax = 2,
};

// /Script/Engine.EClearSceneOptions
UENUM()
enum class EClearSceneOptions : int32
{
    NoClear = 0,
    HardwareClear = 1,
    QuadAtMaxZ = 2,
};

// /Script/Engine.ECloudStorageDelegate
UENUM()
enum class ECloudStorageDelegate : int32
{
    CSD_KeyValueReadComplete = 0,
    CSD_KeyValueWriteComplete = 1,
    CSD_ValueChanged = 2,
    CSD_DocumentQueryComplete = 3,
    CSD_DocumentReadComplete = 4,
    CSD_DocumentWriteComplete = 5,
    CSD_DocumentConflictDetected = 6,
    CSD_MAX = 7,
};

// /Script/Engine.ECollisionChannel
UENUM()
enum class ECollisionChannel : int32
{
    ECC_WorldStatic = 0,
    ECC_WorldDynamic = 1,
    ECC_Pawn = 2,
    ECC_Visibility = 3,
    ECC_Camera = 4,
    ECC_PhysicsBody = 5,
    ECC_Vehicle = 6,
    ECC_Destructible = 7,
    ECC_EngineTraceChannel1 = 8,
    ECC_EngineTraceChannel2 = 9,
    ECC_EngineTraceChannel3 = 10,
    ECC_EngineTraceChannel4 = 11,
    ECC_EngineTraceChannel5 = 12,
    ECC_EngineTraceChannel6 = 13,
    ECC_GameTraceChannel1 = 14,
    ECC_GameTraceChannel2 = 15,
    ECC_GameTraceChannel3 = 16,
    ECC_GameTraceChannel4 = 17,
    ECC_GameTraceChannel5 = 18,
    ECC_GameTraceChannel6 = 19,
    ECC_GameTraceChannel7 = 20,
    ECC_GameTraceChannel8 = 21,
    ECC_GameTraceChannel9 = 22,
    ECC_GameTraceChannel10 = 23,
    ECC_GameTraceChannel11 = 24,
    ECC_GameTraceChannel12 = 25,
    ECC_GameTraceChannel13 = 26,
    ECC_GameTraceChannel14 = 27,
    ECC_GameTraceChannel15 = 28,
    ECC_GameTraceChannel16 = 29,
    ECC_GameTraceChannel17 = 30,
    ECC_GameTraceChannel18 = 31,
    ECC_OverlapAll_Deprecated = 32,
    ECC_MAX = 33,
};

// /Script/Engine.ECollisionEnabled
UENUM()
enum class ECollisionEnabled : int32
{
    NoCollision = 0,
    QueryOnly = 1,
    PhysicsOnly = 2,
    QueryAndPhysics = 3,
};

// /Script/Engine.ECollisionResponse
UENUM()
enum class ECollisionResponse : int32
{
    ECR_Ignore = 0,
    ECR_Overlap = 1,
    ECR_Block = 2,
    ECR_MAX = 3,
};

// /Script/Engine.EComponentCreationMethod
UENUM()
enum class EComponentCreationMethod : uint8
{
    Native = 0,
    SimpleConstructionScript = 1,
    UserConstructionScript = 2,
    Instance = 3,
};

// /Script/Engine.EComponentMobility
UENUM()
enum class EComponentMobility : int32
{
    Static = 0,
    Stationary = 1,
    Movable = 2,
};

// /Script/Engine.EComponentSocketType
UENUM()
enum class EComponentSocketType : int32
{
    Invalid = 0,
    Bone = 1,
    Socket = 2,
};

// /Script/Engine.EComponentType
UENUM()
enum class EComponentType : int32
{
    None = 0,
    TranslationX = 1,
    TranslationY = 2,
    TranslationZ = 3,
    RotationX = 4,
    RotationY = 5,
    RotationZ = 6,
    Scale = 7,
    ScaleX = 8,
    ScaleY = 9,
    ScaleZ = 10,
};

// /Script/Engine.ECompositeTextureMode
UENUM()
enum class ECompositeTextureMode : int32
{
    CTM_Disabled = 0,
    CTM_NormalRoughnessToRed = 1,
    CTM_NormalRoughnessToGreen = 2,
    CTM_NormalRoughnessToBlue = 3,
    CTM_NormalRoughnessToAlpha = 4,
    CTM_MAX = 5,
};

// /Script/Engine.ECompositingSampleCount
UENUM()
enum class ECompositingSampleCount : int32
{
    One = 1,
    Two = 2,
    Four = 4,
    Eight = 8,
};

// /Script/Engine.EConcurrencyVolumeScaleMode
UENUM()
enum class EConcurrencyVolumeScaleMode : int32
{
    Default = 0,
    Distance = 1,
    Priority = 2,
};

// /Script/Engine.EConstraintTransform
UENUM()
enum class EConstraintTransform : int32
{
    Absolute = 0,
    Relative = 1,
};

// /Script/Engine.EControlConstraint
UENUM()
enum class EControlConstraint : int32
{
    Orientation = 0,
    Translation = 1,
    MAX = 2,
};

// /Script/Engine.EControllerAnalogStick
UENUM()
enum class EControllerAnalogStick : int32
{
    CAS_LeftStick = 0,
    CAS_RightStick = 1,
    CAS_MAX = 2,
};

// /Script/Engine.ECsgOper
UENUM()
enum class ECsgOper : int32
{
    CSG_Active = 0,
    CSG_Add = 1,
    CSG_Subtract = 2,
    CSG_Intersect = 3,
    CSG_Deintersect = 4,
    CSG_None = 5,
    CSG_MAX = 6,
};

// /Script/Engine.ECurveBlendOption
UENUM()
enum class ECurveBlendOption : int32
{
    Override = 0,
    DoNotOverride = 1,
    NormalizeByWeight = 2,
    BlendByWeight = 3,
    UseBasePose = 4,
    UseMaxValue = 5,
    UseMinValue = 6,
};

// /Script/Engine.ECurveTableMode
UENUM()
enum class ECurveTableMode : uint8
{
    Empty = 0,
    SimpleCurves = 1,
    RichCurves = 2,
};

// /Script/Engine.ECustomAttributeBlendType
UENUM()
enum class ECustomAttributeBlendType : uint8
{
    Override = 0,
    Blend = 1,
};

// /Script/Engine.ECustomBoneAttributeLookup
UENUM()
enum class ECustomBoneAttributeLookup : uint8
{
    BoneOnly = 0,
    ImmediateParent = 1,
    ParentHierarchy = 2,
};

// /Script/Engine.ECustomDepthStencil
UENUM()
enum class ECustomDepthStencil : int32
{
    Disabled = 0,
    Enabled = 1,
    EnabledOnDemand = 2,
    EnabledWithStencil = 3,
};

// /Script/Engine.ECustomMaterialOutputType
UENUM()
enum class ECustomMaterialOutputType : int32
{
    CMOT_Float1 = 0,
    CMOT_Float2 = 1,
    CMOT_Float3 = 2,
    CMOT_Float4 = 3,
    CMOT_MaterialAttributes = 4,
    CMOT_MAX = 5,
};

// /Script/Engine.ECustomTimeStepSynchronizationState
UENUM()
enum class ECustomTimeStepSynchronizationState : int32
{
    Closed = 0,
    Error = 1,
    Synchronized = 2,
    Synchronizing = 3,
};

// /Script/Engine.EDOFMode
UENUM()
enum class EDOFMode : int32
{
    Default = 0,
    SixDOF = 1,
    YZPlane = 2,
    XZPlane = 3,
    XYPlane = 4,
    CustomPlane = 5,
    None = 6,
};

// /Script/Engine.EDecalBlendMode
UENUM()
enum class EDecalBlendMode : int32
{
    DBM_Translucent = 0,
    DBM_Stain = 1,
    DBM_Normal = 2,
    DBM_Emissive = 3,
    DBM_DBuffer_ColorNormalRoughness = 4,
    DBM_DBuffer_Color = 5,
    DBM_DBuffer_ColorNormal = 6,
    DBM_DBuffer_ColorRoughness = 7,
    DBM_DBuffer_Normal = 8,
    DBM_DBuffer_NormalRoughness = 9,
    DBM_DBuffer_Roughness = 10,
    DBM_DBuffer_Emissive = 11,
    DBM_DBuffer_AlphaComposite = 12,
    DBM_DBuffer_EmissiveAlphaComposite = 13,
    DBM_Volumetric_DistanceFunction = 14,
    DBM_AlphaComposite = 15,
    DBM_AmbientOcclusion = 16,
    DBM_MAX = 17,
};

// /Script/Engine.EDecompressionType
UENUM()
enum class EDecompressionType : int32
{
    DTYPE_Setup = 0,
    DTYPE_Invalid = 1,
    DTYPE_Preview = 2,
    DTYPE_Native = 3,
    DTYPE_RealTime = 4,
    DTYPE_Procedural = 5,
    DTYPE_Xenon = 6,
    DTYPE_Streaming = 7,
    DTYPE_MAX = 8,
};

// /Script/Engine.EDefaultBackBufferPixelFormat
UENUM()
enum class EDefaultBackBufferPixelFormat : int32
{
    DBBPF_B8G8R8A8 = 0,
    DBBPF_A16B16G16R16_DEPRECATED = 1,
    DBBPF_FloatRGB_DEPRECATED = 2,
    DBBPF_FloatRGBA = 3,
    DBBPF_A2B10G10R10 = 4,
    DBBPF_MAX = 5,
};

// /Script/Engine.EDemoPlayFailure
UENUM()
enum class EDemoPlayFailure : int32
{
    Generic = 0,
    DemoNotFound = 1,
    Corrupt = 2,
    InvalidVersion = 3,
    InitBase = 4,
    GameSpecificHeader = 5,
    ReplayStreamerInternal = 6,
    LoadMap = 7,
    Serialization = 8,
};

// /Script/Engine.EDepthOfFieldFunctionValue
UENUM()
enum class EDepthOfFieldFunctionValue : int32
{
    TDOF_NearAndFarMask = 0,
    TDOF_NearMask = 1,
    TDOF_FarMask = 2,
    TDOF_CircleOfConfusionRadius = 3,
    TDOF_MAX = 4,
};

// /Script/Engine.EDepthOfFieldMethod
UENUM()
enum class EDepthOfFieldMethod : int32
{
    DOFM_BokehDOF = 0,
    DOFM_Gaussian = 1,
    DOFM_CircleDOF = 2,
    DOFM_MAX = 3,
};

// /Script/Engine.EDetachmentRule
UENUM()
enum class EDetachmentRule : uint8
{
    KeepRelative = 0,
    KeepWorld = 1,
};

// /Script/Engine.EDetailMode
UENUM()
enum class EDetailMode : int32
{
    DM_Low = 0,
    DM_Medium = 1,
    DM_High = 2,
    DM_MAX = 3,
};

// /Script/Engine.EDistributionVectorLockFlags
UENUM()
enum class EDistributionVectorLockFlags : int32
{
    EDVLF_None = 0,
    EDVLF_XY = 1,
    EDVLF_XZ = 2,
    EDVLF_YZ = 3,
    EDVLF_XYZ = 4,
    EDVLF_MAX = 5,
};

// /Script/Engine.EDistributionVectorMirrorFlags
UENUM()
enum class EDistributionVectorMirrorFlags : int32
{
    EDVMF_Same = 0,
    EDVMF_Different = 1,
    EDVMF_Mirror = 2,
    EDVMF_MAX = 3,
};

// /Script/Engine.EDrawDebugItemType
UENUM()
enum class EDrawDebugItemType : int32
{
    DirectionalArrow = 0,
    Sphere = 1,
    Line = 2,
    OnScreenMessage = 3,
    CoordinateSystem = 4,
};

// /Script/Engine.EDrawDebugTrace
UENUM()
enum class EDrawDebugTrace : int32
{
    None = 0,
    ForOneFrame = 1,
    ForDuration = 2,
    Persistent = 3,
};

// /Script/Engine.EDynamicForceFeedbackAction
UENUM()
enum class EDynamicForceFeedbackAction : int32
{
    Start = 0,
    Update = 1,
    Stop = 2,
};

// /Script/Engine.EEarlyZPass
UENUM()
enum class EEarlyZPass : int32
{
    None = 0,
    OpaqueOnly = 1,
    OpaqueAndMasked = 2,
    Auto = 3,
};

// /Script/Engine.EEasingFunc
UENUM()
enum class EEasingFunc : int32
{
    Linear = 0,
    Step = 1,
    SinusoidalIn = 2,
    SinusoidalOut = 3,
    SinusoidalInOut = 4,
    EaseIn = 5,
    EaseOut = 6,
    EaseInOut = 7,
    ExpoIn = 8,
    ExpoOut = 9,
    ExpoInOut = 10,
    CircularIn = 11,
    CircularOut = 12,
    CircularInOut = 13,
};

// /Script/Engine.EEdGraphPinDirection
UENUM()
enum class EEdGraphPinDirection : int32
{
    EGPD_Input = 0,
    EGPD_Output = 1,
    EGPD_MAX = 2,
};

// /Script/Engine.EEmitterDynamicParameterValue
UENUM()
enum class EEmitterDynamicParameterValue : int32
{
    EDPV_UserSet = 0,
    EDPV_AutoSet = 1,
    EDPV_VelocityX = 2,
    EDPV_VelocityY = 3,
    EDPV_VelocityZ = 4,
    EDPV_VelocityMag = 5,
    EDPV_MAX = 6,
};

// /Script/Engine.EEmitterNormalsMode
UENUM()
enum class EEmitterNormalsMode : int32
{
    ENM_CameraFacing = 0,
    ENM_Spherical = 1,
    ENM_Cylindrical = 2,
    ENM_MAX = 3,
};

// /Script/Engine.EEmitterRenderMode
UENUM()
enum class EEmitterRenderMode : int32
{
    ERM_Normal = 0,
    ERM_Point = 1,
    ERM_Cross = 2,
    ERM_LightsOnly = 3,
    ERM_None = 4,
    ERM_MAX = 5,
};

// /Script/Engine.EEndPlayReason
UENUM()
enum class EEndPlayReason : int32
{
    Destroyed = 0,
    LevelTransition = 1,
    EndPlayInEditor = 2,
    RemovedFromWorld = 3,
    Quit = 4,
};

// /Script/Engine.EEvaluateCurveTableResult
UENUM()
enum class EEvaluateCurveTableResult : int32
{
    RowFound = 0,
    RowNotFound = 1,
};

// /Script/Engine.EEvaluatorDataSource
UENUM()
enum class EEvaluatorDataSource : int32
{
    EDS_SourcePose = 0,
    EDS_DestinationPose = 1,
};

// /Script/Engine.EEvaluatorMode
UENUM()
enum class EEvaluatorMode : int32
{
    EM_Standard = 0,
    EM_Freeze = 1,
    EM_DelayedFreeze = 2,
};

// /Script/Engine.EFFTPeakInterpolationMethod
UENUM()
enum class EFFTPeakInterpolationMethod : uint8
{
    NearestNeighbor = 0,
    Linear = 1,
    Quadratic = 2,
    ConstantQ = 3,
};

// /Script/Engine.EFFTSize
UENUM()
enum class EFFTSize : uint8
{
    DefaultSize = 0,
    Min = 1,
    Small = 2,
    Medium = 3,
    Large = 4,
    VeryLarge = 5,
    Max = 6,
};

// /Script/Engine.EFFTWindowType
UENUM()
enum class EFFTWindowType : uint8
{
    None = 0,
    Hamming = 1,
    Hann = 2,
    Blackman = 3,
};

// /Script/Engine.EFastArraySerializerDeltaFlags
UENUM()
enum class EFastArraySerializerDeltaFlags : uint8
{
    None = 0,
    HasBeenSerialized = 1,
    HasDeltaBeenRequested = 2,
    IsUsingDeltaSerialization = 4,
};

// /Script/Engine.EFilterInterpolationType
UENUM()
enum class EFilterInterpolationType : int32
{
    BSIT_Average = 0,
    BSIT_Linear = 1,
    BSIT_Cubic = 2,
    BSIT_MAX = 3,
};

// /Script/Engine.EFixedFoveationLevels
UENUM()
enum class EFixedFoveationLevels : int32
{
    Disabled = 0,
    Low = 1,
    Medium = 2,
    High = 3,
};

// /Script/Engine.EFontCacheType
UENUM()
enum class EFontCacheType : uint8
{
    Offline = 0,
    Runtime = 1,
};

// /Script/Engine.EFontImportCharacterSet
UENUM()
enum class EFontImportCharacterSet : int32
{
    FontICS_Default = 0,
    FontICS_Ansi = 1,
    FontICS_Symbol = 2,
    FontICS_MAX = 3,
};

// /Script/Engine.EFormatArgumentType
UENUM()
enum class EFormatArgumentType : int32
{
    Int = 0,
    UInt = 1,
    Float = 2,
    Double = 3,
    Text = 4,
    Gender = 5,
};

// /Script/Engine.EFullyLoadPackageType
UENUM()
enum class EFullyLoadPackageType : int32
{
    FULLYLOAD_Map = 0,
    FULLYLOAD_Game_PreLoadClass = 1,
    FULLYLOAD_Game_PostLoadClass = 2,
    FULLYLOAD_Always = 3,
    FULLYLOAD_Mutator = 4,
    FULLYLOAD_MAX = 5,
};

// /Script/Engine.EFunctionInputType
UENUM()
enum class EFunctionInputType : int32
{
    FunctionInput_Scalar = 0,
    FunctionInput_Vector2 = 1,
    FunctionInput_Vector3 = 2,
    FunctionInput_Vector4 = 3,
    FunctionInput_Texture2D = 4,
    FunctionInput_TextureCube = 5,
    FunctionInput_Texture2DArray = 6,
    FunctionInput_VolumeTexture = 7,
    FunctionInput_StaticBool = 8,
    FunctionInput_MaterialAttributes = 9,
    FunctionInput_TextureExternal = 10,
    FunctionInput_MAX = 11,
};

// /Script/Engine.EGBufferFormat
UENUM()
enum class EGBufferFormat : int32
{
    Force8BitsPerChannel = 0,
    Default = 1,
    HighPrecisionNormals = 3,
    Force16BitsPerChannel = 5,
};

// /Script/Engine.EGainParamMode
UENUM()
enum class EGainParamMode : uint8
{
    Linear = 0,
    Decibels = 1,
};

// /Script/Engine.EGrammaticalGender
UENUM()
enum class EGrammaticalGender : int32
{
    Neuter = 0,
    Masculine = 1,
    Feminine = 2,
    Mixed = 3,
};

// /Script/Engine.EGrammaticalNumber
UENUM()
enum class EGrammaticalNumber : int32
{
    Singular = 0,
    Plural = 1,
};

// /Script/Engine.EGraphAxisStyle
UENUM()
enum class EGraphAxisStyle : int32
{
    Lines = 0,
    Notches = 1,
    Grid = 2,
};

// /Script/Engine.EGraphDataStyle
UENUM()
enum class EGraphDataStyle : int32
{
    Lines = 0,
    Filled = 1,
};

// /Script/Engine.EGraphType
UENUM()
enum class EGraphType : int32
{
    GT_Function = 0,
    GT_Ubergraph = 1,
    GT_Macro = 2,
    GT_Animation = 3,
    GT_StateMachine = 4,
    GT_MAX = 5,
};

// /Script/Engine.EHasCustomNavigableGeometry
UENUM()
enum class EHasCustomNavigableGeometry : int32
{
    No = 0,
    Yes = 1,
    EvenIfNotCollidable = 2,
    DontExport = 3,
};

// /Script/Engine.EHitProxyPriority
UENUM()
enum class EHitProxyPriority : int32
{
    HPP_World = 0,
    HPP_Wireframe = 1,
    HPP_Foreground = 2,
    HPP_UI = 3,
};

// /Script/Engine.EHorizTextAligment
UENUM()
enum class EHorizTextAligment : int32
{
    EHTA_Left = 0,
    EHTA_Center = 1,
    EHTA_Right = 2,
};

// /Script/Engine.EImportanceLevel
UENUM()
enum class EImportanceLevel : int32
{
    IL_Off = 0,
    IL_Lowest = 1,
    IL_Low = 2,
    IL_Normal = 3,
    IL_High = 4,
    IL_Highest = 5,
    TEMP_BROKEN2 = 6,
    EImportanceLevel_MAX = 7,
};

// /Script/Engine.EImportanceWeight
UENUM()
enum class EImportanceWeight : int32
{
    Luminance = 0,
    Red = 1,
    Green = 2,
    Blue = 3,
    Alpha = 4,
};

// /Script/Engine.EIndirectLightingCacheQuality
UENUM()
enum class EIndirectLightingCacheQuality : int32
{
    ILCQ_Off = 0,
    ILCQ_Point = 1,
    ILCQ_Volume = 2,
};

// /Script/Engine.EInertializationBoneState
UENUM()
enum class EInertializationBoneState : uint8
{
    Invalid = 0,
    Valid = 1,
    Excluded = 2,
};

// /Script/Engine.EInertializationSpace
UENUM()
enum class EInertializationSpace : uint8
{
    Default = 0,
    WorldSpace = 1,
    WorldRotation = 2,
};

// /Script/Engine.EInertializationState
UENUM()
enum class EInertializationState : uint8
{
    Inactive = 0,
    Pending = 1,
    Active = 2,
};

// /Script/Engine.EInputEvent
UENUM()
enum class EInputEvent : int32
{
    IE_Pressed = 0,
    IE_Released = 1,
    IE_Repeat = 2,
    IE_DoubleClick = 3,
    IE_Axis = 4,
    IE_MAX = 5,
};

// /Script/Engine.EInterpMoveAxis
UENUM()
enum class EInterpMoveAxis : int32
{
    AXIS_TranslationX = 0,
    AXIS_TranslationY = 1,
    AXIS_TranslationZ = 2,
    AXIS_RotationX = 3,
    AXIS_RotationY = 4,
    AXIS_RotationZ = 5,
};

// /Script/Engine.EInterpToBehaviourType
UENUM()
enum class EInterpToBehaviourType : uint8
{
    OneShot = 0,
    OneShot_Reverse = 1,
    Loop_Reset = 2,
    PingPong = 3,
};

// /Script/Engine.EInterpTrackMoveRotMode
UENUM()
enum class EInterpTrackMoveRotMode : int32
{
    IMR_Keyframed = 0,
    IMR_LookAtGroup = 1,
    IMR_Ignore = 2,
    IMR_MAX = 3,
};

// /Script/Engine.EKinematicBonesUpdateToPhysics
UENUM()
enum class EKinematicBonesUpdateToPhysics : int32
{
    SkipSimulatingBones = 0,
    SkipAllBones = 1,
};

// /Script/Engine.ELandscapeCullingPrecision
UENUM()
enum class ELandscapeCullingPrecision : int32
{
    High = 0,
    Medium = 1,
    Low = 2,
};

// /Script/Engine.ELegendPosition
UENUM()
enum class ELegendPosition : int32
{
    Outside = 0,
    Inside = 1,
};

// /Script/Engine.ELerpInterpolationMode
UENUM()
enum class ELerpInterpolationMode : int32
{
    QuatInterp = 0,
    EulerInterp = 1,
    DualQuatInterp = 2,
};

// /Script/Engine.ELightMapPaddingType
UENUM()
enum class ELightMapPaddingType : int32
{
    LMPT_NormalPadding = 0,
    LMPT_PrePadding = 1,
    LMPT_NoPadding = 2,
};

// /Script/Engine.ELightUnits
UENUM()
enum class ELightUnits : uint8
{
    Unitless = 0,
    Candelas = 1,
    Lumens = 2,
};

// /Script/Engine.ELightingBuildQuality
UENUM()
enum class ELightingBuildQuality : int32
{
    Quality_Preview = 0,
    Quality_Medium = 1,
    Quality_High = 2,
    Quality_Production = 3,
    Quality_MAX = 4,
};

// /Script/Engine.ELightmapType
UENUM()
enum class ELightmapType : uint8
{
    Default = 0,
    ForceSurface = 1,
    ForceVolumetric = 2,
};

// /Script/Engine.ELocationBoneSocketSelectionMethod
UENUM()
enum class ELocationBoneSocketSelectionMethod : int32
{
    BONESOCKETSEL_Sequential = 0,
    BONESOCKETSEL_Random = 1,
    BONESOCKETSEL_MAX = 2,
};

// /Script/Engine.ELocationBoneSocketSource
UENUM()
enum class ELocationBoneSocketSource : int32
{
    BONESOCKETSOURCE_Bones = 0,
    BONESOCKETSOURCE_Sockets = 1,
    BONESOCKETSOURCE_MAX = 2,
};

// /Script/Engine.ELocationEmitterSelectionMethod
UENUM()
enum class ELocationEmitterSelectionMethod : int32
{
    ELESM_Random = 0,
    ELESM_Sequential = 1,
    ELESM_MAX = 2,
};

// /Script/Engine.ELocationSkelVertSurfaceSource
UENUM()
enum class ELocationSkelVertSurfaceSource : int32
{
    VERTSURFACESOURCE_Vert = 0,
    VERTSURFACESOURCE_Surface = 1,
    VERTSURFACESOURCE_MAX = 2,
};

// /Script/Engine.EMIDCreationFlags
UENUM()
enum class EMIDCreationFlags : uint8
{
    None = 0,
    Transient = 1,
};

// /Script/Engine.EMaterialAttributeBlend
UENUM()
enum class EMaterialAttributeBlend : int32
{
    Blend = 0,
    UseA = 1,
    UseB = 2,
};

// /Script/Engine.EMaterialDecalResponse
UENUM()
enum class EMaterialDecalResponse : int32
{
    MDR_None = 0,
    MDR_ColorNormalRoughness = 1,
    MDR_Color = 2,
    MDR_ColorNormal = 3,
    MDR_ColorRoughness = 4,
    MDR_Normal = 5,
    MDR_NormalRoughness = 6,
    MDR_Roughness = 7,
    MDR_MAX = 8,
};

// /Script/Engine.EMaterialDomain
UENUM()
enum class EMaterialDomain : int32
{
    MD_Surface = 0,
    MD_DeferredDecal = 1,
    MD_LightFunction = 2,
    MD_Volume = 3,
    MD_PostProcess = 4,
    MD_UI = 5,
    MD_RuntimeVirtualTexture = 6,
    MD_MAX = 7,
};

// /Script/Engine.EMaterialExposedTextureProperty
UENUM()
enum class EMaterialExposedTextureProperty : int32
{
    TMTM_TextureSize = 0,
    TMTM_TexelSize = 1,
    TMTM_MAX = 2,
};

// /Script/Engine.EMaterialExposedViewProperty
UENUM()
enum class EMaterialExposedViewProperty : int32
{
    MEVP_BufferSize = 0,
    MEVP_FieldOfView = 1,
    MEVP_TanHalfFieldOfView = 2,
    MEVP_ViewSize = 3,
    MEVP_WorldSpaceViewPosition = 4,
    MEVP_WorldSpaceCameraPosition = 5,
    MEVP_ViewportOffset = 6,
    MEVP_TemporalSampleCount = 7,
    MEVP_TemporalSampleIndex = 8,
    MEVP_TemporalSampleOffset = 9,
    MEVP_RuntimeVirtualTextureOutputLevel = 10,
    MEVP_RuntimeVirtualTextureOutputDerivative = 11,
    MEVP_PreExposure = 12,
    MEVP_RuntimeVirtualTextureMaxLevel = 13,
    MEVP_MAX = 14,
};

// /Script/Engine.EMaterialFunctionUsage
UENUM()
enum class EMaterialFunctionUsage : uint8
{
    Default = 0,
    MaterialLayer = 1,
    MaterialLayerBlend = 2,
};

// /Script/Engine.EMaterialLayerLinkState
UENUM()
enum class EMaterialLayerLinkState : uint8
{
    Uninitialized = 0,
    LinkedToParent = 1,
    UnlinkedFromParent = 2,
    NotFromParent = 3,
};

// /Script/Engine.EMaterialMergeType
UENUM()
enum class EMaterialMergeType : int32
{
    MaterialMergeType_Default = 0,
    MaterialMergeType_Simplygon = 1,
};

// /Script/Engine.EMaterialParameterAssociation
UENUM()
enum class EMaterialParameterAssociation : int32
{
    LayerParameter = 0,
    BlendParameter = 1,
    GlobalParameter = 2,
};

// /Script/Engine.EMaterialPositionTransformSource
UENUM()
enum class EMaterialPositionTransformSource : int32
{
    TRANSFORMPOSSOURCE_Local = 0,
    TRANSFORMPOSSOURCE_World = 1,
    TRANSFORMPOSSOURCE_TranslatedWorld = 2,
    TRANSFORMPOSSOURCE_View = 3,
    TRANSFORMPOSSOURCE_Camera = 4,
    TRANSFORMPOSSOURCE_Particle = 5,
    TRANSFORMPOSSOURCE_MAX = 6,
};

// /Script/Engine.EMaterialProperty
UENUM()
enum class EMaterialProperty : int32
{
    MP_EmissiveColor = 0,
    MP_Opacity = 1,
    MP_OpacityMask = 2,
    MP_DiffuseColor = 3,
    MP_SpecularColor = 4,
    MP_BaseColor = 5,
    MP_Metallic = 6,
    MP_Specular = 7,
    MP_Roughness = 8,
    MP_Anisotropy = 9,
    MP_Normal = 10,
    MP_Tangent = 11,
    MP_WorldPositionOffset = 12,
    MP_WorldDisplacement = 13,
    MP_TessellationMultiplier = 14,
    MP_SubsurfaceColor = 15,
    MP_CustomData0 = 16,
    MP_CustomData1 = 17,
    MP_AmbientOcclusion = 18,
    MP_Refraction = 19,
    MP_CustomizedUVs0 = 20,
    MP_CustomizedUVs1 = 21,
    MP_CustomizedUVs2 = 22,
    MP_CustomizedUVs3 = 23,
    MP_CustomizedUVs4 = 24,
    MP_CustomizedUVs5 = 25,
    MP_CustomizedUVs6 = 26,
    MP_CustomizedUVs7 = 27,
    MP_PixelDepthOffset = 28,
    MP_ShadingModel = 29,
    MP_MaterialAttributes = 30,
    MP_CustomOutput = 31,
    MP_MAX = 32,
};

// /Script/Engine.EMaterialSamplerType
UENUM()
enum class EMaterialSamplerType : int32
{
    SAMPLERTYPE_Color = 0,
    SAMPLERTYPE_Grayscale = 1,
    SAMPLERTYPE_Alpha = 2,
    SAMPLERTYPE_Normal = 3,
    SAMPLERTYPE_Masks = 4,
    SAMPLERTYPE_DistanceFieldFont = 5,
    SAMPLERTYPE_LinearColor = 6,
    SAMPLERTYPE_LinearGrayscale = 7,
    SAMPLERTYPE_Data = 8,
    SAMPLERTYPE_External = 9,
    SAMPLERTYPE_VirtualColor = 10,
    SAMPLERTYPE_VirtualGrayscale = 11,
    SAMPLERTYPE_VirtualAlpha = 12,
    SAMPLERTYPE_VirtualNormal = 13,
    SAMPLERTYPE_VirtualMasks = 14,
    SAMPLERTYPE_VirtualLinearColor = 15,
    SAMPLERTYPE_VirtualLinearGrayscale = 16,
    SAMPLERTYPE_MAX = 17,
};

// /Script/Engine.EMaterialSceneAttributeInputMode
UENUM()
enum class EMaterialSceneAttributeInputMode : int32
{
    Coordinates = 0,
    OffsetFraction = 1,
};

// /Script/Engine.EMaterialShadingModel
UENUM()
enum class EMaterialShadingModel : int32
{
    MSM_Unlit = 0,
    MSM_DefaultLit = 1,
    MSM_Subsurface = 2,
    MSM_PreintegratedSkin = 3,
    MSM_ClearCoat = 4,
    MSM_SubsurfaceProfile = 5,
    MSM_TwoSidedFoliage = 6,
    MSM_Hair = 7,
    MSM_Cloth = 8,
    MSM_Eye = 9,
    MSM_SingleLayerWater = 10,
    MSM_ThinTranslucent = 11,
    MSM_NUM = 12,
    MSM_FromMaterialExpression = 13,
    MSM_MAX = 14,
};

// /Script/Engine.EMaterialShadingRate
UENUM()
enum class EMaterialShadingRate : int32
{
    MSR_1x1 = 0,
    MSR_2x1 = 1,
    MSR_1x2 = 2,
    MSR_2x2 = 3,
    MSR_4x2 = 4,
    MSR_2x4 = 5,
    MSR_4x4 = 6,
    MSR_Count = 7,
};

// /Script/Engine.EMaterialStencilCompare
UENUM()
enum class EMaterialStencilCompare : int32
{
    MSC_Less = 0,
    MSC_LessEqual = 1,
    MSC_Greater = 2,
    MSC_GreaterEqual = 3,
    MSC_Equal = 4,
    MSC_NotEqual = 5,
    MSC_Never = 6,
    MSC_Always = 7,
    MSC_Count = 8,
};

// /Script/Engine.EMaterialTessellationMode
UENUM()
enum class EMaterialTessellationMode : int32
{
    MTM_NoTessellation = 0,
    MTM_FlatTessellation = 1,
    MTM_PNTriangles = 2,
    MTM_MAX = 3,
};

// /Script/Engine.EMaterialUsage
UENUM()
enum class EMaterialUsage : int32
{
    MATUSAGE_SkeletalMesh = 0,
    MATUSAGE_ParticleSprites = 1,
    MATUSAGE_BeamTrails = 2,
    MATUSAGE_MeshParticles = 3,
    MATUSAGE_StaticLighting = 4,
    MATUSAGE_MorphTargets = 5,
    MATUSAGE_SplineMesh = 6,
    MATUSAGE_InstancedStaticMeshes = 7,
    MATUSAGE_GeometryCollections = 8,
    MATUSAGE_Clothing = 9,
    MATUSAGE_NiagaraSprites = 10,
    MATUSAGE_NiagaraRibbons = 11,
    MATUSAGE_NiagaraMeshParticles = 12,
    MATUSAGE_GeometryCache = 13,
    MATUSAGE_Water = 14,
    MATUSAGE_HairStrands = 15,
    MATUSAGE_LidarPointCloud = 16,
    MATUSAGE_VirtualHeightfieldMesh = 17,
    MATUSAGE_MAX = 18,
};

// /Script/Engine.EMaterialVectorCoordTransform
UENUM()
enum class EMaterialVectorCoordTransform : int32
{
    TRANSFORM_Tangent = 0,
    TRANSFORM_Local = 1,
    TRANSFORM_World = 2,
    TRANSFORM_View = 3,
    TRANSFORM_Camera = 4,
    TRANSFORM_ParticleWorld = 5,
    TRANSFORM_MAX = 6,
};

// /Script/Engine.EMaterialVectorCoordTransformSource
UENUM()
enum class EMaterialVectorCoordTransformSource : int32
{
    TRANSFORMSOURCE_Tangent = 0,
    TRANSFORMSOURCE_Local = 1,
    TRANSFORMSOURCE_World = 2,
    TRANSFORMSOURCE_View = 3,
    TRANSFORMSOURCE_Camera = 4,
    TRANSFORMSOURCE_ParticleWorld = 5,
    TRANSFORMSOURCE_MAX = 6,
};

// /Script/Engine.EMatrixColumns
UENUM()
enum class EMatrixColumns : int32
{
    First = 0,
    Second = 1,
    Third = 2,
    Fourth = 3,
};

// /Script/Engine.EMaxConcurrentResolutionRule
UENUM()
enum class EMaxConcurrentResolutionRule : int32
{
    PreventNew = 0,
    StopOldest = 1,
    StopFarthestThenPreventNew = 2,
    StopFarthestThenOldest = 3,
    StopLowestPriority = 4,
    StopQuietest = 5,
    StopLowestPriorityThenPreventNew = 6,
    Count = 7,
};

// /Script/Engine.EMeshBufferAccess
UENUM()
enum class EMeshBufferAccess : uint8
{
    Default = 0,
    ForceCPUAndGPU = 1,
};

// /Script/Engine.EMeshCameraFacingOptions
UENUM()
enum class EMeshCameraFacingOptions : int32
{
    XAxisFacing_NoUp = 0,
    XAxisFacing_ZUp = 1,
    XAxisFacing_NegativeZUp = 2,
    XAxisFacing_YUp = 3,
    XAxisFacing_NegativeYUp = 4,
    LockedAxis_ZAxisFacing = 5,
    LockedAxis_NegativeZAxisFacing = 6,
    LockedAxis_YAxisFacing = 7,
    LockedAxis_NegativeYAxisFacing = 8,
    VelocityAligned_ZAxisFacing = 9,
    VelocityAligned_NegativeZAxisFacing = 10,
    VelocityAligned_YAxisFacing = 11,
    VelocityAligned_NegativeYAxisFacing = 12,
    EMeshCameraFacingOptions_MAX = 13,
};

// /Script/Engine.EMeshCameraFacingUpAxis
UENUM()
enum class EMeshCameraFacingUpAxis : int32
{
    CameraFacing_NoneUP = 0,
    CameraFacing_ZUp = 1,
    CameraFacing_NegativeZUp = 2,
    CameraFacing_YUp = 3,
    CameraFacing_NegativeYUp = 4,
    CameraFacing_MAX = 5,
};

// /Script/Engine.EMeshFeatureImportance
UENUM()
enum class EMeshFeatureImportance : int32
{
    Off = 0,
    Lowest = 1,
    Low = 2,
    Normal = 3,
    High = 4,
    Highest = 5,
};

// /Script/Engine.EMeshInstancingReplacementMethod
UENUM()
enum class EMeshInstancingReplacementMethod : uint8
{
    RemoveOriginalActors = 0,
    KeepOriginalActorsAsEditorOnly = 1,
};

// /Script/Engine.EMeshLODSelectionType
UENUM()
enum class EMeshLODSelectionType : uint8
{
    AllLODs = 0,
    SpecificLOD = 1,
    CalculateLOD = 2,
    LowestDetailLOD = 3,
};

// /Script/Engine.EMeshMergeType
UENUM()
enum class EMeshMergeType : uint8
{
    MeshMergeType_Default = 0,
    MeshMergeType_MergeActor = 1,
};

// /Script/Engine.EMeshScreenAlignment
UENUM()
enum class EMeshScreenAlignment : int32
{
    PSMA_MeshFaceCameraWithRoll = 0,
    PSMA_MeshFaceCameraWithSpin = 1,
    PSMA_MeshFaceCameraWithLockedAxis = 2,
    PSMA_MAX = 3,
};

// /Script/Engine.EMicroTransactionDelegate
UENUM()
enum class EMicroTransactionDelegate : int32
{
    MTD_PurchaseQueryComplete = 0,
    MTD_PurchaseComplete = 1,
    MTD_MAX = 2,
};

// /Script/Engine.EMicroTransactionResult
UENUM()
enum class EMicroTransactionResult : int32
{
    MTR_Succeeded = 0,
    MTR_Failed = 1,
    MTR_Canceled = 2,
    MTR_RestoredFromServer = 3,
    MTR_MAX = 4,
};

// /Script/Engine.EMobileMSAASampleCount
UENUM()
enum class EMobileMSAASampleCount : int32
{
    One = 1,
    Two = 2,
    Four = 4,
    Eight = 8,
};

// /Script/Engine.EMobilePixelProjectedReflectionQuality
UENUM()
enum class EMobilePixelProjectedReflectionQuality : int32
{
    Disabled = 0,
    BestPerformance = 1,
    BetterQuality = 2,
    BestQuality = 3,
};

// /Script/Engine.EMobilePlanarReflectionMode
UENUM()
enum class EMobilePlanarReflectionMode : int32
{
    Usual = 0,
    MobilePPRExclusive = 1,
    MobilePPR = 2,
};

// /Script/Engine.EMobileReflectionCompression
UENUM()
enum class EMobileReflectionCompression : uint8
{
    Default = 0,
    On = 1,
    Off = 2,
};

// /Script/Engine.EModulationRouting
UENUM()
enum class EModulationRouting : uint8
{
    Disable = 0,
    Inherit = 1,
    Override = 2,
};

// /Script/Engine.EModuleType
UENUM()
enum class EModuleType : int32
{
    EPMT_General = 0,
    EPMT_TypeData = 1,
    EPMT_Beam = 2,
    EPMT_Trail = 3,
    EPMT_Spawn = 4,
    EPMT_Required = 5,
    EPMT_Event = 6,
    EPMT_Light = 7,
    EPMT_SubUV = 8,
    EPMT_MAX = 9,
};

// /Script/Engine.EMonoChannelUpmixMethod
UENUM()
enum class EMonoChannelUpmixMethod : int8
{
    Linear = 0,
    EqualPower = 1,
    FullVolume = 2,
};

// /Script/Engine.EMontageNotifyTickType
UENUM()
enum class EMontageNotifyTickType : int32
{
    Queued = 0,
    BranchingPoint = 1,
};

// /Script/Engine.EMontagePlayReturnType
UENUM()
enum class EMontagePlayReturnType : uint8
{
    MontageLength = 0,
    Duration = 1,
};

// /Script/Engine.EMontageSubStepResult
UENUM()
enum class EMontageSubStepResult : uint8
{
    Moved = 0,
    NotMoved = 1,
    InvalidSection = 2,
    InvalidMontage = 3,
};

// /Script/Engine.EMouseCaptureMode
UENUM()
enum class EMouseCaptureMode : uint8
{
    NoCapture = 0,
    CapturePermanently = 1,
    CapturePermanently_IncludingInitialMouseDown = 2,
    CaptureDuringMouseDown = 3,
    CaptureDuringRightMouseDown = 4,
};

// /Script/Engine.EMouseLockMode
UENUM()
enum class EMouseLockMode : uint8
{
    DoNotLock = 0,
    LockOnCapture = 1,
    LockAlways = 2,
    LockInFullscreen = 3,
};

// /Script/Engine.EMoveComponentAction
UENUM()
enum class EMoveComponentAction : int32
{
    Move = 0,
    Stop = 1,
    Return = 2,
};

// /Script/Engine.EMovementMode
UENUM()
enum class EMovementMode : int32
{
    MOVE_None = 0,
    MOVE_Walking = 1,
    MOVE_NavWalking = 2,
    MOVE_Falling = 3,
    MOVE_Swimming = 4,
    MOVE_Flying = 5,
    MOVE_Custom = 6,
    MOVE_MAX = 7,
};

// /Script/Engine.ENaturalSoundFalloffMode
UENUM()
enum class ENaturalSoundFalloffMode : uint8
{
    Continues = 0,
    Silent = 1,
    Hold = 2,
};

// /Script/Engine.ENavDataGatheringMode
UENUM()
enum class ENavDataGatheringMode : uint8
{
    Default = 0,
    Instant = 1,
    Lazy = 2,
};

// /Script/Engine.ENavDataGatheringModeConfig
UENUM()
enum class ENavDataGatheringModeConfig : uint8
{
    Invalid = 0,
    Instant = 1,
    Lazy = 2,
};

// /Script/Engine.ENavLinkDirection
UENUM()
enum class ENavLinkDirection : int32
{
    BothWays = 0,
    LeftToRight = 1,
    RightToLeft = 2,
};

// /Script/Engine.ENavPathEvent
UENUM()
enum class ENavPathEvent : int32
{
    Cleared = 0,
    NewPath = 1,
    UpdatedDueToGoalMoved = 2,
    UpdatedDueToNavigationChanged = 3,
    Invalidated = 4,
    RePathFailed = 5,
    MetaPathUpdate = 6,
    Custom = 7,
};

// /Script/Engine.ENavigationOptionFlag
UENUM()
enum class ENavigationOptionFlag : int32
{
    Default = 0,
    Enable = 1,
    Disable = 2,
    MAX = 3,
};

// /Script/Engine.ENavigationQueryResult
UENUM()
enum class ENavigationQueryResult : int32
{
    Invalid = 0,
    Error = 1,
    Fail = 2,
    Success = 3,
};

// /Script/Engine.ENetDormancy
UENUM()
enum class ENetDormancy : int32
{
    DORM_Never = 0,
    DORM_Awake = 1,
    DORM_DormantAll = 2,
    DORM_DormantPartial = 3,
    DORM_Initial = 4,
    DORM_MAX = 5,
};

// /Script/Engine.ENetRole
UENUM()
enum class ENetRole : int32
{
    ROLE_None = 0,
    ROLE_SimulatedProxy = 1,
    ROLE_AutonomousProxy = 2,
    ROLE_Authority = 3,
    ROLE_MAX = 4,
};

// /Script/Engine.ENetworkFailure
UENUM()
enum class ENetworkFailure : int32
{
    NetDriverAlreadyExists = 0,
    NetDriverCreateFailure = 1,
    NetDriverListenFailure = 2,
    ConnectionLost = 3,
    ConnectionTimeout = 4,
    FailureReceived = 5,
    OutdatedClient = 6,
    OutdatedServer = 7,
    PendingConnectionFailure = 8,
    NetGuidMismatch = 9,
    NetChecksumMismatch = 10,
};

// /Script/Engine.ENetworkLagState
UENUM()
enum class ENetworkLagState : int32
{
    NotLagging = 0,
    Lagging = 1,
};

// /Script/Engine.ENetworkSmoothingMode
UENUM()
enum class ENetworkSmoothingMode : uint8
{
    Disabled = 0,
    Linear = 1,
    Exponential = 2,
    Replay = 3,
};

// /Script/Engine.ENodeAdvancedPins
UENUM()
enum class ENodeAdvancedPins : int32
{
    NoPins = 0,
    Shown = 1,
    Hidden = 2,
};

// /Script/Engine.ENodeEnabledState
UENUM()
enum class ENodeEnabledState : uint8
{
    Enabled = 0,
    Disabled = 1,
    DevelopmentOnly = 2,
};

// /Script/Engine.ENodeTitleType
UENUM()
enum class ENodeTitleType : int32
{
    FullTitle = 0,
    ListView = 1,
    EditableTitle = 2,
    MenuTitle = 3,
    MAX_TitleTypes = 4,
};

// /Script/Engine.ENoiseFunction
UENUM()
enum class ENoiseFunction : int32
{
    NOISEFUNCTION_SimplexTex = 0,
    NOISEFUNCTION_GradientTex = 1,
    NOISEFUNCTION_GradientTex3D = 2,
    NOISEFUNCTION_GradientALU = 3,
    NOISEFUNCTION_ValueALU = 4,
    NOISEFUNCTION_VoronoiALU = 5,
    NOISEFUNCTION_MAX = 6,
};

// /Script/Engine.ENormalMode
UENUM()
enum class ENormalMode : int32
{
    NM_PreserveSmoothingGroups = 0,
    NM_RecalculateNormals = 1,
    NM_RecalculateNormalsSmooth = 2,
    NM_RecalculateNormalsHard = 3,
    TEMP_BROKEN = 4,
    ENormalMode_MAX = 5,
};

// /Script/Engine.ENotifyFilterType
UENUM()
enum class ENotifyFilterType : int32
{
    NoFiltering = 0,
    LOD = 1,
};

// /Script/Engine.ENotifyTriggerMode
UENUM()
enum class ENotifyTriggerMode : int32
{
    AllAnimations = 0,
    HighestWeightedAnimation = 1,
    None = 2,
};

// /Script/Engine.EObjectTypeQuery
UENUM()
enum class EObjectTypeQuery : int32
{
    ObjectTypeQuery1 = 0,
    ObjectTypeQuery2 = 1,
    ObjectTypeQuery3 = 2,
    ObjectTypeQuery4 = 3,
    ObjectTypeQuery5 = 4,
    ObjectTypeQuery6 = 5,
    ObjectTypeQuery7 = 6,
    ObjectTypeQuery8 = 7,
    ObjectTypeQuery9 = 8,
    ObjectTypeQuery10 = 9,
    ObjectTypeQuery11 = 10,
    ObjectTypeQuery12 = 11,
    ObjectTypeQuery13 = 12,
    ObjectTypeQuery14 = 13,
    ObjectTypeQuery15 = 14,
    ObjectTypeQuery16 = 15,
    ObjectTypeQuery17 = 16,
    ObjectTypeQuery18 = 17,
    ObjectTypeQuery19 = 18,
    ObjectTypeQuery20 = 19,
    ObjectTypeQuery21 = 20,
    ObjectTypeQuery22 = 21,
    ObjectTypeQuery23 = 22,
    ObjectTypeQuery24 = 23,
    ObjectTypeQuery25 = 24,
    ObjectTypeQuery26 = 25,
    ObjectTypeQuery27 = 26,
    ObjectTypeQuery28 = 27,
    ObjectTypeQuery29 = 28,
    ObjectTypeQuery30 = 29,
    ObjectTypeQuery31 = 30,
    ObjectTypeQuery32 = 31,
    ObjectTypeQuery_MAX = 32,
};

// /Script/Engine.EOcclusionCombineMode
UENUM()
enum class EOcclusionCombineMode : int32
{
    OCM_Minimum = 0,
    OCM_Multiply = 1,
    OCM_MAX = 2,
};

// /Script/Engine.EOpacitySourceMode
UENUM()
enum class EOpacitySourceMode : int32
{
    OSM_Alpha = 0,
    OSM_ColorBrightness = 1,
    OSM_RedChannel = 2,
    OSM_GreenChannel = 3,
    OSM_BlueChannel = 4,
};

// /Script/Engine.EOptimizationType
UENUM()
enum class EOptimizationType : int32
{
    OT_NumOfTriangles = 0,
    OT_MaxDeviation = 1,
    OT_MAX = 2,
};

// /Script/Engine.EOrbitChainMode
UENUM()
enum class EOrbitChainMode : int32
{
    EOChainMode_Add = 0,
    EOChainMode_Scale = 1,
    EOChainMode_Link = 2,
    EOChainMode_MAX = 3,
};

// /Script/Engine.EOverlapFilterOption
UENUM()
enum class EOverlapFilterOption : int32
{
    OverlapFilter_All = 0,
    OverlapFilter_DynamicOnly = 1,
    OverlapFilter_StaticOnly = 2,
};

// /Script/Engine.EPSCPoolMethod
UENUM()
enum class EPSCPoolMethod : uint8
{
    None = 0,
    AutoRelease = 1,
    ManualRelease = 2,
    ManualRelease_OnComplete = 3,
    FreeInPool = 4,
};

// /Script/Engine.EPanningMethod
UENUM()
enum class EPanningMethod : int8
{
    Linear = 0,
    EqualPower = 1,
};

// /Script/Engine.EParticleAxisLock
UENUM()
enum class EParticleAxisLock : int32
{
    EPAL_NONE = 0,
    EPAL_X = 1,
    EPAL_Y = 2,
    EPAL_Z = 3,
    EPAL_NEGATIVE_X = 4,
    EPAL_NEGATIVE_Y = 5,
    EPAL_NEGATIVE_Z = 6,
    EPAL_ROTATE_X = 7,
    EPAL_ROTATE_Y = 8,
    EPAL_ROTATE_Z = 9,
    EPAL_MAX = 10,
};

// /Script/Engine.EParticleBurstMethod
UENUM()
enum class EParticleBurstMethod : int32
{
    EPBM_Instant = 0,
    EPBM_Interpolated = 1,
    EPBM_MAX = 2,
};

// /Script/Engine.EParticleCameraOffsetUpdateMethod
UENUM()
enum class EParticleCameraOffsetUpdateMethod : int32
{
    EPCOUM_DirectSet = 0,
    EPCOUM_Additive = 1,
    EPCOUM_Scalar = 2,
    EPCOUM_MAX = 3,
};

// /Script/Engine.EParticleCollisionComplete
UENUM()
enum class EParticleCollisionComplete : int32
{
    EPCC_Kill = 0,
    EPCC_Freeze = 1,
    EPCC_HaltCollisions = 2,
    EPCC_FreezeTranslation = 3,
    EPCC_FreezeRotation = 4,
    EPCC_FreezeMovement = 5,
    EPCC_MAX = 6,
};

// /Script/Engine.EParticleCollisionMode
UENUM()
enum class EParticleCollisionMode : int32
{
    SceneDepth = 0,
    DistanceField = 1,
};

// /Script/Engine.EParticleCollisionResponse
UENUM()
enum class EParticleCollisionResponse : int32
{
    Bounce = 0,
    Stop = 1,
    Kill = 2,
};

// /Script/Engine.EParticleDetailMode
UENUM()
enum class EParticleDetailMode : int32
{
    PDM_Low = 0,
    PDM_Medium = 1,
    PDM_High = 2,
    PDM_MAX = 3,
};

// /Script/Engine.EParticleEventType
UENUM()
enum class EParticleEventType : int32
{
    EPET_Any = 0,
    EPET_Spawn = 1,
    EPET_Death = 2,
    EPET_Collision = 3,
    EPET_Burst = 4,
    EPET_Blueprint = 5,
    EPET_MAX = 6,
};

// /Script/Engine.EParticleScreenAlignment
UENUM()
enum class EParticleScreenAlignment : int32
{
    PSA_FacingCameraPosition = 0,
    PSA_Square = 1,
    PSA_Rectangle = 2,
    PSA_Velocity = 3,
    PSA_AwayFromCenter = 4,
    PSA_TypeSpecific = 5,
    PSA_FacingCameraDistanceBlend = 6,
    PSA_MAX = 7,
};

// /Script/Engine.EParticleSignificanceLevel
UENUM()
enum class EParticleSignificanceLevel : uint8
{
    Low = 0,
    Medium = 1,
    High = 2,
    Critical = 3,
    Num = 4,
};

// /Script/Engine.EParticleSortMode
UENUM()
enum class EParticleSortMode : int32
{
    PSORTMODE_None = 0,
    PSORTMODE_ViewProjDepth = 1,
    PSORTMODE_DistanceToView = 2,
    PSORTMODE_Age_OldestFirst = 3,
    PSORTMODE_Age_NewestFirst = 4,
    PSORTMODE_MAX = 5,
};

// /Script/Engine.EParticleSourceSelectionMethod
UENUM()
enum class EParticleSourceSelectionMethod : int32
{
    EPSSM_Random = 0,
    EPSSM_Sequential = 1,
    EPSSM_MAX = 2,
};

// /Script/Engine.EParticleSubUVInterpMethod
UENUM()
enum class EParticleSubUVInterpMethod : int32
{
    PSUVIM_None = 0,
    PSUVIM_Linear = 1,
    PSUVIM_Linear_Blend = 2,
    PSUVIM_Random = 3,
    PSUVIM_Random_Blend = 4,
    PSUVIM_MAX = 5,
};

// /Script/Engine.EParticleSysParamType
UENUM()
enum class EParticleSysParamType : int32
{
    PSPT_None = 0,
    PSPT_Scalar = 1,
    PSPT_ScalarRand = 2,
    PSPT_Vector = 3,
    PSPT_VectorRand = 4,
    PSPT_Color = 5,
    PSPT_Actor = 6,
    PSPT_Material = 7,
    PSPT_VectorUnitRand = 8,
    PSPT_MAX = 9,
};

// /Script/Engine.EParticleSystemInsignificanceReaction
UENUM()
enum class EParticleSystemInsignificanceReaction : uint8
{
    Auto = 0,
    Complete = 1,
    DisableTick = 2,
    DisableTickAndKill = 3,
    Num = 4,
};

// /Script/Engine.EParticleSystemOcclusionBoundsMethod
UENUM()
enum class EParticleSystemOcclusionBoundsMethod : int32
{
    EPSOBM_None = 0,
    EPSOBM_ParticleBounds = 1,
    EPSOBM_CustomBounds = 2,
};

// /Script/Engine.EParticleSystemUpdateMode
UENUM()
enum class EParticleSystemUpdateMode : int32
{
    EPSUM_RealTime = 0,
    EPSUM_FixedTime = 1,
};

// /Script/Engine.EParticleUVFlipMode
UENUM()
enum class EParticleUVFlipMode : uint8
{
    None = 0,
    FlipUV = 1,
    FlipUOnly = 2,
    FlipVOnly = 3,
    RandomFlipUV = 4,
    RandomFlipUOnly = 5,
    RandomFlipVOnly = 6,
    RandomFlipUVIndependent = 7,
};

// /Script/Engine.EPhysBodyOp
UENUM()
enum class EPhysBodyOp : int32
{
    PBO_None = 0,
    PBO_Term = 1,
    PBO_MAX = 2,
};

// /Script/Engine.EPhysicalMaterialMaskColor
UENUM()
enum class EPhysicalMaterialMaskColor : int32
{
    Red = 0,
    Green = 1,
    Blue = 2,
    Cyan = 3,
    Magenta = 4,
    Yellow = 5,
    White = 6,
    Black = 7,
    MAX = 8,
};

// /Script/Engine.EPhysicsAssetSolverType
UENUM()
enum class EPhysicsAssetSolverType : uint8
{
    RBAN = 0,
    World = 1,
};

// /Script/Engine.EPhysicsTransformUpdateMode
UENUM()
enum class EPhysicsTransformUpdateMode : int32
{
    SimulationUpatesComponentTransform = 0,
    ComponentTransformIsKinematic = 1,
};

// /Script/Engine.EPinContainerType
UENUM()
enum class EPinContainerType : uint8
{
    None = 0,
    Array = 1,
    Set = 2,
    Map = 3,
};

// /Script/Engine.EPinHidingMode
UENUM()
enum class EPinHidingMode : int32
{
    NeverAsPin = 0,
    PinHiddenByDefault = 1,
    PinShownByDefault = 2,
    AlwaysAsPin = 3,
};

// /Script/Engine.EPlaneConstraintAxisSetting
UENUM()
enum class EPlaneConstraintAxisSetting : uint8
{
    Custom = 0,
    X = 1,
    Y = 2,
    Z = 3,
    UseGlobalPhysicsSetting = 4,
};

// /Script/Engine.EPlatformInterfaceDataType
UENUM()
enum class EPlatformInterfaceDataType : int32
{
    PIDT_None = 0,
    PIDT_Int = 1,
    PIDT_Float = 2,
    PIDT_String = 3,
    PIDT_Object = 4,
    PIDT_Custom = 5,
    PIDT_MAX = 6,
};

// /Script/Engine.EPostCopyOperation
UENUM()
enum class EPostCopyOperation : uint8
{
    None = 0,
    LogicalNegateBool = 1,
};

// /Script/Engine.EPreviewAnimationBlueprintApplicationMethod
UENUM()
enum class EPreviewAnimationBlueprintApplicationMethod : uint8
{
    LinkedLayers = 0,
    LinkedAnimGraph = 1,
};

// /Script/Engine.EPrimaryAssetCookRule
UENUM()
enum class EPrimaryAssetCookRule : uint8
{
    Unknown = 0,
    NeverCook = 1,
    DevelopmentCook = 2,
    DevelopmentAlwaysCook = 3,
    AlwaysCook = 4,
};

// /Script/Engine.EPriorityAttenuationMethod
UENUM()
enum class EPriorityAttenuationMethod : uint8
{
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
};

// /Script/Engine.EProxyNormalComputationMethod
UENUM()
enum class EProxyNormalComputationMethod : int32
{
    AngleWeighted = 0,
    AreaWeighted = 1,
    EqualWeighted = 2,
};

// /Script/Engine.EQuartzCommandDelegateSubType
UENUM()
enum class EQuartzCommandDelegateSubType : uint8
{
    CommandOnFailedToQueue = 0,
    CommandOnQueued = 1,
    CommandOnCanceled = 2,
    CommandOnAboutToStart = 3,
    CommandOnStarted = 4,
    Count = 5,
};

// /Script/Engine.EQuartzCommandQuantization
UENUM()
enum class EQuartzCommandQuantization : uint8
{
    Bar = 0,
    Beat = 1,
    ThirtySecondNote = 2,
    SixteenthNote = 3,
    EighthNote = 4,
    QuarterNote = 5,
    HalfNote = 6,
    WholeNote = 7,
    DottedSixteenthNote = 8,
    DottedEighthNote = 9,
    DottedQuarterNote = 10,
    DottedHalfNote = 11,
    DottedWholeNote = 12,
    SixteenthNoteTriplet = 13,
    EighthNoteTriplet = 14,
    QuarterNoteTriplet = 15,
    HalfNoteTriplet = 16,
    Tick = 17,
    Count = 18,
    None = 19,
};

// /Script/Engine.EQuartzDelegateType
UENUM()
enum class EQuartzDelegateType : uint8
{
    MetronomeTick = 0,
    CommandEvent = 1,
    Count = 2,
};

// /Script/Engine.EQuartzTimeSignatureQuantization
UENUM()
enum class EQuartzTimeSignatureQuantization : uint8
{
    HalfNote = 0,
    QuarterNote = 1,
    EighthNote = 2,
    SixteenthNote = 3,
    ThirtySecondNote = 4,
    Count = 5,
};

// /Script/Engine.EQuarztQuantizationReference
UENUM()
enum class EQuarztQuantizationReference : uint8
{
    BarRelative = 0,
    TransportRelative = 1,
    CurrentTimeRelative = 2,
    Count = 3,
};

// /Script/Engine.EQuitPreference
UENUM()
enum class EQuitPreference : int32
{
    Quit = 0,
    Background = 1,
};

// /Script/Engine.ERawCurveTrackTypes
UENUM()
enum class ERawCurveTrackTypes : uint8
{
    RCT_Float = 0,
    RCT_Vector = 1,
    RCT_Transform = 2,
    RCT_MAX = 3,
};

// /Script/Engine.ERayTracingGlobalIlluminationType
UENUM()
enum class ERayTracingGlobalIlluminationType : uint8
{
    Disabled = 0,
    BruteForce = 1,
    FinalGather = 2,
};

// /Script/Engine.EReflectedAndRefractedRayTracedShadows
UENUM()
enum class EReflectedAndRefractedRayTracedShadows : uint8
{
    Disabled = 0,
    Hard_shadows = 1,
    Area_shadows = 2,
};

// /Script/Engine.EReflectionSourceType
UENUM()
enum class EReflectionSourceType : uint8
{
    CapturedScene = 0,
    SpecifiedCubemap = 1,
};

// /Script/Engine.EReflectionsType
UENUM()
enum class EReflectionsType : uint8
{
    ScreenSpace = 0,
    RayTracing = 1,
};

// /Script/Engine.ERefractionMode
UENUM()
enum class ERefractionMode : int32
{
    RM_IndexOfRefraction = 0,
    RM_PixelNormalOffset = 1,
};

// /Script/Engine.ERelativeTransformSpace
UENUM()
enum class ERelativeTransformSpace : int32
{
    RTS_World = 0,
    RTS_Actor = 1,
    RTS_Component = 2,
    RTS_ParentBoneSpace = 3,
};

// /Script/Engine.ERenderFocusRule
UENUM()
enum class ERenderFocusRule : uint8
{
    Always = 0,
    NonPointer = 1,
    NavigationOnly = 2,
    Never = 3,
};

// /Script/Engine.ERendererStencilMask
UENUM()
enum class ERendererStencilMask : uint8
{
    ERSM_Default = 0,
    ERSM_255 = 1,
    ERSM_1 = 2,
    ERSM_2 = 3,
    ERSM_4 = 4,
    ERSM_8 = 5,
    ERSM_16 = 6,
    ERSM_32 = 7,
    ERSM_64 = 8,
    ERSM_128 = 9,
};

// /Script/Engine.EReporterLineStyle
UENUM()
enum class EReporterLineStyle : int32
{
    Line = 0,
    Dash = 1,
};

// /Script/Engine.EReverbSendMethod
UENUM()
enum class EReverbSendMethod : uint8
{
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
};

// /Script/Engine.ERichCurveCompressionFormat
UENUM()
enum class ERichCurveCompressionFormat : int32
{
    RCCF_Empty = 0,
    RCCF_Constant = 1,
    RCCF_Linear = 2,
    RCCF_Cubic = 3,
    RCCF_Mixed = 4,
    RCCF_Weighted = 5,
};

// /Script/Engine.ERichCurveExtrapolation
UENUM()
enum class ERichCurveExtrapolation : int32
{
    RCCE_Cycle = 0,
    RCCE_CycleWithOffset = 1,
    RCCE_Oscillate = 2,
    RCCE_Linear = 3,
    RCCE_Constant = 4,
    RCCE_None = 5,
};

// /Script/Engine.ERichCurveInterpMode
UENUM()
enum class ERichCurveInterpMode : int32
{
    RCIM_Linear = 0,
    RCIM_Constant = 1,
    RCIM_Cubic = 2,
    RCIM_None = 3,
};

// /Script/Engine.ERichCurveKeyTimeCompressionFormat
UENUM()
enum class ERichCurveKeyTimeCompressionFormat : int32
{
    RCKTCF_uint16 = 0,
    RCKTCF_float32 = 1,
};

// /Script/Engine.ERichCurveTangentMode
UENUM()
enum class ERichCurveTangentMode : int32
{
    RCTM_Auto = 0,
    RCTM_User = 1,
    RCTM_Break = 2,
    RCTM_None = 3,
};

// /Script/Engine.ERichCurveTangentWeightMode
UENUM()
enum class ERichCurveTangentWeightMode : int32
{
    RCTWM_WeightedNone = 0,
    RCTWM_WeightedArrive = 1,
    RCTWM_WeightedLeave = 2,
    RCTWM_WeightedBoth = 3,
};

// /Script/Engine.ERootMotionAccumulateMode
UENUM()
enum class ERootMotionAccumulateMode : uint8
{
    Override = 0,
    Additive = 1,
};

// /Script/Engine.ERootMotionFinishVelocityMode
UENUM()
enum class ERootMotionFinishVelocityMode : uint8
{
    MaintainLastRootMotionVelocity = 0,
    SetVelocity = 1,
    ClampVelocity = 2,
};

// /Script/Engine.ERootMotionMode
UENUM()
enum class ERootMotionMode : int32
{
    NoRootMotionExtraction = 0,
    IgnoreRootMotion = 1,
    RootMotionFromEverything = 2,
    RootMotionFromMontagesOnly = 3,
};

// /Script/Engine.ERootMotionRootLock
UENUM()
enum class ERootMotionRootLock : int32
{
    RefPose = 0,
    AnimFirstFrame = 1,
    Zero = 2,
};

// /Script/Engine.ERootMotionSourceSettingsFlags
UENUM()
enum class ERootMotionSourceSettingsFlags : uint8
{
    UseSensitiveLiftoffCheck = 1,
    DisablePartialEndTick = 2,
    IgnoreZAccumulate = 4,
};

// /Script/Engine.ERootMotionSourceStatusFlags
UENUM()
enum class ERootMotionSourceStatusFlags : uint8
{
    Prepared = 1,
    Finished = 2,
    MarkedForRemoval = 4,
};

// /Script/Engine.ERotatorQuantization
UENUM()
enum class ERotatorQuantization : uint8
{
    ByteComponents = 0,
    ShortComponents = 1,
};

// /Script/Engine.ERoundingMode
UENUM()
enum class ERoundingMode : int32
{
    HalfToEven = 0,
    HalfFromZero = 1,
    HalfToZero = 2,
    FromZero = 3,
    ToZero = 4,
    ToNegativeInfinity = 5,
    ToPositiveInfinity = 6,
};

// /Script/Engine.ERuntimeVirtualTextureMainPassType
UENUM()
enum class ERuntimeVirtualTextureMainPassType : uint8
{
    Never = 0,
    Exclusive = 1,
    Always = 2,
};

// /Script/Engine.ERuntimeVirtualTextureMaterialType
UENUM()
enum class ERuntimeVirtualTextureMaterialType : uint8
{
    BaseColor = 0,
    BaseColor_Normal_DEPRECATED = 1,
    BaseColor_Normal_Specular = 2,
    BaseColor_Normal_Specular_YCoCg = 3,
    BaseColor_Normal_Specular_Mask_YCoCg = 4,
    WorldHeight = 5,
    Count = 6,
};

// /Script/Engine.ERuntimeVirtualTextureMipValueMode
UENUM()
enum class ERuntimeVirtualTextureMipValueMode : int32
{
    RVTMVM_None = 0,
    RVTMVM_MipLevel = 1,
    RVTMVM_MipBias = 2,
    RVTMVM_MAX = 3,
};

// /Script/Engine.ERuntimeVirtualTextureTextureAddressMode
UENUM()
enum class ERuntimeVirtualTextureTextureAddressMode : int32
{
    RVTTA_Clamp = 0,
    RVTTA_Wrap = 1,
    RVTTA_MAX = 2,
};

// /Script/Engine.ESamplerSourceMode
UENUM()
enum class ESamplerSourceMode : int32
{
    SSM_FromTextureAsset = 0,
    SSM_Wrap_WorldGroupSettings = 1,
    SSM_Clamp_WorldGroupSettings = 2,
};

// /Script/Engine.ESceneCaptureCompositeMode
UENUM()
enum class ESceneCaptureCompositeMode : int32
{
    SCCM_Overwrite = 0,
    SCCM_Additive = 1,
    SCCM_Composite = 2,
};

// /Script/Engine.ESceneCapturePrimitiveRenderMode
UENUM()
enum class ESceneCapturePrimitiveRenderMode : uint8
{
    PRM_LegacySceneCapture = 0,
    PRM_RenderScenePrimitives = 1,
    PRM_UseShowOnlyList = 2,
};

// /Script/Engine.ESceneCaptureSource
UENUM()
enum class ESceneCaptureSource : int32
{
    SCS_SceneColorHDR = 0,
    SCS_SceneColorHDRNoAlpha = 1,
    SCS_FinalColorLDR = 2,
    SCS_SceneColorSceneDepth = 3,
    SCS_SceneDepth = 4,
    SCS_DeviceDepth = 5,
    SCS_Normal = 6,
    SCS_BaseColor = 7,
    SCS_FinalColorHDR = 8,
    SCS_FinalToneCurveHDR = 9,
};

// /Script/Engine.ESceneDepthPriorityGroup
UENUM()
enum class ESceneDepthPriorityGroup : int32
{
    SDPG_World = 0,
    SDPG_Foreground = 1,
    SDPG_MAX = 2,
};

// /Script/Engine.ESceneTextureId
UENUM()
enum class ESceneTextureId : int32
{
    PPI_SceneColor = 0,
    PPI_SceneDepth = 1,
    PPI_DiffuseColor = 2,
    PPI_SpecularColor = 3,
    PPI_SubsurfaceColor = 4,
    PPI_BaseColor = 5,
    PPI_Specular = 6,
    PPI_Metallic = 7,
    PPI_WorldNormal = 8,
    PPI_SeparateTranslucency = 9,
    PPI_Opacity = 10,
    PPI_Roughness = 11,
    PPI_MaterialAO = 12,
    PPI_CustomDepth = 13,
    PPI_PostProcessInput0 = 14,
    PPI_PostProcessInput1 = 15,
    PPI_PostProcessInput2 = 16,
    PPI_PostProcessInput3 = 17,
    PPI_PostProcessInput4 = 18,
    PPI_PostProcessInput5 = 19,
    PPI_PostProcessInput6 = 20,
    PPI_DecalMask = 21,
    PPI_ShadingModelColor = 22,
    PPI_ShadingModelID = 23,
    PPI_AmbientOcclusion = 24,
    PPI_CustomStencil = 25,
    PPI_StoredBaseColor = 26,
    PPI_StoredSpecular = 27,
    PPI_Velocity = 28,
    PPI_WorldTangent = 29,
    PPI_Anisotropy = 30,
};

// /Script/Engine.EScreenOrientation
UENUM()
enum class EScreenOrientation : int32
{
    Unknown = 0,
    Portrait = 1,
    PortraitUpsideDown = 2,
    LandscapeLeft = 3,
    LandscapeRight = 4,
    FaceUp = 5,
    FaceDown = 6,
};

// /Script/Engine.ESendLevelControlMethod
UENUM()
enum class ESendLevelControlMethod : uint8
{
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
};

// /Script/Engine.ESettingsDOF
UENUM()
enum class ESettingsDOF : int32
{
    Full3D = 0,
    YZPlane = 1,
    XZPlane = 2,
    XYPlane = 3,
};

// /Script/Engine.ESettingsLockedAxis
UENUM()
enum class ESettingsLockedAxis : int32
{
    None = 0,
    X = 1,
    Y = 2,
    Z = 3,
    Invalid = 4,
};

// /Script/Engine.EShadowMapFlags
UENUM()
enum class EShadowMapFlags : int32
{
    SMF_None = 0,
    SMF_Streamed = 1,
};

// /Script/Engine.ESkeletalMeshGeoImportVersions
UENUM()
enum class ESkeletalMeshGeoImportVersions : uint8
{
    Before_Versionning = 0,
    SkeletalMeshBuildRefactor = 1,
    VersionPlusOne = 2,
    LatestVersion = 1,
};

// /Script/Engine.ESkeletalMeshSkinningImportVersions
UENUM()
enum class ESkeletalMeshSkinningImportVersions : uint8
{
    Before_Versionning = 0,
    SkeletalMeshBuildRefactor = 1,
    VersionPlusOne = 2,
    LatestVersion = 1,
};

// /Script/Engine.ESkinCacheDefaultBehavior
UENUM()
enum class ESkinCacheDefaultBehavior : uint8
{
    Exclusive = 0,
    Inclusive = 1,
};

// /Script/Engine.ESkinCacheUsage
UENUM()
enum class ESkinCacheUsage : uint8
{
    Auto = 0,
    Disabled = 255,
    Enabled = 1,
};

// /Script/Engine.ESkyAtmosphereTransformMode
UENUM()
enum class ESkyAtmosphereTransformMode : uint8
{
    PlanetTopAtAbsoluteWorldOrigin = 0,
    PlanetTopAtComponentTransform = 1,
    PlanetCenterAtComponentTransform = 2,
};

// /Script/Engine.ESkyLightSourceType
UENUM()
enum class ESkyLightSourceType : int32
{
    SLS_CapturedScene = 0,
    SLS_SpecifiedCubemap = 1,
    SLS_MAX = 2,
};

// /Script/Engine.ESlateGesture
UENUM()
enum class ESlateGesture : uint8
{
    None = 0,
    Scroll = 1,
    Magnify = 2,
    Swipe = 3,
    Rotate = 4,
    LongPress = 5,
};

// /Script/Engine.ESoundDistanceCalc
UENUM()
enum class ESoundDistanceCalc : int32
{
    SOUNDDISTANCE_Normal = 0,
    SOUNDDISTANCE_InfiniteXYPlane = 1,
    SOUNDDISTANCE_InfiniteXZPlane = 2,
    SOUNDDISTANCE_InfiniteYZPlane = 3,
    SOUNDDISTANCE_MAX = 4,
};

// /Script/Engine.ESoundGroup
UENUM()
enum class ESoundGroup : int32
{
    SOUNDGROUP_Default = 0,
    SOUNDGROUP_Effects = 1,
    SOUNDGROUP_UI = 2,
    SOUNDGROUP_Music = 3,
    SOUNDGROUP_Voice = 4,
    SOUNDGROUP_GameSoundGroup1 = 5,
    SOUNDGROUP_GameSoundGroup2 = 6,
    SOUNDGROUP_GameSoundGroup3 = 7,
    SOUNDGROUP_GameSoundGroup4 = 8,
    SOUNDGROUP_GameSoundGroup5 = 9,
    SOUNDGROUP_GameSoundGroup6 = 10,
    SOUNDGROUP_GameSoundGroup7 = 11,
    SOUNDGROUP_GameSoundGroup8 = 12,
    SOUNDGROUP_GameSoundGroup9 = 13,
    SOUNDGROUP_GameSoundGroup10 = 14,
    SOUNDGROUP_GameSoundGroup11 = 15,
    SOUNDGROUP_GameSoundGroup12 = 16,
    SOUNDGROUP_GameSoundGroup13 = 17,
    SOUNDGROUP_GameSoundGroup14 = 18,
    SOUNDGROUP_GameSoundGroup15 = 19,
    SOUNDGROUP_GameSoundGroup16 = 20,
    SOUNDGROUP_GameSoundGroup17 = 21,
    SOUNDGROUP_GameSoundGroup18 = 22,
    SOUNDGROUP_GameSoundGroup19 = 23,
    SOUNDGROUP_GameSoundGroup20 = 24,
};

// /Script/Engine.ESoundSpatializationAlgorithm
UENUM()
enum class ESoundSpatializationAlgorithm : int32
{
    SPATIALIZATION_Default = 0,
    SPATIALIZATION_HRTF = 1,
};

// /Script/Engine.ESoundWaveFFTSize
UENUM()
enum class ESoundWaveFFTSize : uint8
{
    VerySmall_64 = 0,
    Small_256 = 1,
    Medium_512 = 2,
    Large_1024 = 3,
    VeryLarge_2048 = 4,
};

// /Script/Engine.ESoundWaveLoadingBehavior
UENUM()
enum class ESoundWaveLoadingBehavior : uint8
{
    Inherited = 0,
    RetainOnLoad = 1,
    PrimeOnLoad = 2,
    LoadOnDemand = 3,
    ForceInline = 4,
    Uninitialized = 255,
};

// /Script/Engine.ESourceBusChannels
UENUM()
enum class ESourceBusChannels : uint8
{
    Mono = 0,
    Stereo = 1,
};

// /Script/Engine.ESourceBusSendLevelControlMethod
UENUM()
enum class ESourceBusSendLevelControlMethod : uint8
{
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
};

// /Script/Engine.ESpawnActorCollisionHandlingMethod
UENUM()
enum class ESpawnActorCollisionHandlingMethod : uint8
{
    Undefined = 0,
    AlwaysSpawn = 1,
    AdjustIfPossibleButAlwaysSpawn = 2,
    AdjustIfPossibleButDontSpawnIfColliding = 3,
    DontSpawnIfColliding = 4,
};

// /Script/Engine.ESpeedTreeGeometryType
UENUM()
enum class ESpeedTreeGeometryType : int32
{
    STG_Branch = 0,
    STG_Frond = 1,
    STG_Leaf = 2,
    STG_FacingLeaf = 3,
    STG_Billboard = 4,
};

// /Script/Engine.ESpeedTreeLODType
UENUM()
enum class ESpeedTreeLODType : int32
{
    STLOD_Pop = 0,
    STLOD_Smooth = 1,
};

// /Script/Engine.ESpeedTreeWindType
UENUM()
enum class ESpeedTreeWindType : int32
{
    STW_None = 0,
    STW_Fastest = 1,
    STW_Fast = 2,
    STW_Better = 3,
    STW_Best = 4,
    STW_Palm = 5,
    STW_BestPlus = 6,
};

// /Script/Engine.ESplineCoordinateSpace
UENUM()
enum class ESplineCoordinateSpace : int32
{
    Local = 0,
    World = 1,
};

// /Script/Engine.ESplineMeshAxis
UENUM()
enum class ESplineMeshAxis : int32
{
    X = 0,
    Y = 1,
    Z = 2,
};

// /Script/Engine.ESplinePointType
UENUM()
enum class ESplinePointType : int32
{
    Linear = 0,
    Curve = 1,
    Constant = 2,
    CurveClamped = 3,
    CurveCustomTangent = 4,
};

// /Script/Engine.EStandbyType
UENUM()
enum class EStandbyType : int32
{
    STDBY_Rx = 0,
    STDBY_Tx = 1,
    STDBY_BadPing = 2,
    STDBY_MAX = 3,
};

// /Script/Engine.EStaticMeshReductionTerimationCriterion
UENUM()
enum class EStaticMeshReductionTerimationCriterion : uint8
{
    Triangles = 0,
    Vertices = 1,
    Any = 2,
};

// /Script/Engine.EStereoLayerShape
UENUM()
enum class EStereoLayerShape : int32
{
    SLSH_QuadLayer = 0,
    SLSH_CylinderLayer = 1,
    SLSH_CubemapLayer = 2,
    SLSH_EquirectLayer = 3,
    SLSH_MAX = 4,
};

// /Script/Engine.EStereoLayerType
UENUM()
enum class EStereoLayerType : int32
{
    SLT_WorldLocked = 0,
    SLT_TrackerLocked = 1,
    SLT_FaceLocked = 2,
    SLT_MAX = 3,
};

// /Script/Engine.EStreamingVolumeUsage
UENUM()
enum class EStreamingVolumeUsage : int32
{
    SVB_Loading = 0,
    SVB_LoadingAndVisibility = 1,
    SVB_VisibilityBlockingOnLoad = 2,
    SVB_BlockingOnLoad = 3,
    SVB_LoadingNotVisible = 4,
    SVB_MAX = 5,
};

// /Script/Engine.ESubUVBoundingVertexCount
UENUM()
enum class ESubUVBoundingVertexCount : int32
{
    BVC_FourVertices = 0,
    BVC_EightVertices = 1,
};

// /Script/Engine.ESubmixSendMethod
UENUM()
enum class ESubmixSendMethod : uint8
{
    Linear = 0,
    CustomCurve = 1,
    Manual = 2,
};

// /Script/Engine.ESubmixSendStage
UENUM()
enum class ESubmixSendStage : uint8
{
    PostDistanceAttenuation = 0,
    PreDistanceAttenuation = 1,
};

// /Script/Engine.ESuggestProjVelocityTraceOption
UENUM()
enum class ESuggestProjVelocityTraceOption : int32
{
    DoNotTrace = 0,
    TraceFullPath = 1,
    OnlyTraceWhileAscending = 2,
};

// /Script/Engine.ESyncOption
UENUM()
enum class ESyncOption : uint8
{
    Drive = 0,
    Passive = 1,
    Disabled = 2,
};

// /Script/Engine.ETeleportType
UENUM()
enum class ETeleportType : uint8
{
    None = 0,
    TeleportPhysics = 1,
    ResetPhysics = 2,
};

// /Script/Engine.ETemperatureMethod
UENUM()
enum class ETemperatureMethod : int32
{
    TEMP_WhiteBalance = 0,
    TEMP_ColorTemperature = 1,
    TEMP_MAX = 2,
};

// /Script/Engine.ETemperatureSeverityType
UENUM()
enum class ETemperatureSeverityType : uint8
{
    Unknown = 0,
    Good = 1,
    Bad = 2,
    Serious = 3,
    Critical = 4,
    NumSeverities = 5,
};

// /Script/Engine.ETextGender
UENUM()
enum class ETextGender : uint8
{
    Masculine = 0,
    Feminine = 1,
    Neuter = 2,
};

// /Script/Engine.ETextureColorChannel
UENUM()
enum class ETextureColorChannel : int32
{
    TCC_Red = 0,
    TCC_Green = 1,
    TCC_Blue = 2,
    TCC_Alpha = 3,
    TCC_MAX = 4,
};

// /Script/Engine.ETextureCompressionQuality
UENUM()
enum class ETextureCompressionQuality : int32
{
    TCQ_Default = 0,
    TCQ_Lowest = 1,
    TCQ_Low = 2,
    TCQ_Medium = 3,
    TCQ_High = 4,
    TCQ_Highest = 5,
    TCQ_MAX = 6,
};

// /Script/Engine.ETextureDownscaleOptions
UENUM()
enum class ETextureDownscaleOptions : uint8
{
    Default = 0,
    Unfiltered = 1,
    SimpleAverage = 2,
    Sharpen0 = 3,
    Sharpen1 = 4,
    Sharpen2 = 5,
    Sharpen3 = 6,
    Sharpen4 = 7,
    Sharpen5 = 8,
    Sharpen6 = 9,
    Sharpen7 = 10,
    Sharpen8 = 11,
    Sharpen9 = 12,
    Sharpen10 = 13,
};

// /Script/Engine.ETextureLossyCompressionAmount
UENUM()
enum class ETextureLossyCompressionAmount : int32
{
    TLCA_Default = 0,
    TLCA_None = 1,
    TLCA_Lowest = 2,
    TLCA_Low = 3,
    TLCA_Medium = 4,
    TLCA_High = 5,
    TLCA_Highest = 6,
};

// /Script/Engine.ETextureMipCount
UENUM()
enum class ETextureMipCount : int32
{
    TMC_ResidentMips = 0,
    TMC_AllMips = 1,
    TMC_AllMipsBiased = 2,
    TMC_MAX = 3,
};

// /Script/Engine.ETextureMipLoadOptions
UENUM()
enum class ETextureMipLoadOptions : uint8
{
    Default = 0,
    AllMips = 1,
    OnlyFirstMip = 2,
};

// /Script/Engine.ETextureMipValueMode
UENUM()
enum class ETextureMipValueMode : int32
{
    TMVM_None = 0,
    TMVM_MipLevel = 1,
    TMVM_MipBias = 2,
    TMVM_Derivative = 3,
    TMVM_MAX = 4,
};

// /Script/Engine.ETexturePowerOfTwoSetting
UENUM()
enum class ETexturePowerOfTwoSetting : int32
{
    None = 0,
    PadToPowerOfTwo = 1,
    PadToSquarePowerOfTwo = 2,
};

// /Script/Engine.ETextureRenderTargetFormat
UENUM()
enum class ETextureRenderTargetFormat : int32
{
    RTF_R8 = 0,
    RTF_RG8 = 1,
    RTF_RGBA8 = 2,
    RTF_RGBA8_SRGB = 3,
    RTF_R16f = 4,
    RTF_RG16f = 5,
    RTF_RGBA16f = 6,
    RTF_R32f = 7,
    RTF_RG32f = 8,
    RTF_RGBA32f = 9,
    RTF_RGB10A2 = 10,
};

// /Script/Engine.ETextureSamplerFilter
UENUM()
enum class ETextureSamplerFilter : uint8
{
    Point = 0,
    Bilinear = 1,
    Trilinear = 2,
    AnisotropicPoint = 3,
    AnisotropicLinear = 4,
};

// /Script/Engine.ETextureSizingType
UENUM()
enum class ETextureSizingType : int32
{
    TextureSizingType_UseSingleTextureSize = 0,
    TextureSizingType_UseAutomaticBiasedSizes = 1,
    TextureSizingType_UseManualOverrideTextureSize = 2,
    TextureSizingType_UseSimplygonAutomaticSizing = 3,
    TextureSizingType_MAX = 4,
};

// /Script/Engine.ETextureSourceArtType
UENUM()
enum class ETextureSourceArtType : int32
{
    TSAT_Uncompressed = 0,
    TSAT_PNGCompressed = 1,
    TSAT_DDSFile = 2,
    TSAT_MAX = 3,
};

// /Script/Engine.ETextureSourceFormat
UENUM()
enum class ETextureSourceFormat : int32
{
    TSF_Invalid = 0,
    TSF_G8 = 1,
    TSF_BGRA8 = 2,
    TSF_BGRE8 = 3,
    TSF_RGBA16 = 4,
    TSF_RGBA16F = 5,
    TSF_RGBA8 = 6,
    TSF_RGBE8 = 7,
    TSF_G16 = 8,
    TSF_MAX = 9,
};

// /Script/Engine.ETickingGroup
UENUM()
enum class ETickingGroup : int32
{
    TG_PrePhysics = 0,
    TG_StartPhysics = 1,
    TG_DuringPhysics = 2,
    TG_EndPhysics = 3,
    TG_PostPhysics = 4,
    TG_PostUpdateWork = 5,
    TG_LastDemotable = 6,
    TG_NewlySpawned = 7,
    TG_MAX = 8,
};

// /Script/Engine.ETimeStretchCurveMapping
UENUM()
enum class ETimeStretchCurveMapping : uint8
{
    T_Original = 0,
    T_TargetMin = 1,
    T_TargetMax = 2,
    MAX = 3,
};

// /Script/Engine.ETimecodeProviderSynchronizationState
UENUM()
enum class ETimecodeProviderSynchronizationState : int32
{
    Closed = 0,
    Error = 1,
    Synchronized = 2,
    Synchronizing = 3,
};

// /Script/Engine.ETimelineDirection
UENUM()
enum class ETimelineDirection : int32
{
    Forward = 0,
    Backward = 1,
};

// /Script/Engine.ETimelineLengthMode
UENUM()
enum class ETimelineLengthMode : int32
{
    TL_TimelineLength = 0,
    TL_LastKeyFrame = 1,
};

// /Script/Engine.ETimelineSigType
UENUM()
enum class ETimelineSigType : int32
{
    ETS_EventSignature = 0,
    ETS_FloatSignature = 1,
    ETS_VectorSignature = 2,
    ETS_LinearColorSignature = 3,
    ETS_InvalidSignature = 4,
    ETS_MAX = 5,
};

// /Script/Engine.ETraceTypeQuery
UENUM()
enum class ETraceTypeQuery : int32
{
    TraceTypeQuery1 = 0,
    TraceTypeQuery2 = 1,
    TraceTypeQuery3 = 2,
    TraceTypeQuery4 = 3,
    TraceTypeQuery5 = 4,
    TraceTypeQuery6 = 5,
    TraceTypeQuery7 = 6,
    TraceTypeQuery8 = 7,
    TraceTypeQuery9 = 8,
    TraceTypeQuery10 = 9,
    TraceTypeQuery11 = 10,
    TraceTypeQuery12 = 11,
    TraceTypeQuery13 = 12,
    TraceTypeQuery14 = 13,
    TraceTypeQuery15 = 14,
    TraceTypeQuery16 = 15,
    TraceTypeQuery17 = 16,
    TraceTypeQuery18 = 17,
    TraceTypeQuery19 = 18,
    TraceTypeQuery20 = 19,
    TraceTypeQuery21 = 20,
    TraceTypeQuery22 = 21,
    TraceTypeQuery23 = 22,
    TraceTypeQuery24 = 23,
    TraceTypeQuery25 = 24,
    TraceTypeQuery26 = 25,
    TraceTypeQuery27 = 26,
    TraceTypeQuery28 = 27,
    TraceTypeQuery29 = 28,
    TraceTypeQuery30 = 29,
    TraceTypeQuery31 = 30,
    TraceTypeQuery32 = 31,
    TraceTypeQuery_MAX = 32,
};

// /Script/Engine.ETrackActiveCondition
UENUM()
enum class ETrackActiveCondition : int32
{
    ETAC_Always = 0,
    ETAC_GoreEnabled = 1,
    ETAC_GoreDisabled = 2,
    ETAC_MAX = 3,
};

// /Script/Engine.ETrackToggleAction
UENUM()
enum class ETrackToggleAction : int32
{
    ETTA_Off = 0,
    ETTA_On = 1,
    ETTA_Toggle = 2,
    ETTA_Trigger = 3,
    ETTA_MAX = 4,
};

// /Script/Engine.ETrail2SourceMethod
UENUM()
enum class ETrail2SourceMethod : int32
{
    PET2SRCM_Default = 0,
    PET2SRCM_Particle = 1,
    PET2SRCM_Actor = 2,
    PET2SRCM_MAX = 3,
};

// /Script/Engine.ETrailWidthMode
UENUM()
enum class ETrailWidthMode : int32
{
    ETrailWidthMode_FromCentre = 0,
    ETrailWidthMode_FromFirst = 1,
    ETrailWidthMode_FromSecond = 2,
};

// /Script/Engine.ETrailsRenderAxisOption
UENUM()
enum class ETrailsRenderAxisOption : int32
{
    Trails_CameraUp = 0,
    Trails_SourceUp = 1,
    Trails_WorldUp = 2,
    Trails_MAX = 3,
};

// /Script/Engine.ETransitionBlendMode
UENUM()
enum class ETransitionBlendMode : int32
{
    TBM_Linear = 0,
    TBM_Cubic = 1,
};

// /Script/Engine.ETransitionLogicType
UENUM()
enum class ETransitionLogicType : int32
{
    TLT_StandardBlend = 0,
    TLT_Inertialization = 1,
    TLT_Custom = 2,
};

// /Script/Engine.ETransitionType
UENUM()
enum class ETransitionType : uint8
{
    None = 0,
    Paused = 1,
    Loading = 2,
    Saving = 3,
    Connecting = 4,
    Precaching = 5,
    WaitingToConnect = 6,
    MAX = 7,
};

// /Script/Engine.ETranslucencyLightingMode
UENUM()
enum class ETranslucencyLightingMode : int32
{
    TLM_VolumetricNonDirectional = 0,
    TLM_VolumetricDirectional = 1,
    TLM_VolumetricPerVertexNonDirectional = 2,
    TLM_VolumetricPerVertexDirectional = 3,
    TLM_Surface = 4,
    TLM_SurfacePerPixelLighting = 5,
    TLM_MAX = 6,
};

// /Script/Engine.ETranslucencyType
UENUM()
enum class ETranslucencyType : uint8
{
    Raster = 0,
    RayTracing = 1,
};

// /Script/Engine.ETranslucentSortPolicy
UENUM()
enum class ETranslucentSortPolicy : int32
{
    SortByDistance = 0,
    SortByProjectedZ = 1,
    SortAlongAxis = 2,
};

// /Script/Engine.ETravelFailure
UENUM()
enum class ETravelFailure : int32
{
    NoLevel = 0,
    LoadMapFailure = 1,
    InvalidURL = 2,
    PackageMissing = 3,
    PackageVersion = 4,
    NoDownload = 5,
    TravelFailure = 6,
    CheatCommands = 7,
    PendingNetGameCreateFailure = 8,
    CloudSaveFailure = 9,
    ServerTravelFailure = 10,
    ClientTravelFailure = 11,
};

// /Script/Engine.ETravelType
UENUM()
enum class ETravelType : int32
{
    TRAVEL_Absolute = 0,
    TRAVEL_Partial = 1,
    TRAVEL_Relative = 2,
    TRAVEL_MAX = 3,
};

// /Script/Engine.ETwitterIntegrationDelegate
UENUM()
enum class ETwitterIntegrationDelegate : int32
{
    TID_AuthorizeComplete = 0,
    TID_TweetUIComplete = 1,
    TID_RequestComplete = 2,
    TID_MAX = 3,
};

// /Script/Engine.ETwitterRequestMethod
UENUM()
enum class ETwitterRequestMethod : int32
{
    TRM_Get = 0,
    TRM_Post = 1,
    TRM_Delete = 2,
    TRM_MAX = 3,
};

// /Script/Engine.ETypeAdvanceAnim
UENUM()
enum class ETypeAdvanceAnim : int32
{
    ETAA_Default = 0,
    ETAA_Finished = 1,
    ETAA_Looped = 2,
};

// /Script/Engine.EUIScalingRule
UENUM()
enum class EUIScalingRule : uint8
{
    ShortestSide = 0,
    LongestSide = 1,
    Horizontal = 2,
    Vertical = 3,
    ScaleToFit = 4,
    Custom = 5,
};

// /Script/Engine.EUVOutput
UENUM()
enum class EUVOutput : uint8
{
    DoNotOutputChannel = 0,
    OutputChannel = 1,
};

// /Script/Engine.EUpdateRateShiftBucket
UENUM()
enum class EUpdateRateShiftBucket : uint8
{
    ShiftBucket0 = 0,
    ShiftBucket1 = 1,
    ShiftBucket2 = 2,
    ShiftBucket3 = 3,
    ShiftBucket4 = 4,
    ShiftBucket5 = 5,
    ShiftBucketMax = 6,
};

// /Script/Engine.EUserDefinedStructureStatus
UENUM()
enum class EUserDefinedStructureStatus : int32
{
    UDSS_UpToDate = 0,
    UDSS_Dirty = 1,
    UDSS_Error = 2,
    UDSS_Duplicate = 3,
    UDSS_MAX = 4,
};

// /Script/Engine.EVectorFieldConstructionOp
UENUM()
enum class EVectorFieldConstructionOp : int32
{
    VFCO_Extrude = 0,
    VFCO_Revolve = 1,
    VFCO_MAX = 2,
};

// /Script/Engine.EVectorNoiseFunction
UENUM()
enum class EVectorNoiseFunction : int32
{
    VNF_CellnoiseALU = 0,
    VNF_VectorALU = 1,
    VNF_GradientALU = 2,
    VNF_CurlALU = 3,
    VNF_VoronoiALU = 4,
    VNF_MAX = 5,
};

// /Script/Engine.EVectorQuantization
UENUM()
enum class EVectorQuantization : uint8
{
    RoundWholeNumber = 0,
    RoundOneDecimal = 1,
    RoundTwoDecimals = 2,
};

// /Script/Engine.EVertexOffsetUsageType
UENUM()
enum class EVertexOffsetUsageType : uint8
{
    None = 0,
    PreSkinningOffset = 1,
    PostSkinningOffset = 2,
};

// /Script/Engine.EVertexPaintAxis
UENUM()
enum class EVertexPaintAxis : uint8
{
    X = 0,
    Y = 1,
    Z = 2,
};

// /Script/Engine.EVerticalTextAligment
UENUM()
enum class EVerticalTextAligment : int32
{
    EVRTA_TextTop = 0,
    EVRTA_TextCenter = 1,
    EVRTA_TextBottom = 2,
    EVRTA_QuadTop = 3,
};

// /Script/Engine.EViewModeIndex
UENUM()
enum class EViewModeIndex : int32
{
    VMI_BrushWireframe = 0,
    VMI_Wireframe = 1,
    VMI_Unlit = 2,
    VMI_Lit = 3,
    VMI_Lit_DetailLighting = 4,
    VMI_LightingOnly = 5,
    VMI_LightComplexity = 6,
    VMI_ShaderComplexity = 8,
    VMI_LightmapDensity = 9,
    VMI_LitLightmapDensity = 10,
    VMI_ReflectionOverride = 11,
    VMI_VisualizeBuffer = 12,
    VMI_StationaryLightOverlap = 14,
    VMI_CollisionPawn = 15,
    VMI_CollisionVisibility = 16,
    VMI_LODColoration = 18,
    VMI_QuadOverdraw = 19,
    VMI_PrimitiveDistanceAccuracy = 20,
    VMI_MeshUVDensityAccuracy = 21,
    VMI_ShaderComplexityWithQuadOverdraw = 22,
    VMI_HLODColoration = 23,
    VMI_GroupLODColoration = 24,
    VMI_MaterialTextureScaleAccuracy = 25,
    VMI_RequiredTextureResolution = 26,
    VMI_PathTracing = 27,
    VMI_RayTracingDebug = 28,
    VMI_Max = 29,
    VMI_Unknown = 255,
};

// /Script/Engine.EViewTargetBlendFunction
UENUM()
enum class EViewTargetBlendFunction : int32
{
    VTBlend_Linear = 0,
    VTBlend_Cubic = 1,
    VTBlend_EaseIn = 2,
    VTBlend_EaseOut = 3,
    VTBlend_EaseInOut = 4,
    VTBlend_PreBlended = 5,
    VTBlend_MAX = 6,
};

// /Script/Engine.EVirtualizationMode
UENUM()
enum class EVirtualizationMode : uint8
{
    Disabled = 0,
    PlayWhenSilent = 1,
    Restart = 2,
};

// /Script/Engine.EVisibilityAggressiveness
UENUM()
enum class EVisibilityAggressiveness : int32
{
    VIS_LeastAggressive = 0,
    VIS_ModeratelyAggressive = 1,
    VIS_MostAggressive = 2,
    VIS_Max = 3,
};

// /Script/Engine.EVisibilityBasedAnimTickOption
UENUM()
enum class EVisibilityBasedAnimTickOption : uint8
{
    AlwaysTickPoseAndRefreshBones = 0,
    AlwaysTickPose = 1,
    OnlyTickMontagesWhenNotRendered = 2,
    OnlyTickPoseWhenRendered = 3,
};

// /Script/Engine.EVisibilityTrackAction
UENUM()
enum class EVisibilityTrackAction : int32
{
    EVTA_Hide = 0,
    EVTA_Show = 1,
    EVTA_Toggle = 2,
    EVTA_MAX = 3,
};

// /Script/Engine.EVisibilityTrackCondition
UENUM()
enum class EVisibilityTrackCondition : int32
{
    EVTC_Always = 0,
    EVTC_GoreEnabled = 1,
    EVTC_GoreDisabled = 2,
    EVTC_MAX = 3,
};

// /Script/Engine.EVoiceSampleRate
UENUM()
enum class EVoiceSampleRate : int32
{
    Low16000Hz = 16000,
    Normal24000Hz = 24000,
};

// /Script/Engine.EVolumeLightingMethod
UENUM()
enum class EVolumeLightingMethod : int32
{
    VLM_VolumetricLightmap = 0,
    VLM_SparseVolumeLightingSamples = 1,
};

// /Script/Engine.EWalkableSlopeBehavior
UENUM()
enum class EWalkableSlopeBehavior : int32
{
    WalkableSlope_Default = 0,
    WalkableSlope_Increase = 1,
    WalkableSlope_Decrease = 2,
    WalkableSlope_Unwalkable = 3,
    WalkableSlope_Max = 4,
};

// /Script/Engine.EWindSourceType
UENUM()
enum class EWindSourceType : uint8
{
    Directional = 0,
    Point = 1,
};

// /Script/Engine.EWindowMode
UENUM()
enum class EWindowMode : int32
{
    Fullscreen = 0,
    WindowedFullscreen = 1,
    Windowed = 2,
};

// /Script/Engine.EWindowTitleBarMode
UENUM()
enum class EWindowTitleBarMode : uint8
{
    Overlay = 0,
    VerticalBox = 1,
};

// /Script/Engine.EWorldPositionIncludedOffsets
UENUM()
enum class EWorldPositionIncludedOffsets : int32
{
    WPT_Default = 0,
    WPT_ExcludeAllShaderOffsets = 1,
    WPT_CameraRelative = 2,
    WPT_CameraRelativeNoOffsets = 3,
    WPT_MAX = 4,
};

// /Script/Engine.FDataDrivenCVarType
UENUM()
enum class FDataDrivenCVarType : uint8
{
    CVarFloat = 0,
    CVarInt = 1,
    CVarBool = 2,
};

// /Script/Engine.FNavigationSystemRunMode
UENUM()
enum class FNavigationSystemRunMode : uint8
{
    InvalidMode = 0,
    GameMode = 1,
    EditorMode = 2,
    SimulationMode = 3,
    PIEMode = 4,
    InferFromWorldMode = 5,
};

// /Script/Engine.ModulationParamMode
UENUM()
enum class ModulationParamMode : int32
{
    MPM_Normal = 0,
    MPM_Abs = 1,
    MPM_Direct = 2,
    MPM_MAX = 3,
};

// /Script/Engine.ParticleReplayState
UENUM()
enum class ParticleReplayState : int32
{
    PRS_Disabled = 0,
    PRS_Capturing = 1,
    PRS_Replaying = 2,
    PRS_MAX = 3,
};

// /Script/Engine.ParticleSystemLODMethod
UENUM()
enum class ParticleSystemLODMethod : int32
{
    PARTICLESYSTEMLODMETHOD_Automatic = 0,
    PARTICLESYSTEMLODMETHOD_DirectSet = 1,
    PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
};

// /Script/Engine.ReverbPreset
UENUM()
enum class ReverbPreset : int32
{
    REVERB_Default = 0,
    REVERB_Bathroom = 1,
    REVERB_StoneRoom = 2,
    REVERB_Auditorium = 3,
    REVERB_ConcertHall = 4,
    REVERB_Cave = 5,
    REVERB_Hallway = 6,
    REVERB_StoneCorridor = 7,
    REVERB_Alley = 8,
    REVERB_Forest = 9,
    REVERB_City = 10,
    REVERB_Mountains = 11,
    REVERB_Quarry = 12,
    REVERB_Plain = 13,
    REVERB_ParkingLot = 14,
    REVERB_SewerPipe = 15,
    REVERB_Underwater = 16,
    REVERB_SmallRoom = 17,
    REVERB_MediumRoom = 18,
    REVERB_LargeRoom = 19,
    REVERB_MediumHall = 20,
    REVERB_LargeHall = 21,
    REVERB_Plate = 22,
    REVERB_MAX = 23,
};

// /Script/Engine.SkeletalMeshOptimizationImportance
UENUM()
enum class SkeletalMeshOptimizationImportance : int32
{
    SMOI_Off = 0,
    SMOI_Lowest = 1,
    SMOI_Low = 2,
    SMOI_Normal = 3,
    SMOI_High = 4,
    SMOI_Highest = 5,
    SMOI_MAX = 6,
};

// /Script/Engine.SkeletalMeshOptimizationType
UENUM()
enum class SkeletalMeshOptimizationType : int32
{
    SMOT_NumOfTriangles = 0,
    SMOT_MaxDeviation = 1,
    SMOT_TriangleOrDeviation = 2,
    SMOT_MAX = 3,
};

// /Script/Engine.SkeletalMeshTerminationCriterion
UENUM()
enum class SkeletalMeshTerminationCriterion : int32
{
    SMTC_NumOfTriangles = 0,
    SMTC_NumOfVerts = 1,
    SMTC_TriangleOrVert = 2,
    SMTC_AbsNumOfTriangles = 3,
    SMTC_AbsNumOfVerts = 4,
    SMTC_AbsTriangleOrVert = 5,
    SMTC_MAX = 6,
};

// /Script/Engine.TextureAddress
UENUM()
enum class TextureAddress : int32
{
    TA_Wrap = 0,
    TA_Clamp = 1,
    TA_Mirror = 2,
    TA_MAX = 3,
};

// /Script/Engine.TextureCompressionSettings
UENUM()
enum class TextureCompressionSettings : int32
{
    TC_Default = 0,
    TC_Normalmap = 1,
    TC_Masks = 2,
    TC_Grayscale = 3,
    TC_Displacementmap = 4,
    TC_VectorDisplacementmap = 5,
    TC_HDR = 6,
    TC_EditorIcon = 7,
    TC_Alpha = 8,
    TC_DistanceFieldFont = 9,
    TC_HDR_Compressed = 10,
    TC_BC7 = 11,
    TC_HalfFloat = 12,
    TC_EncodedReflectionCapture = 13,
    TC_MAX = 14,
};

// /Script/Engine.TextureFilter
UENUM()
enum class TextureFilter : int32
{
    TF_Nearest = 0,
    TF_Bilinear = 1,
    TF_Trilinear = 2,
    TF_Default = 3,
    TF_MAX = 4,
};

// /Script/Engine.TextureGroup
UENUM()
enum class TextureGroup : int32
{
    TEXTUREGROUP_World = 0,
    TEXTUREGROUP_WorldNormalMap = 1,
    TEXTUREGROUP_WorldSpecular = 2,
    TEXTUREGROUP_Character = 3,
    TEXTUREGROUP_CharacterNormalMap = 4,
    TEXTUREGROUP_CharacterSpecular = 5,
    TEXTUREGROUP_Weapon = 6,
    TEXTUREGROUP_WeaponNormalMap = 7,
    TEXTUREGROUP_WeaponSpecular = 8,
    TEXTUREGROUP_Vehicle = 9,
    TEXTUREGROUP_VehicleNormalMap = 10,
    TEXTUREGROUP_VehicleSpecular = 11,
    TEXTUREGROUP_Cinematic = 12,
    TEXTUREGROUP_Effects = 13,
    TEXTUREGROUP_EffectsNotFiltered = 14,
    TEXTUREGROUP_Skybox = 15,
    TEXTUREGROUP_UI = 16,
    TEXTUREGROUP_Lightmap = 17,
    TEXTUREGROUP_RenderTarget = 18,
    TEXTUREGROUP_MobileFlattened = 19,
    TEXTUREGROUP_ProcBuilding_Face = 20,
    TEXTUREGROUP_ProcBuilding_LightMap = 21,
    TEXTUREGROUP_Shadowmap = 22,
    TEXTUREGROUP_ColorLookupTable = 23,
    TEXTUREGROUP_Terrain_Heightmap = 24,
    TEXTUREGROUP_Terrain_Weightmap = 25,
    TEXTUREGROUP_Bokeh = 26,
    TEXTUREGROUP_IESLightProfile = 27,
    TEXTUREGROUP_Pixels2D = 28,
    TEXTUREGROUP_HierarchicalLOD = 29,
    TEXTUREGROUP_Impostor = 30,
    TEXTUREGROUP_ImpostorNormalDepth = 31,
    TEXTUREGROUP_8BitData = 32,
    TEXTUREGROUP_16BitData = 33,
    TEXTUREGROUP_Project01 = 34,
    TEXTUREGROUP_Project02 = 35,
    TEXTUREGROUP_Project03 = 36,
    TEXTUREGROUP_Project04 = 37,
    TEXTUREGROUP_Project05 = 38,
    TEXTUREGROUP_Project06 = 39,
    TEXTUREGROUP_Project07 = 40,
    TEXTUREGROUP_Project08 = 41,
    TEXTUREGROUP_Project09 = 42,
    TEXTUREGROUP_Project10 = 43,
    TEXTUREGROUP_Project11 = 44,
    TEXTUREGROUP_Project12 = 45,
    TEXTUREGROUP_Project13 = 46,
    TEXTUREGROUP_Project14 = 47,
    TEXTUREGROUP_Project15 = 48,
    TEXTUREGROUP_MAX = 49,
};

// /Script/Engine.TextureMipGenSettings
UENUM()
enum class TextureMipGenSettings : int32
{
    TMGS_FromTextureGroup = 0,
    TMGS_SimpleAverage = 1,
    TMGS_Sharpen0 = 2,
    TMGS_Sharpen1 = 3,
    TMGS_Sharpen2 = 4,
    TMGS_Sharpen3 = 5,
    TMGS_Sharpen4 = 6,
    TMGS_Sharpen5 = 7,
    TMGS_Sharpen6 = 8,
    TMGS_Sharpen7 = 9,
    TMGS_Sharpen8 = 10,
    TMGS_Sharpen9 = 11,
    TMGS_Sharpen10 = 12,
    TMGS_NoMipmaps = 13,
    TMGS_LeaveExistingMips = 14,
    TMGS_Blur1 = 15,
    TMGS_Blur2 = 16,
    TMGS_Blur3 = 17,
    TMGS_Blur4 = 18,
    TMGS_Blur5 = 19,
    TMGS_Unfiltered = 20,
    TMGS_MAX = 21,
};
