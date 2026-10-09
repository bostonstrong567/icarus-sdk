// /Script/Engine.MeshSectionInfo
// size 0x8, declared in Engine/Source/Runtime/Engine/Classes/Engine/StaticMesh.h

USTRUCT()
struct FMeshSectionInfo
{
public:
    UPROPERTY() int32 MaterialIndex;  // 0x0000, size 0x4
    UPROPERTY() bool bEnableCollision;  // 0x0004, size 0x1
    UPROPERTY() bool bCastShadow;  // 0x0005, size 0x1
    UPROPERTY() bool bVisibleInRayTracing;  // 0x0006, size 0x1
    UPROPERTY() bool bForceOpaque;  // 0x0007, size 0x1
};
