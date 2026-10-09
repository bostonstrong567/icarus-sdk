// /Script/Landscape.LandscapeProxyMaterialOverride
// size 0x10, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeProxy.h

USTRUCT()
struct FLandscapeProxyMaterialOverride
{
public:
    UPROPERTY(EditAnywhere) FPerPlatformInt LODIndex;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) UMaterialInterface* Material;  // 0x0008, size 0x8
};
