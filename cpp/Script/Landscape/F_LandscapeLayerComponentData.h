// /Script/Landscape.LandscapeLayerComponentData
// size 0x38, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeComponent.h

USTRUCT()
struct FLandscapeLayerComponentData
{
    UPROPERTY() FHeightmapData HeightmapData;  // 0x0000, size 0x8
    UPROPERTY() FWeightmapData WeightmapData;  // 0x0008, size 0x30
};
