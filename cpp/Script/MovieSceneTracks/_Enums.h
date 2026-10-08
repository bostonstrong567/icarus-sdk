// /Script/MovieSceneTracks.EFireEventsAtPosition
UENUM()
enum class EFireEventsAtPosition : uint8
{
    AtStartOfEvaluation = 0,
    AtEndOfEvaluation = 1,
    AfterSpawn = 2,
};

// /Script/MovieSceneTracks.ELevelVisibility
UENUM()
enum class ELevelVisibility : uint8
{
    Visible = 0,
    Hidden = 1,
};

// /Script/MovieSceneTracks.EParticleKey
UENUM()
enum class EParticleKey : uint8
{
    Activate = 0,
    Deactivate = 1,
    Trigger = 2,
};

// /Script/MovieSceneTracks.MovieScene3DPathSection_Axis
UENUM()
enum class MovieScene3DPathSection_Axis : uint8
{
    X = 0,
    Y = 1,
    Z = 2,
    NEG_X = 3,
    NEG_Y = 4,
    NEG_Z = 5,
};
