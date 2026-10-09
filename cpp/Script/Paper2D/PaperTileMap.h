// /Script/Paper2D.PaperTileMap
// Derives from: UObject
// size 0xA8, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperTileMap.h

UCLASS()
class UPaperTileMap : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MapWidth;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MapHeight;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 TileWidth;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 TileHeight;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) float PixelsPerUnrealUnit;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float SeparationPerTileX;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere) float SeparationPerTileY;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SeparationPerLayer;  // 0x0044, size 0x4
    UPROPERTY() TSoftObjectPtr<UPaperTileSet> SelectedTileSet;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UMaterialInterface* Material;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UPaperTileLayer*> TileLayers;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ETileMapProjectionMode> ProjectionMode;  // 0x008D, size 0x1
    UPROPERTY(EditAnywhere) int32 HexSideLength;  // 0x0090, size 0x4
    UPROPERTY() UBodySetup* BodySetup;  // 0x0098, size 0x8
    UPROPERTY() int32 LayerNameIndex;  // 0x00A0, size 0x4
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CollisionThickness;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ESpriteCollisionMode> SpriteCollisionDomain;  // 0x008C, size 0x1

    // Virtual functions that start here:
    //   UpdateBodySetup
};
