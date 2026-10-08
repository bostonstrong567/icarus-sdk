// /Script/ChaosSolverEngine.EClusterConnectionTypeEnum
UENUM()
enum class EClusterConnectionTypeEnum : uint8
{
    Chaos_PointImplicit = 0,
    Chaos_DelaunayTriangulation = 1,
    Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
    Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
    Chaos_None = 4,
    Chaos_EClsuterCreationParameters_Max = 5,
};
