// /Script/Paper2D.PaperTileSet
// Derives from: UObject
// size 0xA8, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperTileSet.h

UCLASS()
class UPaperTileSet : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FIntPoint TileSize;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UTexture2D* TileSheet;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) TArray<UTexture*> AdditionalSourceTextures;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FIntMargin BorderMargin;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FIntPoint PerTileSpacing;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FIntPoint DrawingOffset;  // 0x0060, size 0x8
    UPROPERTY() int32 WidthInTiles;  // 0x0068, size 0x4
    UPROPERTY() int32 HeightInTiles;  // 0x006C, size 0x4
    UPROPERTY() int32 AllocatedWidth;  // 0x0070, size 0x4
    UPROPERTY() int32 AllocatedHeight;  // 0x0074, size 0x4
    UPROPERTY(EditAnywhere) TArray<FPaperTileMetadata> PerTileData;  // 0x0078, size 0x10
    UPROPERTY() TArray<FPaperTileSetTerrain> Terrains;  // 0x0088, size 0x10
    UPROPERTY(Deprecated) int32 TileWidth;  // 0x0098, size 0x4
    UPROPERTY(Deprecated) int32 TileHeight;  // 0x009C, size 0x4
    UPROPERTY(Deprecated) int32 Margin;  // 0x00A0, size 0x4
    UPROPERTY(Deprecated) int32 Spacing;  // 0x00A4, size 0x4
};
