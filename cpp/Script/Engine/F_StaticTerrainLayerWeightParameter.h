// /Script/Engine.StaticTerrainLayerWeightParameter
// size 0x2C, declared in Engine/Source/Runtime/Engine/Public/StaticParameterSet.h

USTRUCT()
struct FStaticTerrainLayerWeightParameter : public FStaticParameterBase
{
public:
    UPROPERTY() int32 WeightmapIndex;  // 0x0024, size 0x4
    UPROPERTY() bool bWeightBasedBlend;  // 0x0028, size 0x1
};
