// /Script/Icarus.MapRow
// size 0x10, declared in Icarus/Source/Icarus/UI/Map/MapManagerBase.h

USTRUCT()
struct FMapRow
{
public:
    UPROPERTY(BlueprintReadWrite) TArray<EMapTileRadarFlag> ColumnTiles;  // 0x0000, size 0x10
};
