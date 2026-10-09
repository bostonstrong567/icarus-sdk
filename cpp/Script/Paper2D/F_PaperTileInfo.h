// /Script/Paper2D.PaperTileInfo
// size 0x10, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperTileLayer.h

USTRUCT()
struct FPaperTileInfo
{
public:
    UPROPERTY(EditAnywhere) UPaperTileSet* TileSet;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) int32 PackedTileIndex;  // 0x0008, size 0x4
};
