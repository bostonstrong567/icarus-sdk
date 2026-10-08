// /Script/DatasmithContent.EDatasmithAreaLightActorShape
UENUM()
enum class EDatasmithAreaLightActorShape : uint8
{
    Rectangle = 0,
    Disc = 1,
    Sphere = 2,
    Cylinder = 3,
    None = 4,
};

// /Script/DatasmithContent.EDatasmithAreaLightActorType
UENUM()
enum class EDatasmithAreaLightActorType : uint8
{
    Point = 0,
    Spot = 1,
    Rect = 2,
};

// /Script/DatasmithContent.EDatasmithCADRetessellationRule
UENUM()
enum class EDatasmithCADRetessellationRule : uint8
{
    All = 0,
    SkipDeletedSurfaces = 1,
};

// /Script/DatasmithContent.EDatasmithCADStitchingTechnique
UENUM()
enum class EDatasmithCADStitchingTechnique : uint8
{
    StitchingNone = 0,
    StitchingHeal = 1,
    StitchingSew = 2,
};

// /Script/DatasmithContent.EDatasmithImportActorPolicy
UENUM()
enum class EDatasmithImportActorPolicy : uint8
{
    Update = 0,
    Full = 1,
    Ignore = 2,
};

// /Script/DatasmithContent.EDatasmithImportAssetConflictPolicy
UENUM()
enum class EDatasmithImportAssetConflictPolicy : uint8
{
    Replace = 0,
    Update = 1,
    Use = 2,
    Ignore = 3,
};

// /Script/DatasmithContent.EDatasmithImportLightmapMax
UENUM()
enum class EDatasmithImportLightmapMax : uint8
{
    LIGHTMAP_64 = 0,
    LIGHTMAP_128 = 1,
    LIGHTMAP_256 = 2,
    LIGHTMAP_512 = 3,
    LIGHTMAP_1024 = 4,
    LIGHTMAP_2048 = 5,
    LIGHTMAP_4096 = 6,
};

// /Script/DatasmithContent.EDatasmithImportLightmapMin
UENUM()
enum class EDatasmithImportLightmapMin : uint8
{
    LIGHTMAP_16 = 0,
    LIGHTMAP_32 = 1,
    LIGHTMAP_64 = 2,
    LIGHTMAP_128 = 3,
    LIGHTMAP_256 = 4,
    LIGHTMAP_512 = 5,
};

// /Script/DatasmithContent.EDatasmithImportMaterialQuality
UENUM()
enum class EDatasmithImportMaterialQuality : uint8
{
    UseNoFresnelCurves = 0,
    UseSimplifierFresnelCurves = 1,
    UseRealFresnelCurves = 2,
};

// /Script/DatasmithContent.EDatasmithImportScene
UENUM()
enum class EDatasmithImportScene : uint8
{
    NewLevel = 0,
    CurrentLevel = 1,
    AssetsOnly = 2,
};

// /Script/DatasmithContent.EDatasmithImportSearchPackagePolicy
UENUM()
enum class EDatasmithImportSearchPackagePolicy : uint8
{
    Current = 0,
    All = 1,
};
