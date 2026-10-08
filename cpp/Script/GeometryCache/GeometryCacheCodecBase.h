// /Script/GeometryCache.GeometryCacheCodecBase
// Derives from: UObject
// size 0x38, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheCodecBase.h

UCLASS()
class UGeometryCacheCodecBase : public UObject
{
public:
    UPROPERTY(EditAnywhere) TArray<int32> TopologyRanges;  // 0x0028, size 0x10

    // Virtual functions that start here:
    //   CreateRenderState, DecodeBuffer, DecodeSingleFrame, IsSameTopology
};
