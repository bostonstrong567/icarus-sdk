// /Script/AIModule.RecastGraphWrapper
// size 0x98, declared in Engine/Source/Runtime/AIModule/Classes/Navigation/RecastGraphAStar.h

USTRUCT()
struct FRecastGraphWrapper
{
    UPROPERTY(Transient) ARecastNavMesh* RecastNavMeshActor;  // 0x0000, size 0x8

    // Not reflected:
    const dtNavMesh * DetourNavMesh;  // 0x0008
    dtNavMeshQuery RecastQuery;  // 0x0010
    uint32 CachedNextLink;  // 0x0090
};
