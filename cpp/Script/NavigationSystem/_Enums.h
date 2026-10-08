// /Script/NavigationSystem.ENavCostDisplay
UENUM()
enum class ENavCostDisplay : int32
{
    TotalCost = 0,
    HeuristicOnly = 1,
    RealCostOnly = 2,
};

// /Script/NavigationSystem.ENavSystemOverridePolicy
UENUM()
enum class ENavSystemOverridePolicy : uint8
{
    Override = 0,
    Append = 1,
    Skip = 2,
};

// /Script/NavigationSystem.ERecastPartitioning
UENUM()
enum class ERecastPartitioning : int32
{
    Monotone = 0,
    Watershed = 1,
    ChunkyMonotone = 2,
};

// /Script/NavigationSystem.ERuntimeGenerationType
UENUM()
enum class ERuntimeGenerationType : uint8
{
    Static = 0,
    DynamicModifiersOnly = 1,
    Dynamic = 2,
    LegacyGeneration = 3,
};
