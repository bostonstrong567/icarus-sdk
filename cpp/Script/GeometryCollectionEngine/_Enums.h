// /Script/GeometryCollectionEngine.EChaosBreakingSortMethod
UENUM()
enum class EChaosBreakingSortMethod : uint8
{
    SortNone = 0,
    SortByHighestMass = 1,
    SortByHighestSpeed = 2,
    SortByNearestFirst = 3,
    Count = 4,
};

// /Script/GeometryCollectionEngine.EChaosCollisionSortMethod
UENUM()
enum class EChaosCollisionSortMethod : uint8
{
    SortNone = 0,
    SortByHighestMass = 1,
    SortByHighestSpeed = 2,
    SortByHighestImpulse = 3,
    SortByNearestFirst = 4,
    Count = 5,
};

// /Script/GeometryCollectionEngine.EChaosTrailingSortMethod
UENUM()
enum class EChaosTrailingSortMethod : uint8
{
    SortNone = 0,
    SortByHighestMass = 1,
    SortByHighestSpeed = 2,
    SortByNearestFirst = 3,
    Count = 4,
};

// /Script/GeometryCollectionEngine.ECollectionAttributeEnum
UENUM()
enum class ECollectionAttributeEnum : uint8
{
    Chaos_Active = 0,
    Chaos_DynamicState = 1,
    Chaos_CollisionGroup = 2,
    Chaos_Max = 3,
};

// /Script/GeometryCollectionEngine.ECollectionGroupEnum
UENUM()
enum class ECollectionGroupEnum : uint8
{
    Chaos_Traansform = 0,
    Chaos_Max = 1,
};

// /Script/GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
UENUM()
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8
{
    HideNone = 0,
    HideWithCollision = 1,
    HideSelected = 2,
    HideWholeCollection = 3,
    HideAll = 4,
};
