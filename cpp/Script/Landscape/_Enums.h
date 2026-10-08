// /Script/Landscape.EGrassScaling
UENUM()
enum class EGrassScaling : uint8
{
    Uniform = 0,
    Free = 1,
    LockXY = 2,
};

// /Script/Landscape.EHeightmapRTType
UENUM()
enum class EHeightmapRTType : uint8
{
    HeightmapRT_CombinedAtlas = 0,
    HeightmapRT_CombinedNonAtlas = 1,
    HeightmapRT_Scratch1 = 2,
    HeightmapRT_Scratch2 = 3,
    HeightmapRT_Scratch3 = 4,
    HeightmapRT_Mip1 = 5,
    HeightmapRT_Mip2 = 6,
    HeightmapRT_Mip3 = 7,
    HeightmapRT_Mip4 = 8,
    HeightmapRT_Mip5 = 9,
    HeightmapRT_Mip6 = 10,
    HeightmapRT_Mip7 = 11,
    HeightmapRT_Count = 12,
};

// /Script/Landscape.ELandscapeBlendMode
UENUM()
enum class ELandscapeBlendMode : int32
{
    LSBM_AdditiveBlend = 0,
    LSBM_AlphaBlend = 1,
    LSBM_MAX = 2,
};

// /Script/Landscape.ELandscapeClearMode
UENUM()
enum class ELandscapeClearMode : int32
{
    Clear_Weightmap = 1,
    Clear_Heightmap = 2,
    Clear_All = 3,
};

// /Script/Landscape.ELandscapeCustomizedCoordType
UENUM()
enum class ELandscapeCustomizedCoordType : int32
{
    LCCT_None = 0,
    LCCT_CustomUV0 = 1,
    LCCT_CustomUV1 = 2,
    LCCT_CustomUV2 = 3,
    LCCT_WeightMapUV = 4,
    LCCT_MAX = 5,
};

// /Script/Landscape.ELandscapeGizmoType
UENUM()
enum class ELandscapeGizmoType : int32
{
    LGT_None = 0,
    LGT_Height = 1,
    LGT_Weight = 2,
    LGT_MAX = 3,
};

// /Script/Landscape.ELandscapeImportAlphamapType
UENUM()
enum class ELandscapeImportAlphamapType : uint8
{
    Additive = 0,
    Layered = 1,
};

// /Script/Landscape.ELandscapeLODFalloff
UENUM()
enum class ELandscapeLODFalloff : int32
{
    Linear = 0,
    SquareRoot = 1,
};

// /Script/Landscape.ELandscapeLayerBlendType
UENUM()
enum class ELandscapeLayerBlendType : int32
{
    LB_WeightBlend = 0,
    LB_AlphaBlend = 1,
    LB_HeightBlend = 2,
};

// /Script/Landscape.ELandscapeLayerDisplayMode
UENUM()
enum class ELandscapeLayerDisplayMode : uint8
{
    Default = 0,
    Alphabetical = 1,
    UserSpecific = 2,
};

// /Script/Landscape.ELandscapeLayerPaintingRestriction
UENUM()
enum class ELandscapeLayerPaintingRestriction : uint8
{
    None = 0,
    UseMaxLayers = 1,
    ExistingOnly = 2,
    UseComponentWhitelist = 3,
};

// /Script/Landscape.ELandscapeSetupErrors
UENUM()
enum class ELandscapeSetupErrors : int32
{
    LSE_None = 0,
    LSE_NoLandscapeInfo = 1,
    LSE_CollsionXY = 2,
    LSE_NoLayerInfo = 3,
    LSE_MAX = 4,
};

// /Script/Landscape.ERTDrawingType
UENUM()
enum class ERTDrawingType : uint8
{
    RTAtlas = 0,
    RTAtlasToNonAtlas = 1,
    RTNonAtlasToAtlas = 2,
    RTNonAtlas = 3,
    RTMips = 4,
};

// /Script/Landscape.ESplineModulationColorMask
UENUM()
enum class ESplineModulationColorMask : uint8
{
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
};

// /Script/Landscape.ETerrainCoordMappingType
UENUM()
enum class ETerrainCoordMappingType : int32
{
    TCMT_Auto = 0,
    TCMT_XY = 1,
    TCMT_XZ = 2,
    TCMT_YZ = 3,
    TCMT_MAX = 4,
};

// /Script/Landscape.EWeightmapRTType
UENUM()
enum class EWeightmapRTType : uint8
{
    WeightmapRT_Scratch_RGBA = 0,
    WeightmapRT_Scratch1 = 1,
    WeightmapRT_Scratch2 = 2,
    WeightmapRT_Scratch3 = 3,
    WeightmapRT_Mip0 = 4,
    WeightmapRT_Mip1 = 5,
    WeightmapRT_Mip2 = 6,
    WeightmapRT_Mip3 = 7,
    WeightmapRT_Mip4 = 8,
    WeightmapRT_Mip5 = 9,
    WeightmapRT_Mip6 = 10,
    WeightmapRT_Mip7 = 11,
    WeightmapRT_Count = 12,
};

// /Script/Landscape.LandscapeSplineMeshOrientation
UENUM()
enum class LandscapeSplineMeshOrientation : int32
{
    LSMO_XUp = 0,
    LSMO_YUp = 1,
    LSMO_MAX = 2,
};
