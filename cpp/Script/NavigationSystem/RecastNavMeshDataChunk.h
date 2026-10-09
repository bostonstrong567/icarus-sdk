// /Script/NavigationSystem.RecastNavMeshDataChunk
// Derives from: UNavigationDataChunk > UObject
// size 0x40, declared in Engine/Source/Runtime/NavigationSystem/Public/NavMesh/RecastNavMeshDataChunk.h

UCLASS()
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
private:
    TArray<FRecastTileData,TSizedDefaultAllocator<32> > Tiles;  // 0x0030, not reflected
};
