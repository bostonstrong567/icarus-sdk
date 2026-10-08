// /Script/ControlRig.EAimMode
UENUM()
enum class EAimMode : uint8
{
    AimAtTarget = 0,
    OrientToTarget = 1,
    MAX = 2,
};

// /Script/ControlRig.EApplyTransformMode
UENUM()
enum class EApplyTransformMode : uint8
{
    Override = 0,
    Additive = 1,
    Max = 2,
};

// /Script/ControlRig.EBoneGetterSetterMode
UENUM()
enum class EBoneGetterSetterMode : uint8
{
    LocalSpace = 0,
    GlobalSpace = 1,
    Max = 2,
};

// /Script/ControlRig.ECRSimConstraintType
UENUM()
enum class ECRSimConstraintType : uint8
{
    Distance = 0,
    DistanceFromA = 1,
    DistanceFromB = 2,
    Plane = 3,
};

// /Script/ControlRig.ECRSimPointForceType
UENUM()
enum class ECRSimPointForceType : uint8
{
    Direction = 0,
};

// /Script/ControlRig.ECRSimPointIntegrateType
UENUM()
enum class ECRSimPointIntegrateType : uint8
{
    Verlet = 0,
    SemiExplicitEuler = 1,
};

// /Script/ControlRig.ECRSimSoftCollisionType
UENUM()
enum class ECRSimSoftCollisionType : uint8
{
    Plane = 0,
    Sphere = 1,
    Cone = 2,
};

// /Script/ControlRig.EControlRigAnimEasingType
UENUM()
enum class EControlRigAnimEasingType : uint8
{
    Linear = 0,
    QuadraticEaseIn = 1,
    QuadraticEaseOut = 2,
    QuadraticEaseInOut = 3,
    CubicEaseIn = 4,
    CubicEaseOut = 5,
    CubicEaseInOut = 6,
    QuarticEaseIn = 7,
    QuarticEaseOut = 8,
    QuarticEaseInOut = 9,
    QuinticEaseIn = 10,
    QuinticEaseOut = 11,
    QuinticEaseInOut = 12,
    SineEaseIn = 13,
    SineEaseOut = 14,
    SineEaseInOut = 15,
    CircularEaseIn = 16,
    CircularEaseOut = 17,
    CircularEaseInOut = 18,
    ExponentialEaseIn = 19,
    ExponentialEaseOut = 20,
    ExponentialEaseInOut = 21,
    ElasticEaseIn = 22,
    ElasticEaseOut = 23,
    ElasticEaseInOut = 24,
    BackEaseIn = 25,
    BackEaseOut = 26,
    BackEaseInOut = 27,
    BounceEaseIn = 28,
    BounceEaseOut = 29,
    BounceEaseInOut = 30,
};

// /Script/ControlRig.EControlRigClampSpatialMode
UENUM()
enum class EControlRigClampSpatialMode : int32
{
    Plane = 0,
    Cylinder = 1,
    Sphere = 2,
};

// /Script/ControlRig.EControlRigComponentMapDirection
UENUM()
enum class EControlRigComponentMapDirection : uint8
{
    Input = 0,
    Output = 1,
};

// /Script/ControlRig.EControlRigComponentSpace
UENUM()
enum class EControlRigComponentSpace : uint8
{
    WorldSpace = 0,
    ActorSpace = 1,
    ComponentSpace = 2,
    RigSpace = 3,
    LocalSpace = 4,
    Max = 5,
};

// /Script/ControlRig.EControlRigCurveAlignment
UENUM()
enum class EControlRigCurveAlignment : uint8
{
    Front = 0,
    Stretched = 1,
};

// /Script/ControlRig.EControlRigDrawHierarchyMode
UENUM()
enum class EControlRigDrawHierarchyMode : int32
{
    Axes = 0,
    Max = 1,
};

// /Script/ControlRig.EControlRigDrawSettings
UENUM()
enum class EControlRigDrawSettings : int32
{
    Points = 0,
    Lines = 1,
    LineStrip = 2,
    DynamicMesh = 3,
};

// /Script/ControlRig.EControlRigFKRigExecuteMode
UENUM()
enum class EControlRigFKRigExecuteMode : uint8
{
    Replace = 0,
    Additive = 1,
    Max = 2,
};

// /Script/ControlRig.EControlRigModifyBoneMode
UENUM()
enum class EControlRigModifyBoneMode : uint8
{
    OverrideLocal = 0,
    OverrideGlobal = 1,
    AdditiveLocal = 2,
    AdditiveGlobal = 3,
    Max = 4,
};

