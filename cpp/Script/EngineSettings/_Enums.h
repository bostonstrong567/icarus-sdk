// /Script/EngineSettings.EFourPlayerSplitScreenType
UENUM()
enum class EFourPlayerSplitScreenType : uint8
{
    Grid = 0,
    Vertical = 1,
    Horizontal = 2,
};

// /Script/EngineSettings.ESubLevelStripMode
UENUM()
enum class ESubLevelStripMode : uint8
{
    ExactClass = 0,
    IsChildOf = 1,
};

// /Script/EngineSettings.EThreePlayerSplitScreenType
UENUM()
enum class EThreePlayerSplitScreenType : int32
{
    FavorTop = 0,
    FavorBottom = 1,
    Vertical = 2,
    Horizontal = 3,
};

// /Script/EngineSettings.ETwoPlayerSplitScreenType
UENUM()
enum class ETwoPlayerSplitScreenType : int32
{
    Horizontal = 0,
    Vertical = 1,
};
