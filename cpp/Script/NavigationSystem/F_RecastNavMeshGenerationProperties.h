// /Script/NavigationSystem.RecastNavMeshGenerationProperties
// size 0x40, declared in Engine/Source/Runtime/NavigationSystem/Public/NavMesh/RecastNavMesh.h

USTRUCT()
struct FRecastNavMeshGenerationProperties
{
public:
    UPROPERTY(EditAnywhere) int32 TilePoolSize;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float TileSizeUU;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float CellSize;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float CellHeight;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) float AgentRadius;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float AgentHeight;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) float AgentMaxSlope;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) float AgentMaxStepHeight;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere) float MinRegionArea;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) float MergeRegionSize;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) float MaxSimplificationError;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) int32 TileNumberHardLimit;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<ERecastPartitioning> RegionPartitioning;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ERecastPartitioning> LayerPartitioning;  // 0x0031, size 0x1
    UPROPERTY(EditAnywhere) int32 RegionChunkSplits;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) int32 LayerChunkSplits;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) uint8 bSortNavigationAreasByCost : 1;  // 0x003C, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bPerformVoxelFiltering : 1;  // 0x003C, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bMarkLowHeightAreas : 1;  // 0x003C, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bUseExtraTopCellWhenMarkingAreas : 1;  // 0x003C, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bFilterLowSpanSequences : 1;  // 0x003C, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bFilterLowSpanFromTileCache : 1;  // 0x003C, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bFixedTilePoolSize : 1;  // 0x003C, mask 0x40
};
