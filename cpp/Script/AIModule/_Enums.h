// /Script/AIModule.EAILockSource
UENUM()
enum class EAILockSource : int32
{
    Animation = 0,
    Logic = 1,
    Script = 2,
    Gameplay = 3,
    MAX = 4,
};

// /Script/AIModule.EAIOptionFlag
UENUM()
enum class EAIOptionFlag : int32
{
    Default = 0,
    Enable = 1,
    Disable = 2,
    MAX = 3,
};

// /Script/AIModule.EAIParamType
UENUM()
enum class EAIParamType : uint8
{
    Float = 0,
    Int = 1,
    Bool = 2,
    MAX = 3,
};

// /Script/AIModule.EAIRequestPriority
UENUM()
enum class EAIRequestPriority : int32
{
    SoftScript = 0,
    Logic = 1,
    HardScript = 2,
    Reaction = 3,
    Ultimate = 4,
    MAX = 5,
};

// /Script/AIModule.EAISenseNotifyType
UENUM()
enum class EAISenseNotifyType : uint8
{
    OnEveryPerception = 0,
    OnPerceptionChange = 1,
};

// /Script/AIModule.EAITaskPriority
UENUM()
enum class EAITaskPriority : uint8
{
    Lowest = 0,
    Low = 64,
    AutonomousAI = 127,
    High = 192,
    Ultimate = 254,
};

// /Script/AIModule.EArithmeticKeyOperation
UENUM()
enum class EArithmeticKeyOperation : int32
{
    Equal = 0,
    NotEqual = 1,
    Less = 2,
    LessOrEqual = 3,
    Greater = 4,
    GreaterOrEqual = 5,
};

// /Script/AIModule.EBTBlackboardRestart
UENUM()
enum class EBTBlackboardRestart : int32
{
    ValueChange = 0,
    ResultChange = 1,
};

// /Script/AIModule.EBTChildIndex
UENUM()
enum class EBTChildIndex : uint8
{
    FirstNode = 0,
    TaskNode = 1,
};

// /Script/AIModule.EBTDecoratorLogic
UENUM()
enum class EBTDecoratorLogic : int32
{
    Invalid = 0,
    Test = 1,
    And = 2,
    Or = 3,
    Not = 4,
};

// /Script/AIModule.EBTFlowAbortMode
UENUM()
enum class EBTFlowAbortMode : int32
{
    None = 0,
    LowerPriority = 1,
    Self = 2,
    Both = 3,
};

// /Script/AIModule.EBTNodeResult
UENUM()
enum class EBTNodeResult : int32
{
    Succeeded = 0,
    Failed = 1,
    Aborted = 2,
    InProgress = 3,
};

// /Script/AIModule.EBTParallelMode
UENUM()
enum class EBTParallelMode : int32
{
    AbortBackground = 0,
    WaitForBackground = 1,
};

// /Script/AIModule.EBasicKeyOperation
UENUM()
enum class EBasicKeyOperation : int32
{
    Set = 0,
    NotSet = 1,
};

// /Script/AIModule.EBlackBoardEntryComparison
UENUM()
enum class EBlackBoardEntryComparison : int32
{
    Equal = 0,
    NotEqual = 1,
};

// /Script/AIModule.EEQSNormalizationType
UENUM()
enum class EEQSNormalizationType : uint8
{
    Absolute = 0,
    RelativeToScores = 1,
};

// /Script/AIModule.EEnvDirection
UENUM()
enum class EEnvDirection : int32
{
    TwoPoints = 0,
    Rotation = 1,
};

// /Script/AIModule.EEnvOverlapShape
UENUM()
enum class EEnvOverlapShape : int32
{
    Box = 0,
    Sphere = 1,
    Capsule = 2,
};

// /Script/AIModule.EEnvQueryHightlightMode
UENUM()
enum class EEnvQueryHightlightMode : uint8
{
    All = 0,
    Best5Pct = 1,
    Best25Pct = 2,
};

// /Script/AIModule.EEnvQueryParam
UENUM()
enum class EEnvQueryParam : int32
{
    Float = 0,
    Int = 1,
    Bool = 2,
};

// /Script/AIModule.EEnvQueryRunMode
UENUM()
enum class EEnvQueryRunMode : int32
{
    SingleResult = 0,
    RandomBest5Pct = 1,
    RandomBest25Pct = 2,
    AllMatching = 3,
};

// /Script/AIModule.EEnvQueryStatus
UENUM()
enum class EEnvQueryStatus : int32
{
    Processing = 0,
    Success = 1,
    Failed = 2,
    Aborted = 3,
    OwnerLost = 4,
    MissingParam = 5,
};

// /Script/AIModule.EEnvQueryTestClamping
UENUM()
enum class EEnvQueryTestClamping : int32
{
    None = 0,
    SpecifiedValue = 1,
    FilterThreshold = 2,
};

// /Script/AIModule.EEnvQueryTrace
UENUM()
enum class EEnvQueryTrace : int32
{
    None = 0,
    Navigation = 1,
    Geometry = 2,
    NavigationOverLedges = 3,
};

// /Script/AIModule.EEnvTestCost
UENUM()
enum class EEnvTestCost : int32
{
    Low = 0,
    Medium = 1,
    High = 2,
};

// /Script/AIModule.EEnvTestDistance
UENUM()
enum class EEnvTestDistance : int32
{
    Distance3D = 0,
    Distance2D = 1,
    DistanceZ = 2,
    DistanceAbsoluteZ = 3,
};

// /Script/AIModule.EEnvTestDot
UENUM()
enum class EEnvTestDot : uint8
{
    Dot3D = 0,
    Dot2D = 1,
};

