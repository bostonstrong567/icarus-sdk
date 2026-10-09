// /Script/Paper2D.TileMapBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/TileMapBlueprintLibrary.h

UCLASS()
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakTile(FPaperTileInfo Tile, int32& TileIndex, UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD);  // parameters 0x23
    UFUNCTION(BlueprintCallable, BlueprintPure) static FTransform GetTileTransform(FPaperTileInfo Tile);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName GetTileUserData(FPaperTileInfo Tile);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPaperTileInfo MakeTile(int32 TileIndex, UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);  // parameters 0x28
};
