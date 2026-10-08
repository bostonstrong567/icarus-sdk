// /Script/Paper2D.PaperTileMapComponent
// Derives from: UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x4D0, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperTileMapComponent.h

UCLASS(Config=Engine)
class UPaperTileMapComponent : public UMeshComponent
{
public:
    UPROPERTY(Deprecated) int32 MapWidth;  // 0x0478, size 0x4
    UPROPERTY(Deprecated) int32 MapHeight;  // 0x047C, size 0x4
    UPROPERTY(Deprecated) int32 TileWidth;  // 0x0480, size 0x4
    UPROPERTY(Deprecated) int32 TileHeight;  // 0x0484, size 0x4
    UPROPERTY(Deprecated) UPaperTileSet* DefaultLayerTileSet;  // 0x0488, size 0x8
    UPROPERTY(Deprecated) UMaterialInterface* Material;  // 0x0490, size 0x8
    UPROPERTY(Deprecated) TArray<UPaperTileLayer*> TileLayers;  // 0x0498, size 0x10
    UPROPERTY(EditAnywhere) FLinearColor TileMapColor;  // 0x04A8, size 0x10
    UPROPERTY(EditAnywhere) int32 UseSingleLayerIndex;  // 0x04B8, size 0x4
    UPROPERTY(EditAnywhere) bool bUseSingleLayer;  // 0x04BC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UPaperTileMap* TileMap;  // 0x04C0, size 0x8

    UFUNCTION(BlueprintCallable) UPaperTileLayer* AddNewLayer();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CreateNewTileMap(int32 MapWidth, int32 MapHeight, int32 TileWidth, int32 TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor GetLayerColor(int32 Layer) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable) void GetMapSize(int32& MapWidth, int32& MapHeight, int32& NumLayers);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FPaperTileInfo GetTile(int32 X, int32 Y, int32 Layer) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetTileCenterPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetTileCornerPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor GetTileMapColor() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTilePolygon(int32 TileX, int32 TileY, TArray<FVector>& Points, int32 LayerIndex, bool bWorldSpace) const;  // parameters 0x1D
    UFUNCTION(BlueprintCallable) void MakeTileMapEditable();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool OwnsTileMap() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RebuildCollision();
    UFUNCTION(BlueprintCallable) void ResizeMap(int32 NewWidthInTiles, int32 NewHeightInTiles);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetLayerCollision(int32 Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void SetLayerColor(FLinearColor NewColor, int32 Layer);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetTile(int32 X, int32 Y, int32 Layer, FPaperTileInfo NewValue);  // parameters 0x20
    UFUNCTION(BlueprintCallable) bool SetTileMap(UPaperTileMap* NewTileMap);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetTileMapColor(FLinearColor NewColor);  // parameters 0x10

    // Virtual functions that start here:
    //   SetTileMap
};
