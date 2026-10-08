// /Script/Landscape.LandscapeGrassType
// Derives from: UObject
// size 0x60, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeGrassType.h

UCLASS(MinimalAPI)
class ULandscapeGrassType : public UObject
{
public:
    UPROPERTY(EditAnywhere) TArray<FGrassVariety> GrassVarieties;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) uint8 bEnableDensityScaling : 1;  // 0x0038, mask 0x01
    UPROPERTY(Deprecated) UStaticMesh* GrassMesh;  // 0x0040, size 0x8
    UPROPERTY(Deprecated) float GrassDensity;  // 0x0048, size 0x4
    UPROPERTY(Deprecated) float PlacementJitter;  // 0x004C, size 0x4
    UPROPERTY(Deprecated) int32 StartCullDistance;  // 0x0050, size 0x4
    UPROPERTY(Deprecated) int32 EndCullDistance;  // 0x0054, size 0x4
    UPROPERTY(Deprecated) bool RandomRotation;  // 0x0058, size 0x1
    UPROPERTY(Deprecated) bool AlignToSurface;  // 0x0059, size 0x1
};
