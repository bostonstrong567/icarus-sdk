// /Script/Engine.LevelSimplificationDetails
// size 0x12C, declared in Engine/Source/Runtime/Engine/Classes/Engine/Level.h

USTRUCT()
struct FLevelSimplificationDetails
{
    UPROPERTY(EditAnywhere) bool bCreatePackagePerAsset;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) float DetailsPercentage;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) FMaterialProxySettings StaticMeshMaterialSettings;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere) bool bOverrideLandscapeExportLOD;  // 0x0090, size 0x1
    UPROPERTY(EditAnywhere) int32 LandscapeExportLOD;  // 0x0094, size 0x4
    UPROPERTY(EditAnywhere) FMaterialProxySettings LandscapeMaterialSettings;  // 0x0098, size 0x88
    UPROPERTY(EditAnywhere) bool bBakeFoliageToLandscape;  // 0x0120, size 0x1
    UPROPERTY(EditAnywhere) bool bBakeGrassToLandscape;  // 0x0121, size 0x1
    UPROPERTY(Deprecated) bool bGenerateMeshNormalMap;  // 0x0122, size 0x1
    UPROPERTY(Deprecated) bool bGenerateMeshMetallicMap;  // 0x0123, size 0x1
    UPROPERTY(Deprecated) bool bGenerateMeshRoughnessMap;  // 0x0124, size 0x1
    UPROPERTY(Deprecated) bool bGenerateMeshSpecularMap;  // 0x0125, size 0x1
    UPROPERTY(Deprecated) bool bGenerateLandscapeNormalMap;  // 0x0126, size 0x1
    UPROPERTY(Deprecated) bool bGenerateLandscapeMetallicMap;  // 0x0127, size 0x1
    UPROPERTY(Deprecated) bool bGenerateLandscapeRoughnessMap;  // 0x0128, size 0x1
    UPROPERTY(Deprecated) bool bGenerateLandscapeSpecularMap;  // 0x0129, size 0x1
};