// /Script/ControlRig.EControlRigRotationOrder
UENUM()
enum class EControlRigRotationOrder : uint8
{
    XYZ = 0,
    XZY = 1,
    YXZ = 2,
    YZX = 3,
    ZXY = 4,
    ZYX = 5,
};

// /Script/ControlRig.EControlRigSetKey
UENUM()
enum class EControlRigSetKey : uint8
{
    DoNotCare = 0,
    Always = 1,
    Never = 2,
};

// /Script/ControlRig.EControlRigState
UENUM()
enum class EControlRigState : uint8
{
    Init = 0,
    Update = 1,
    Invalid = 2,
};

// /Script/ControlRig.EControlRigVectorKind
UENUM()
enum class EControlRigVectorKind : uint8
{
    Direction = 0,
    Location = 1,
};

// /Script/ControlRig.ERBFKernelType
UENUM()
enum class ERBFKernelType : uint8
{
    Gaussian = 0,
    Exponential = 1,
    Linear = 2,
    Cubic = 3,
    Quintic = 4,
};

// /Script/ControlRig.ERBFQuatDistanceType
UENUM()
enum class ERBFQuatDistanceType : uint8
{
    Euclidean = 0,
    ArcLength = 1,
    SwingAngle = 2,
    TwistAngle = 3,
};

// /Script/ControlRig.ERBFVectorDistanceType
UENUM()
enum class ERBFVectorDistanceType : uint8
{
    Euclidean = 0,
    Manhattan = 1,
    ArcLength = 2,
};

// /Script/ControlRig.ERigBoneType
UENUM()
enum class ERigBoneType : uint8
{
    Imported = 0,
    User = 1,
};

// /Script/ControlRig.ERigControlAxis
UENUM()
enum class ERigControlAxis : uint8
{
    X = 0,
    Y = 1,
    Z = 2,
};

// /Script/ControlRig.ERigControlType
UENUM()
enum class ERigControlType : uint8
{
    Bool = 0,
    Float = 1,
    Integer = 2,
    Vector2D = 3,
    Position = 4,
    Scale = 5,
    Rotator = 6,
    Transform = 7,
    TransformNoScale = 8,
    EulerTransform = 9,
};

// /Script/ControlRig.ERigControlValueType
UENUM()
enum class ERigControlValueType : uint8
{
    Initial = 0,
    Current = 1,
    Minimum = 2,
    Maximum = 3,
};

// /Script/ControlRig.ERigElementType
UENUM()
enum class ERigElementType : uint8
{
    None = 0,
    Bone = 1,
    Space = 2,
    Control = 4,
    Curve = 8,
    All = 15,
};

// /Script/ControlRig.ERigEvent
UENUM()
enum class ERigEvent : uint8
{
    None = 0,
    RequestAutoKey = 1,
    Max = 2,
};

// /Script/ControlRig.ERigExecutionType
UENUM()
enum class ERigExecutionType : uint8
{
    Runtime = 0,
    Editing = 1,
    Max = 2,
};

// /Script/ControlRig.ERigHierarchyImportMode
UENUM()
enum class ERigHierarchyImportMode : uint8
{
    Append = 0,
    Replace = 1,
    ReplaceLocalTransform = 2,
    ReplaceGlobalTransform = 3,
    Max = 4,
};

// /Script/ControlRig.ERigSpaceType
UENUM()
enum class ERigSpaceType : uint8
{
    Global = 0,
    Bone = 1,
    Control = 2,
    Space = 3,
};

// /Script/ControlRig.ERigUnitDebugPointMode
UENUM()
enum class ERigUnitDebugPointMode : uint8
{
    Point = 0,
    Vector = 1,
    Max = 2,
};

// /Script/ControlRig.ERigUnitDebugTransformMode
UENUM()
enum class ERigUnitDebugTransformMode : uint8
{
    Point = 0,
    Axes = 1,
    Box = 2,
    Max = 3,
};

// /Script/ControlRig.ERigUnitVisualDebugPointMode
UENUM()
enum class ERigUnitVisualDebugPointMode : uint8
{
    Point = 0,
    Vector = 1,
    Max = 2,
};

// /Script/ControlRig.ETransformGetterType
UENUM()
enum class ETransformGetterType : uint8
{
    Initial = 0,
    Current = 1,
    Max = 2,
};

// /Script/ControlRig.ETransformSpaceMode
UENUM()
enum class ETransformSpaceMode : uint8
{
    LocalSpace = 0,
    GlobalSpace = 1,
    BaseSpace = 2,
    BaseJoint = 3,
    Max = 4,
};
