// /Script/Engine.SkeletonToMeshLinkup
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Animation/Skeleton.h

USTRUCT()
struct FSkeletonToMeshLinkup
{
public:
    UPROPERTY() TArray<int32> SkeletonToMeshTable;  // 0x0000, size 0x10
    UPROPERTY() TArray<int32> MeshToSkeletonTable;  // 0x0010, size 0x10
};
