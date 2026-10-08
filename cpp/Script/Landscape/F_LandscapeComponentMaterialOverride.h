// /Script/Landscape.LandscapeComponentMaterialOverride
// size 0x10, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeComponent.h

USTRUCT()
struct FLandscapeComponentMaterialOverride
{
    UPROPERTY(EditAnywhere) FPerPlatformInt LODIndex;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) UMaterialInterface* Material;  // 0x0008, size 0x8
};
