// /Script/Landscape.WeightmapData
// size 0x30, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeComponent.h

USTRUCT()
struct FWeightmapData
{
    UPROPERTY() TArray<UTexture2D*> Textures;  // 0x0000, size 0x10
    UPROPERTY() TArray<FWeightmapLayerAllocationInfo> LayerAllocations;  // 0x0010, size 0x10
    UPROPERTY(Transient) TArray<ULandscapeWeightmapUsage*> TextureUsages;  // 0x0020, size 0x10
};
