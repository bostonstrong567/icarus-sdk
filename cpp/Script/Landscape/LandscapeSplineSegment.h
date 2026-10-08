// /Script/Landscape.LandscapeSplineSegment
// Derives from: UObject
// size 0xB0, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeSplineSegment.h

UCLASS(MinimalAPI)
class ULandscapeSplineSegment : public UObject
{
public:
    UPROPERTY(EditAnywhere) FLandscapeSplineSegmentConnection Connections;  // 0x0028, size 0x18
    UPROPERTY() FInterpCurveVector SplineInfo;  // 0x0058, size 0x18
    UPROPERTY() TArray<FLandscapeSplineInterpPoint> Points;  // 0x0070, size 0x10
    UPROPERTY() FBox Bounds;  // 0x0080, size 0x1C
    UPROPERTY() TArray<USplineMeshComponent*> LocalMeshComponents;  // 0x00A0, size 0x10

    // Virtual functions that start here:
    //   FindNearest
};
