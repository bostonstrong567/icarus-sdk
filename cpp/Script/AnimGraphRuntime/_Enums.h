// /Script/AnimGraphRuntime.AnimPhysAngularConstraintType
UENUM()
enum class AnimPhysAngularConstraintType : uint8
{
    Angular = 0,
    Cone = 1,
};

// /Script/AnimGraphRuntime.AnimPhysLinearConstraintType
UENUM()
enum class AnimPhysLinearConstraintType : uint8
{
    Free = 0,
    Limited = 1,
};

// /Script/AnimGraphRuntime.AnimPhysSimSpaceType
UENUM()
enum class AnimPhysSimSpaceType : uint8
{
    Component = 0,
    Actor = 1,
    World = 2,
    RootRelative = 3,
    BoneRelative = 4,
};

// /Script/AnimGraphRuntime.CopyBoneDeltaMode
UENUM()
enum class CopyBoneDeltaMode : uint8
{
    Accumulate = 0,
    Copy = 1,
};

// /Script/AnimGraphRuntime.EBlendListTransitionType
UENUM()
enum class EBlendListTransitionType : uint8
{
    StandardBlend = 0,
    Inertialization = 1,
};

// /Script/AnimGraphRuntime.EBoneModificationMode
UENUM()
enum class EBoneModificationMode : int32
{
    BMM_Ignore = 0,
    BMM_Replace = 1,
    BMM_Additive = 2,
};

// /Script/AnimGraphRuntime.EConstraintOffsetOption
UENUM()
enum class EConstraintOffsetOption : uint8
{
    None = 0,
    Offset_RefPose = 1,
};

// /Script/AnimGraphRuntime.EDrivenBoneModificationMode
UENUM()
enum class EDrivenBoneModificationMode : uint8
{
    AddToInput = 0,
    ReplaceComponent = 1,
    AddToRefPose = 2,
};

// /Script/AnimGraphRuntime.EDrivenDestinationMode
UENUM()
enum class EDrivenDestinationMode : uint8
{
    Bone = 0,
    MorphTarget = 1,
    MaterialParameter = 2,
};

// /Script/AnimGraphRuntime.EEasingFuncType
UENUM()
enum class EEasingFuncType : uint8
{
    Linear = 0,
    Sinusoidal = 1,
    Cubic = 2,
    QuadraticInOut = 3,
    CubicInOut = 4,
    HermiteCubic = 5,
    QuarticInOut = 6,
    QuinticInOut = 7,
    CircularIn = 8,
    CircularOut = 9,
    CircularInOut = 10,
    ExpIn = 11,
    ExpOut = 12,
    ExpInOut = 13,
    CustomCurve = 14,
};

// /Script/AnimGraphRuntime.EInterpolationBlend
UENUM()
enum class EInterpolationBlend : int32
{
    Linear = 0,
    Cubic = 1,
    Sinusoidal = 2,
    EaseInOutExponent2 = 3,
    EaseInOutExponent3 = 4,
    EaseInOutExponent4 = 5,
    EaseInOutExponent5 = 6,
    MAX = 7,
};

// /Script/AnimGraphRuntime.EModifyCurveApplyMode
UENUM()
enum class EModifyCurveApplyMode : uint8
{
    Add = 0,
    Scale = 1,
    Blend = 2,
    WeightedMovingAverage = 3,
    RemapCurve = 4,
};

// /Script/AnimGraphRuntime.EPoseDriverOutput
UENUM()
enum class EPoseDriverOutput : uint8
{
    DrivePoses = 0,
    DriveCurves = 1,
};

// /Script/AnimGraphRuntime.EPoseDriverSource
UENUM()
enum class EPoseDriverSource : uint8
{
    Rotation = 0,
    Translation = 1,
};

// /Script/AnimGraphRuntime.EPoseDriverType
UENUM()
enum class EPoseDriverType : uint8
{
    SwingAndTwist = 0,
    SwingOnly = 1,
    Translation = 2,
};

// /Script/AnimGraphRuntime.ERBFDistanceMethod
UENUM()
enum class ERBFDistanceMethod : uint8
{
    Euclidean = 0,
    Quaternion = 1,
    SwingAngle = 2,
    TwistAngle = 3,
    DefaultMethod = 4,
};

// /Script/AnimGraphRuntime.ERBFFunctionType
UENUM()
enum class ERBFFunctionType : uint8
{
    Gaussian = 0,
    Exponential = 1,
    Linear = 2,
    Cubic = 3,
    Quintic = 4,
    DefaultFunction = 5,
};

// /Script/AnimGraphRuntime.ERBFNormalizeMethod
UENUM()
enum class ERBFNormalizeMethod : uint8
{
    OnlyNormalizeAboveOne = 0,
    AlwaysNormalize = 1,
    NormalizeWithinMedian = 2,
    NoNormalization = 3,
};

// /Script/AnimGraphRuntime.ERBFSolverType
UENUM()
enum class ERBFSolverType : uint8
{
    Additive = 0,
    Interpolative = 1,
};

// /Script/AnimGraphRuntime.ERefPoseType
UENUM()
enum class ERefPoseType : int32
{
    EIT_LocalSpace = 0,
    EIT_Additive = 1,
};

// /Script/AnimGraphRuntime.ERotationComponent
UENUM()
enum class ERotationComponent : uint8
{
    EulerX = 0,
    EulerY = 1,
    EulerZ = 2,
    QuaternionAngle = 3,
    SwingAngle = 4,
    TwistAngle = 5,
};

// /Script/AnimGraphRuntime.EScaleChainInitialLength
UENUM()
enum class EScaleChainInitialLength : uint8
{
    FixedDefaultLengthValue = 0,
    Distance = 1,
    ChainLength = 2,
};

// /Script/AnimGraphRuntime.ESequenceEvalReinit
UENUM()
enum class ESequenceEvalReinit : int32
{
    NoReset = 0,
    StartPosition = 1,
    ExplicitTime = 2,
};

// /Script/AnimGraphRuntime.ESimulationSpace
UENUM()
enum class ESimulationSpace : uint8
{
    ComponentSpace = 0,
    WorldSpace = 1,
    BaseBoneSpace = 2,
};

// /Script/AnimGraphRuntime.ESnapshotSourceMode
UENUM()
enum class ESnapshotSourceMode : uint8
{
    NamedSnapshot = 0,
    SnapshotPin = 1,
};

// /Script/AnimGraphRuntime.ESphericalLimitType
UENUM()
enum class ESphericalLimitType : uint8
{
    Inner = 0,
    Outer = 1,
};

// /Script/AnimGraphRuntime.ESplineBoneAxis
UENUM()
enum class ESplineBoneAxis : uint8
{
    None = 0,
    X = 1,
    Y = 2,
    Z = 3,
};
