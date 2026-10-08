// /Script/Landscape.WeightmapLayerAllocationInfo
// size 0x10, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeComponent.h

USTRUCT()
struct FWeightmapLayerAllocationInfo
{
    UPROPERTY() ULandscapeLayerInfoObject* LayerInfo;  // 0x0000, size 0x8
    UPROPERTY() uint8 WeightmapTextureIndex;  // 0x0008, size 0x1
    UPROPERTY() uint8 WeightmapTextureChannel;  // 0x0009, size 0x1
};
