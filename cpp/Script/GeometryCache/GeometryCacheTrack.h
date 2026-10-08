// /Script/GeometryCache.GeometryCacheTrack
// Derives from: UObject
// size 0x58, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheTrack.h

UCLASS(Config=Engine)
class UGeometryCacheTrack : public UObject
{
public:
    UPROPERTY(EditAnywhere) float Duration;  // 0x0028, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TArray<FMatrix,TSizedDefaultAllocator<32> > MatrixSamples;  // 0x0030, protected
    TArray<float,TSizedDefaultAllocator<32> > MatrixSampleTimes;  // 0x0040, protected
    uint32 NumMaterials;  // 0x0050, protected

    // Virtual functions that start here:
    //   AddMatrixSample, GetDuration, GetHash, GetMaxSampleTime, GetMeshDataAtTime, GetSampleInfo
    //   SetDuration, SetMatrixSamples, UpdateBoundsData, UpdateMatrixData, UpdateMeshData
};