// /Script/AIModule.EEnvTestFilterOperator
UENUM()
enum class EEnvTestFilterOperator : int32
{
    AllPass = 0,
    AnyPass = 1,
};

// /Script/AIModule.EEnvTestFilterType
UENUM()
enum class EEnvTestFilterType : int32
{
    Minimum = 0,
    Maximum = 1,
    Range = 2,
    Match = 3,
};

// /Script/AIModule.EEnvTestPathfinding
UENUM()
enum class EEnvTestPathfinding : int32
{
    PathExist = 0,
    PathCost = 1,
    PathLength = 2,
};

// /Script/AIModule.EEnvTestPurpose
UENUM()
enum class EEnvTestPurpose : int32
{
    Filter = 0,
    Score = 1,
    FilterAndScore = 2,
};

// /Script/AIModule.EEnvTestScoreEquation
UENUM()
enum class EEnvTestScoreEquation : int32
{
    Linear = 0,
    Square = 1,
    InverseLinear = 2,
    SquareRoot = 3,
    Constant = 4,
};

// /Script/AIModule.EEnvTestScoreOperator
UENUM()
enum class EEnvTestScoreOperator : int32
{
    AverageScore = 0,
    MinScore = 1,
    MaxScore = 2,
    Multiply = 3,
};

// /Script/AIModule.EEnvTestWeight
UENUM()
enum class EEnvTestWeight : int32
{
    None = 0,
    Square = 1,
    Inverse = 2,
    Unused = 3,
    Constant = 4,
    Skip = 5,
};

// /Script/AIModule.EEnvTraceShape
UENUM()
enum class EEnvTraceShape : int32
{
    Line = 0,
    Box = 1,
    Sphere = 2,
    Capsule = 3,
};

// /Script/AIModule.EGenericAICheck
UENUM()
enum class EGenericAICheck : uint8
{
    Less = 0,
    LessOrEqual = 1,
    Equal = 2,
    NotEqual = 3,
    GreaterOrEqual = 4,
    Greater = 5,
    IsTrue = 6,
    MAX = 7,
};

// /Script/AIModule.EPathExistanceQueryType
UENUM()
enum class EPathExistanceQueryType : int32
{
    NavmeshRaycast2D = 0,
    HierarchicalQuery = 1,
    RegularPathFinding = 2,
};

// /Script/AIModule.EPathFollowingAction
UENUM()
enum class EPathFollowingAction : int32
{
    Error = 0,
    NoMove = 1,
    DirectMove = 2,
    PartialPath = 3,
    PathToGoal = 4,
};

// /Script/AIModule.EPathFollowingRequestResult
UENUM()
enum class EPathFollowingRequestResult : int32
{
    Failed = 0,
    AlreadyAtGoal = 1,
    RequestSuccessful = 2,
};

// /Script/AIModule.EPathFollowingResult
UENUM()
enum class EPathFollowingResult : int32
{
    Success = 0,
    Blocked = 1,
    OffPath = 2,
    Aborted = 3,
    Skipped_DEPRECATED = 4,
    Invalid = 5,
};

// /Script/AIModule.EPathFollowingStatus
UENUM()
enum class EPathFollowingStatus : int32
{
    Idle = 0,
    Waiting = 1,
    Paused = 2,
    Moving = 3,
};

// /Script/AIModule.EPawnActionAbortState
UENUM()
enum class EPawnActionAbortState : int32
{
    NeverStarted = 0,
    NotBeingAborted = 1,
    MarkPendingAbort = 2,
    LatentAbortInProgress = 3,
    AbortDone = 4,
    MAX = 5,
};

// /Script/AIModule.EPawnActionEventType
UENUM()
enum class EPawnActionEventType : int32
{
    Invalid = 0,
    FailedToStart = 1,
    InstantAbort = 2,
    FinishedAborting = 3,
    FinishedExecution = 4,
    Push = 5,
};

// /Script/AIModule.EPawnActionFailHandling
UENUM()
enum class EPawnActionFailHandling : int32
{
    RequireSuccess = 0,
    IgnoreFailure = 1,
};

// /Script/AIModule.EPawnActionMoveMode
UENUM()
enum class EPawnActionMoveMode : int32
{
    UsePathfinding = 0,
    StraightLine = 1,
};

// /Script/AIModule.EPawnActionResult
UENUM()
enum class EPawnActionResult : int32
{
    NotStarted = 0,
    InProgress = 1,
    Success = 2,
    Failed = 3,
    Aborted = 4,
};

// /Script/AIModule.EPawnSubActionTriggeringPolicy
UENUM()
enum class EPawnSubActionTriggeringPolicy : int32
{
    CopyBeforeTriggering = 0,
    ReuseInstances = 1,
};

// /Script/AIModule.EPointOnCircleSpacingMethod
UENUM()
enum class EPointOnCircleSpacingMethod : uint8
{
    BySpaceBetween = 0,
    ByNumberOfPoints = 1,
};

// /Script/AIModule.ETeamAttitude
UENUM()
enum class ETeamAttitude : int32
{
    Friendly = 0,
    Neutral = 1,
    Hostile = 2,
};

// /Script/AIModule.ETextKeyOperation
UENUM()
enum class ETextKeyOperation : int32
{
    Equal = 0,
    NotEqual = 1,
    Contain = 2,
    NotContain = 3,
};

// /Script/AIModule.FAIDistanceType
UENUM()
enum class FAIDistanceType : uint8
{
    Distance3D = 0,
    Distance2D = 1,
    DistanceZ = 2,
    MAX = 3,
};
