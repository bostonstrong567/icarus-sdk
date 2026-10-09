// /Script/GeometryCache.GeometryCacheTrack
// Derives from: UObject
// size 0x58, declared in Engine/Plugins/Experimental/GeometryCache/Source/GeometryCache/Classes/GeometryCacheTrack.h

UCLASS(Config=Engine)
class UGeometryCacheTrack : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) float Duration;  // 0x0028, size 0x4
    TArray<FMatrix,TSizedDefaultAllocator<32> > MatrixSamples;  // 0x0030, not reflected
    TArray<float,TSizedDefaultAllocator<32> > MatrixSampleTimes;  // 0x0040, not reflected
    uint32 NumMaterials;  // 0x0050, not reflected

    // Virtual functions that start here:
    //   AddMatrixSample, GetDuration, GetHash, GetMaxSampleTime, GetMeshDataAtTime, GetSampleInfo
    //   SetDuration, SetMatrixSamples, UpdateBoundsData, UpdateMatrixData, UpdateMeshData
};
