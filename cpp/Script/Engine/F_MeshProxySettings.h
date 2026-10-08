// /Script/Engine.MeshProxySettings
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Engine/MeshMerging.h

USTRUCT()
struct FMeshProxySettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ScreenSize;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VoxelSize;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMaterialProxySettings MaterialSettings;  // 0x0008, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MergeDistance;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor UnresolvedGeometryColor;  // 0x0094, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxRayCastDist;  // 0x0098, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HardAngleThreshold;  // 0x009C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LightMapResolution;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EProxyNormalComputationMethod> NormalCalculationMethod;  // 0x00A4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ELandscapeCullingPrecision> LandscapeCullingPrecision;  // 0x00A5, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCalculateCorrectLODModel : 1;  // 0x00A6, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverrideVoxelSize : 1;  // 0x00A6, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverrideTransferDistance : 1;  // 0x00A6, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseHardAngleThreshold : 1;  // 0x00A6, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bComputeLightMapResolution : 1;  // 0x00A6, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRecalculateNormals : 1;  // 0x00A6, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseLandscapeCulling : 1;  // 0x00A6, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAllowAdjacency : 1;  // 0x00A6, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAllowDistanceField : 1;  // 0x00A7, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bReuseMeshLightmapUVs : 1;  // 0x00A7, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCreateCollision : 1;  // 0x00A7, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAllowVertexColors : 1;  // 0x00A7, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bGenerateLightmapUVs : 1;  // 0x00A7, mask 0x10
};
