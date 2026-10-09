// /Script/AIModule.RecastGraphWrapper
// size 0x98, declared in Engine/Source/Runtime/AIModule/Classes/Navigation/RecastGraphAStar.h

USTRUCT()
struct FRecastGraphWrapper
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Transient) ARecastNavMesh* RecastNavMeshActor;  // 0x0000, size 0x8
    const dtNavMesh * DetourNavMesh;  // 0x0008, not reflected
    dtNavMeshQuery RecastQuery;  // 0x0010, not reflected
    uint32 CachedNextLink;  // 0x0090, not reflected
};
