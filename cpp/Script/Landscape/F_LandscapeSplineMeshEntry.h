// /Script/Landscape.LandscapeSplineMeshEntry
// size 0x38, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeSplineSegment.h

USTRUCT()
struct FLandscapeSplineMeshEntry
{
    UPROPERTY(EditAnywhere) UStaticMesh* Mesh;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) TArray<UMaterialInterface*> MaterialOverrides;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) uint8 bCenterH : 1;  // 0x0018, mask 0x01
    UPROPERTY(EditAnywhere) FVector2D CenterAdjust;  // 0x001C, size 0x8
    UPROPERTY(EditAnywhere) uint8 bScaleToWidth : 1;  // 0x0024, mask 0x01
    UPROPERTY(EditAnywhere) FVector Scale;  // 0x0028, size 0xC
    UPROPERTY(Deprecated) TEnumAsByte<LandscapeSplineMeshOrientation> Orientation;  // 0x0034, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ESplineMeshAxis> ForwardAxis;  // 0x0035, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ESplineMeshAxis> UpAxis;  // 0x0036, size 0x1
};
