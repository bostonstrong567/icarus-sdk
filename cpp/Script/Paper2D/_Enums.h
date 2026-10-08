// /Script/Paper2D.EFlipbookCollisionMode
UENUM()
enum class EFlipbookCollisionMode : int32
{
    NoCollision = 0,
    FirstFrameCollision = 1,
    EachFrameCollision = 2,
};

// /Script/Paper2D.EPaperSpriteAtlasPadding
UENUM()
enum class EPaperSpriteAtlasPadding : uint8
{
    DilateBorder = 0,
    PadWithZero = 1,
};

// /Script/Paper2D.ESpriteCollisionMode
UENUM()
enum class ESpriteCollisionMode : int32
{
    None = 0,
    Use2DPhysics = 1,
    Use3DPhysics = 2,
};

// /Script/Paper2D.ESpritePivotMode
UENUM()
enum class ESpritePivotMode : int32
{
    Top_Left = 0,
    Top_Center = 1,
    Top_Right = 2,
    Center_Left = 3,
    Center_Center = 4,
    Center_Right = 5,
    Bottom_Left = 6,
    Bottom_Center = 7,
    Bottom_Right = 8,
    Custom = 9,
};

// /Script/Paper2D.ESpritePolygonMode
UENUM()
enum class ESpritePolygonMode : int32
{
    SourceBoundingBox = 0,
    TightBoundingBox = 1,
    ShrinkWrapped = 2,
    FullyCustom = 3,
    Diced = 4,
};

// /Script/Paper2D.ESpriteShapeType
UENUM()
enum class ESpriteShapeType : uint8
{
    Box = 0,
    Circle = 1,
    Polygon = 2,
};

// /Script/Paper2D.ETileMapProjectionMode
UENUM()
enum class ETileMapProjectionMode : int32
{
    Orthogonal = 0,
    IsometricDiamond = 1,
    IsometricStaggered = 2,
    HexagonalStaggered = 3,
};
