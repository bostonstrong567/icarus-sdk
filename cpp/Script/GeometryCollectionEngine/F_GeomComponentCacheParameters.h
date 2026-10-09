// /Script/GeometryCollectionEngine.GeomComponentCacheParameters
// size 0x50, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionComponent.h

USTRUCT()
struct FGeomComponentCacheParameters
{
public:
    UPROPERTY(EditAnywhere) EGeometryCollectionCacheType CacheMode;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) UGeometryCollectionCache* TargetCache;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) float ReverseCacheBeginTime;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) bool SaveCollisionData;  // 0x0014, size 0x1
    UPROPERTY(EditAnywhere) bool DoGenerateCollisionData;  // 0x0015, size 0x1
    UPROPERTY(EditAnywhere) int32 CollisionDataSizeMax;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) bool DoCollisionDataSpatialHash;  // 0x001C, size 0x1
    UPROPERTY(EditAnywhere) float CollisionDataSpatialHashRadius;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxCollisionPerCell;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) bool SaveBreakingData;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) bool DoGenerateBreakingData;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere) int32 BreakingDataSizeMax;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) bool DoBreakingDataSpatialHash;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) float BreakingDataSpatialHashRadius;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxBreakingPerCell;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) bool SaveTrailingData;  // 0x003C, size 0x1
    UPROPERTY(EditAnywhere) bool DoGenerateTrailingData;  // 0x003D, size 0x1
    UPROPERTY(EditAnywhere) int32 TrailingDataSizeMax;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) float TrailingMinSpeedThreshold;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere) float TrailingMinVolumeThreshold;  // 0x0048, size 0x4
};
