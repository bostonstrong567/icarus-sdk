// /Script/NavigationSystem.RecastNavMeshDataChunk
// Derives from: UNavigationDataChunk > UObject
// size 0x40, declared in Engine/Source/Runtime/NavigationSystem/Public/NavMesh/RecastNavMeshDataChunk.h

UCLASS()
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<FRecastTileData,TSizedDefaultAllocator<32> > Tiles;  // 0x0030, private
};
