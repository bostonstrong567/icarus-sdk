// /Script/Paper2D.PaperTileSetTerrain
// size 0x18, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperTileSet.h

USTRUCT()
struct FPaperTileSetTerrain
{
public:
    UPROPERTY(EditAnywhere) FString TerrainName;  // 0x0000, size 0x10
    UPROPERTY() int32 CenterTileIndex;  // 0x0010, size 0x4
};
