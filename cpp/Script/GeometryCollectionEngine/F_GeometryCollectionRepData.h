// /Script/GeometryCollectionEngine.GeometryCollectionRepData
// size 0x18, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionComponent.h

USTRUCT()
struct FGeometryCollectionRepData
{
public:
    TArray<FGeometryCollectionRepPose,TSizedDefaultAllocator<32> > Poses;  // 0x0000, not reflected
    int32 Version;  // 0x0010, not reflected
};
