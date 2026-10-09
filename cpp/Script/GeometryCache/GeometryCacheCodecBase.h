// /Script/GeometryCache.GeometryCacheCodecBase
// Derives from: UObject
// size 0x38, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheCodecBase.h

UCLASS()
class UGeometryCacheCodecBase : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) TArray<int32> TopologyRanges;  // 0x0028, size 0x10

    // Virtual functions that start here:
    //   CreateRenderState, DecodeBuffer, DecodeSingleFrame, IsSameTopology
};
