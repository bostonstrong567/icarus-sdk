// /Script/HairStrandsCore.EFollicleMaskChannel
UENUM()
enum class EFollicleMaskChannel : uint8
{
    R = 0,
    G = 1,
    B = 2,
    A = 3,
};

// /Script/HairStrandsCore.EGroomBindingMeshType
UENUM()
enum class EGroomBindingMeshType : uint8
{
    SkeletalMesh = 0,
    GeometryCache = 1,
};

// /Script/HairStrandsCore.EGroomCacheAttributes
UENUM()
enum class EGroomCacheAttributes : uint8
{
    None = 0,
    Position = 1,
    Width = 2,
    Color = 4,
};

// /Script/HairStrandsCore.EGroomCacheType
UENUM()
enum class EGroomCacheType : uint8
{
    None = 0,
    Strands = 1,
    Guides = 2,
};

// /Script/HairStrandsCore.EGroomGeometryType
UENUM()
enum class EGroomGeometryType : uint8
{
    Strands = 0,
    Cards = 1,
    Meshes = 2,
};

// /Script/HairStrandsCore.EGroomInterpolationQuality
UENUM()
enum class EGroomInterpolationQuality : uint8
{
    Low = 0,
    Medium = 1,
    High = 2,
    Unknown = 3,
};

// /Script/HairStrandsCore.EGroomInterpolationType
UENUM()
enum class EGroomInterpolationType : uint8
{
    None = 0,
    RigidTransform = 2,
    OffsetTransform = 4,
    SmoothTransform = 8,
};

// /Script/HairStrandsCore.EGroomInterpolationWeight
UENUM()
enum class EGroomInterpolationWeight : uint8
{
    Parametric = 0,
    Root = 1,
    Index = 2,
    Unknown = 3,
};

// /Script/HairStrandsCore.EGroomNiagaraSolvers
UENUM()
enum class EGroomNiagaraSolvers : uint8
{
    None = 0,
    CosseratRods = 2,
    AngularSprings = 4,
    CustomSolver = 8,
};

// /Script/HairStrandsCore.EGroomStrandsSize
UENUM()
enum class EGroomStrandsSize : uint8
{
    None = 0,
    Size2 = 2,
    Size4 = 4,
    Size8 = 8,
    Size16 = 16,
    Size32 = 32,
};

// /Script/HairStrandsCore.EHairCardsClusterType
UENUM()
enum class EHairCardsClusterType : uint8
{
    Low = 0,
    High = 1,
};

// /Script/HairStrandsCore.EHairCardsGenerationType
UENUM()
enum class EHairCardsGenerationType : uint8
{
    CardsCount = 0,
    UseGuides = 1,
};

// /Script/HairStrandsCore.EHairCardsSourceType
UENUM()
enum class EHairCardsSourceType : uint8
{
    Procedural = 0,
    Imported = 1,
};

// /Script/HairStrandsCore.EHairInterpolationQuality
UENUM()
enum class EHairInterpolationQuality : uint8
{
    Low = 0,
    Medium = 1,
    High = 2,
    Unknown = 3,
};

// /Script/HairStrandsCore.EHairInterpolationWeight
UENUM()
enum class EHairInterpolationWeight : uint8
{
    Parametric = 0,
    Root = 1,
    Index = 2,
    Unknown = 3,
};

// /Script/HairStrandsCore.EHairLODSelectionType
UENUM()
enum class EHairLODSelectionType : uint8
{
    Cpu = 0,
    Gpu = 1,
};

// /Script/HairStrandsCore.EStrandsTexturesMeshType
UENUM()
enum class EStrandsTexturesMeshType : uint8
{
    Static = 0,
    Skeletal = 1,
};

// /Script/HairStrandsCore.EStrandsTexturesTraceType
UENUM()
enum class EStrandsTexturesTraceType : uint8
{
    TraceInside = 0,
    TraceOuside = 1,
    TraceBidirectional = 2,
};
