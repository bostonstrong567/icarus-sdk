// /Script/Paper2D.PaperTileLayer
// Derives from: UObject
// size 0x98, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperTileLayer.h

UCLASS()
class UPaperTileLayer : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintReadOnly) FText LayerName;  // 0x0028, size 0x18
private:
    UPROPERTY(BlueprintReadOnly) int32 LayerWidth;  // 0x0040, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 LayerHeight;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bHiddenInGame : 1;  // 0x0048, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bLayerCollides : 1;  // 0x0048, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bOverrideCollisionThickness : 1;  // 0x0048, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bOverrideCollisionOffset : 1;  // 0x0048, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CollisionThicknessOverride;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CollisionOffsetOverride;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor LayerColor;  // 0x0054, size 0x10
    UPROPERTY() int32 AllocatedWidth;  // 0x0064, size 0x4
    UPROPERTY() int32 AllocatedHeight;  // 0x0068, size 0x4
    UPROPERTY() TArray<FPaperTileInfo> AllocatedCells;  // 0x0070, size 0x10
    UPROPERTY(Deprecated) UPaperTileSet* TileSet;  // 0x0080, size 0x8
    UPROPERTY(Deprecated) TArray<int32> AllocatedGrid;  // 0x0088, size 0x10
};
