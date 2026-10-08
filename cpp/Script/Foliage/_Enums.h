// /Script/Foliage.EFoliageScaling
UENUM()
enum class EFoliageScaling : uint8
{
    Uniform = 0,
    Free = 1,
    LockXY = 2,
    LockXZ = 3,
    LockYZ = 4,
};

// /Script/Foliage.ESimulationOverlap
UENUM()
enum class ESimulationOverlap : int32
{
    CollisionOverlap = 0,
    ShadeOverlap = 1,
    None = 2,
};

// /Script/Foliage.ESimulationQuery
UENUM()
enum class ESimulationQuery : int32
{
    None = 0,
    CollisionOverlap = 1,
    ShadeOverlap = 2,
    AnyOverlap = 3,
};

// /Script/Foliage.EVertexColorMaskChannel
UENUM()
enum class EVertexColorMaskChannel : uint8
{
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
    MAX_None = 4,
};

// /Script/Foliage.FoliageVertexColorMask
UENUM()
enum class FoliageVertexColorMask : int32
{
    FOLIAGEVERTEXCOLORMASK_Disabled = 0,
    FOLIAGEVERTEXCOLORMASK_Red = 1,
    FOLIAGEVERTEXCOLORMASK_Green = 2,
    FOLIAGEVERTEXCOLORMASK_Blue = 3,
    FOLIAGEVERTEXCOLORMASK_Alpha = 4,
};
