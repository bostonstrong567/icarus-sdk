// /Script/Landscape.GrassVariety
// size 0x58, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeGrassType.h

USTRUCT()
struct FGrassVariety
{
public:
    UPROPERTY(EditAnywhere) UStaticMesh* GrassMesh;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) TArray<UMaterialInterface*> OverrideMaterials;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) FPerPlatformFloat GrassDensity;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) bool bUseGrid;  // 0x001C, size 0x1
    UPROPERTY(EditAnywhere) float PlacementJitter;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) FPerPlatformInt StartCullDistance;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) FPerPlatformInt EndCullDistance;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) int32 MinLOD;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) EGrassScaling Scaling;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) FFloatInterval ScaleX;  // 0x0034, size 0x8
    UPROPERTY(EditAnywhere) FFloatInterval ScaleY;  // 0x003C, size 0x8
    UPROPERTY(EditAnywhere) FFloatInterval ScaleZ;  // 0x0044, size 0x8
    UPROPERTY(EditAnywhere) bool RandomRotation;  // 0x004C, size 0x1
    UPROPERTY(EditAnywhere) bool AlignToSurface;  // 0x004D, size 0x1
    UPROPERTY(EditAnywhere) bool bUseLandscapeLightmap;  // 0x004E, size 0x1
    UPROPERTY(EditAnywhere) FLightingChannels LightingChannels;  // 0x004F, size 0x1
    UPROPERTY(EditAnywhere) bool bReceivesDecals;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere) bool bCastDynamicShadow;  // 0x0051, size 0x1
    UPROPERTY(EditAnywhere) bool bKeepInstanceBufferCPUCopy;  // 0x0052, size 0x1
};
