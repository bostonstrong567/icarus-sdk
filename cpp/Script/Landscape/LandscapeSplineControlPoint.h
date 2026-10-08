// /Script/Landscape.LandscapeSplineControlPoint
// Derives from: UObject
// size 0xA8, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeSplineControlPoint.h

UCLASS(MinimalAPI)
class ULandscapeSplineControlPoint : public UObject
{
public:
    UPROPERTY(EditAnywhere) FVector Location;  // 0x0028, size 0xC
    UPROPERTY(EditAnywhere) FRotator Rotation;  // 0x0034, size 0xC
    UPROPERTY(EditAnywhere) float Width;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) float LayerWidthRatio;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere) float SideFalloff;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) float LeftSideFalloffFactor;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) float RightSideFalloffFactor;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere) float LeftSideLayerFalloffFactor;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere) float RightSideLayerFalloffFactor;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere) float EndFalloff;  // 0x005C, size 0x4
    UPROPERTY() TArray<FLandscapeSplineConnection> ConnectedSegments;  // 0x0060, size 0x10
    UPROPERTY() TArray<FLandscapeSplineInterpPoint> Points;  // 0x0070, size 0x10
    UPROPERTY() FBox Bounds;  // 0x0080, size 0x1C
    UPROPERTY(Instanced) UControlPointMeshComponent* LocalMeshComponent;  // 0x00A0, size 0x8
};
