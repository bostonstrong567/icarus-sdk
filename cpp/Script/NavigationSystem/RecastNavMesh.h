// /Script/NavigationSystem.RecastNavMesh
// Derives from: ANavigationData > AActor > UObject
// size 0x4D8, declared in Engine/Source/Runtime/NavigationSystem/Public/NavMesh/RecastNavMesh.h

UCLASS(NotPlaceable, Config=Engine)
class ARecastNavMesh : public ANavigationData
{
public:
    UPROPERTY(EditAnywhere) uint8 bDrawTriangleEdges : 1;  // 0x0428, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bDrawPolyEdges : 1;  // 0x0428, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bDrawFilledPolys : 1;  // 0x0428, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bDrawNavMeshEdges : 1;  // 0x0428, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bDrawTileBounds : 1;  // 0x0428, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bDrawPathCollidingGeometry : 1;  // 0x0428, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bDrawTileLabels : 1;  // 0x0428, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bDrawPolygonLabels : 1;  // 0x0428, mask 0x80
    UPROPERTY(EditAnywhere) uint8 bDrawDefaultPolygonCost : 1;  // 0x0429, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bDrawPolygonFlags : 1;  // 0x0429, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bDrawLabelsOnPathNodes : 1;  // 0x0429, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bDrawNavLinks : 1;  // 0x0429, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bDrawFailedNavLinks : 1;  // 0x0429, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bDrawClusters : 1;  // 0x0429, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bDrawOctree : 1;  // 0x0429, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bDrawOctreeDetails : 1;  // 0x0429, mask 0x80
    UPROPERTY(EditAnywhere) uint8 bDrawMarkedForbiddenPolys : 1;  // 0x042A, mask 0x01
    UPROPERTY(Config) uint8 bDistinctlyDrawTilesBeingBuilt : 1;  // 0x042A, mask 0x02
    UPROPERTY(EditAnywhere, Config) float DrawOffset;  // 0x042C, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 bFixedTilePoolSize : 1;  // 0x0430, mask 0x01
    UPROPERTY(EditAnywhere, Config) int32 TilePoolSize;  // 0x0434, size 0x4
    UPROPERTY(EditAnywhere, Config) float TileSizeUU;  // 0x0438, size 0x4
    UPROPERTY(EditAnywhere, Config) float CellSize;  // 0x043C, size 0x4
    UPROPERTY(EditAnywhere, Config) float CellHeight;  // 0x0440, size 0x4
    UPROPERTY(EditAnywhere, Config) float AgentRadius;  // 0x0444, size 0x4
    UPROPERTY(EditAnywhere, Config) float AgentHeight;  // 0x0448, size 0x4
    UPROPERTY(EditAnywhere, Config) float AgentMaxSlope;  // 0x044C, size 0x4
    UPROPERTY(EditAnywhere, Config) float AgentMaxStepHeight;  // 0x0450, size 0x4
    UPROPERTY(EditAnywhere, Config) float MinRegionArea;  // 0x0454, size 0x4
    UPROPERTY(EditAnywhere, Config) float MergeRegionSize;  // 0x0458, size 0x4
    UPROPERTY(EditAnywhere, Config) float MaxSimplificationError;  // 0x045C, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 MaxSimultaneousTileGenerationJobsCount;  // 0x0460, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 TileNumberHardLimit;  // 0x0464, size 0x4
    UPROPERTY(EditAnywhere) int32 PolyRefTileBits;  // 0x0468, size 0x4
    UPROPERTY(EditAnywhere) int32 PolyRefNavPolyBits;  // 0x046C, size 0x4
    UPROPERTY(EditAnywhere) int32 PolyRefSaltBits;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere) FVector NavMeshOriginOffset;  // 0x0474, size 0xC
    UPROPERTY(Config) float DefaultDrawDistance;  // 0x0480, size 0x4
    UPROPERTY(Config) float DefaultMaxSearchNodes;  // 0x0484, size 0x4
    UPROPERTY(Config) float DefaultMaxHierarchicalSearchNodes;  // 0x0488, size 0x4
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<ERecastPartitioning> RegionPartitioning;  // 0x048C, size 0x1
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<ERecastPartitioning> LayerPartitioning;  // 0x048D, size 0x1
    UPROPERTY(EditAnywhere, Config) int32 RegionChunkSplits;  // 0x0490, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 LayerChunkSplits;  // 0x0494, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 bSortNavigationAreasByCost : 1;  // 0x0498, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bPerformVoxelFiltering : 1;  // 0x0498, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bMarkLowHeightAreas : 1;  // 0x0498, mask 0x04
    UPROPERTY(EditAnywhere, Config) uint8 bUseExtraTopCellWhenMarkingAreas : 1;  // 0x0498, mask 0x08
    UPROPERTY(EditAnywhere, Config) uint8 bFilterLowSpanSequences : 1;  // 0x0498, mask 0x10
    UPROPERTY(EditAnywhere, Config) uint8 bFilterLowSpanFromTileCache : 1;  // 0x0498, mask 0x20
    UPROPERTY(EditAnywhere, Config) uint8 bDoFullyAsyncNavDataGathering : 1;  // 0x0498, mask 0x40
    UPROPERTY(Config) uint8 bUseBetterOffsetsFromCorners : 1;  // 0x0498, mask 0x80
    UPROPERTY(Config) uint8 bStoreEmptyTileLayers : 1;  // 0x0499, mask 0x01
    UPROPERTY(Config) uint8 bUseVirtualFilters : 1;  // 0x0499, mask 0x02
    UPROPERTY(Config) uint8 bAllowNavLinkAsPathEnd : 1;  // 0x0499, mask 0x04
    UPROPERTY(Config) uint8 bUseVoxelCache : 1;  // 0x0499, mask 0x08
    UPROPERTY(Config) float TileSetUpdateInterval;  // 0x049C, size 0x4
    UPROPERTY(EditAnywhere, Config) float HeuristicScale;  // 0x04A0, size 0x4
    UPROPERTY(EditAnywhere, Config) float VerticalDeviationFromGroundCompensation;  // 0x04A4, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnNavMeshUpdate;  // 0x04A8
    uint32 NavMeshVersion;  // 0x04C0, private
    FPImplRecastNavMesh * RecastNavMeshImpl;  // 0x04C8, private
    int32 BatchQueryCounter;  // 0x04D0, private

    UFUNCTION(BlueprintCallable) bool K2_ReplaceAreaInTileBounds(FBox Bounds, TSubclassOf<UNavArea> OldArea, TSubclassOf<UNavArea> NewArea, bool ReplaceLinks);  // parameters 0x32

    // Virtual functions that start here:
    //   AttachNavMeshDataChunk, CreateGeneratorInstance, DetachNavMeshDataChunk
    //   OnNavMeshGenerationFinished, OnNavMeshTilesUpdated, RecreateDefaultFilter, RemoveTiles
    //   SortAreasForGenerator, UpdateActiveTiles
};
