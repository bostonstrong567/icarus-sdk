// /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Derives from: AActor > UObject
// size 0x2C0, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionRenderLevelSetActor.h

UCLASS(Config=Engine)
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UVolumeTexture* TargetVolumeTexture;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterial* RayMarchMaterial;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SurfaceTolerance;  // 0x0230, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Isovalue;  // 0x0234, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Enabled;  // 0x0238, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RenderVolumeBoundingBox;  // 0x0239, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    FVector MinBBoxCorner;  // 0x023C, private
    FVector MaxBBoxCorner;  // 0x0248, private
    FMatrix WorldToLocal;  // 0x0260, private
    float VoxelSize;  // 0x02A0, private
    UPostProcessComponent * PostProcessComponent;  // 0x02A8, private
    UMaterialInstanceDynamic * DynRayMarchMaterial;  // 0x02B0, private
    float StepSizeMult;  // 0x02B8, private
};
