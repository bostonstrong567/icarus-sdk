// /Game/UI/Hab/DropTerminal/UMG_DropSelectionMapTile.UMG_DropSelectionMapTile_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x29C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DropSelectionMapTile_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Tile;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> TileTexture;  // 0x0270, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TileSize;  // 0x0298, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_DropSelectionMapTile(int32 EntryPoint);  // parameters 0x4
};
