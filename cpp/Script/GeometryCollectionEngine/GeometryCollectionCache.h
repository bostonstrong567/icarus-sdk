// /Script/GeometryCollectionEngine.GeometryCollectionCache
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionCache.h

UCLASS()
class UGeometryCollectionCache : public UObject
{
public:
    UPROPERTY() FRecordedTransformTrack RecordedData;  // 0x0028, size 0x10
    UPROPERTY() UGeometryCollection* SupportedCollection;  // 0x0038, size 0x8
    UPROPERTY() FGuid CompatibleCollectionState;  // 0x0040, size 0x10
};
