// /Script/MovieScene.EEvaluationMethod
UENUM()
enum class EEvaluationMethod : uint8
{
    Static = 0,
    Swept = 1,
};

// /Script/MovieScene.EMovieSceneBlendType
UENUM()
enum class EMovieSceneBlendType : uint8
{
    Invalid = 0,
    Absolute = 1,
    Additive = 2,
    Relative = 4,
    AdditiveFromBase = 8,
};

// /Script/MovieScene.EMovieSceneBuiltInEasing
UENUM()
enum class EMovieSceneBuiltInEasing : uint8
{
    Linear = 0,
    SinIn = 1,
    SinOut = 2,
    SinInOut = 3,
    QuadIn = 4,
    QuadOut = 5,
    QuadInOut = 6,
    CubicIn = 7,
    CubicOut = 8,
    CubicInOut = 9,
    QuartIn = 10,
    QuartOut = 11,
    QuartInOut = 12,
    QuintIn = 13,
    QuintOut = 14,
    QuintInOut = 15,
    ExpoIn = 16,
    ExpoOut = 17,
    ExpoInOut = 18,
    CircIn = 19,
    CircOut = 20,
    CircInOut = 21,
};

// /Script/MovieScene.EMovieSceneCompletionMode
UENUM()
enum class EMovieSceneCompletionMode : uint8
{
    KeepState = 0,
    RestoreState = 1,
    ProjectDefault = 2,
};

// /Script/MovieScene.EMovieSceneEvaluationType
UENUM()
enum class EMovieSceneEvaluationType : uint8
{
    FrameLocked = 0,
    WithSubFrames = 1,
};

// /Script/MovieScene.EMovieSceneKeyInterpolation
UENUM()
enum class EMovieSceneKeyInterpolation : uint8
{
    Auto = 0,
    User = 1,
    Break = 2,
    Linear = 3,
    Constant = 4,
};

// /Script/MovieScene.EMovieSceneObjectBindingSpace
UENUM()
enum class EMovieSceneObjectBindingSpace : uint8
{
    Local = 0,
    Root = 1,
    Unused = 2,
};

// /Script/MovieScene.EMovieScenePlayerStatus
UENUM()
enum class EMovieScenePlayerStatus : int32
{
    Stopped = 0,
    Playing = 1,
    Scrubbing = 2,
    Jumping = 3,
    Stepping = 4,
    Paused = 5,
    MAX = 6,
};

// /Script/MovieScene.EMovieScenePositionType
UENUM()
enum class EMovieScenePositionType : uint8
{
    Frame = 0,
    Time = 1,
    MarkedFrame = 2,
};

// /Script/MovieScene.EMovieSceneSequenceFlags
UENUM()
enum class EMovieSceneSequenceFlags : uint8
{
    None = 0,
    Volatile = 1,
    BlockingEvaluation = 2,
    InheritedFlags = 1,
};

// /Script/MovieScene.EMovieSceneServerClientMask
UENUM()
enum class EMovieSceneServerClientMask : uint8
{
    None = 0,
    Server = 1,
    Client = 2,
    All = 3,
};

// /Script/MovieScene.ESectionEvaluationFlags
UENUM()
enum class ESectionEvaluationFlags : uint8
{
    None = 0,
    PreRoll = 1,
    PostRoll = 2,
};

// /Script/MovieScene.ESpawnOwnership
UENUM()
enum class ESpawnOwnership : uint8
{
    InnerSequence = 0,
    MasterSequence = 1,
    External = 2,
};

// /Script/MovieScene.EUpdateClockSource
UENUM()
enum class EUpdateClockSource : uint8
{
    Tick = 0,
    Platform = 1,
    Audio = 2,
    RelativeTimecode = 3,
    Timecode = 4,
    Custom = 5,
};

// /Script/MovieScene.EUpdatePositionMethod
UENUM()
enum class EUpdatePositionMethod : uint8
{
    Play = 0,
    Jump = 1,
    Scrub = 2,
};
