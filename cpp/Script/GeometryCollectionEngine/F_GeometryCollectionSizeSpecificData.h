// /Script/GeometryCollectionEngine.GeometryCollectionSizeSpecificData
// size 0x24, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionObject.h

USTRUCT()
struct FGeometryCollectionSizeSpecificData
{
public:
    UPROPERTY(EditAnywhere) float MaxSize;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) ECollisionTypeEnum CollisionType;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere) EImplicitTypeEnum ImplicitType;  // 0x0005, size 0x1
    UPROPERTY(EditAnywhere) int32 MinLevelSetResolution;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxLevelSetResolution;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) int32 MinClusterLevelSetResolution;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxClusterLevelSetResolution;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) int32 CollisionObjectReductionPercentage;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) float CollisionParticlesFraction;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere) int32 MaximumCollisionParticles;  // 0x0020, size 0x4
};
