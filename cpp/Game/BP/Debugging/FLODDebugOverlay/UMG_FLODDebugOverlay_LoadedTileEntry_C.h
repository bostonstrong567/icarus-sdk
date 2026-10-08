// /Game/BP/Debugging/FLODDebugOverlay/UMG_FLODDebugOverlay_LoadedTileEntry.UMG_FLODDebugOverlay_LoadedTileEntry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x29C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FLODDebugOverlay_LoadedTileEntry_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TB_LoadedTileDestroyedInstanceCount;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TB_LoadedTileName;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TB_LoadedTileRecordActiveInstanceCount;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TB_LoadedTileRecordCount;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TB_LoadedTileRecordInstanceCount;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumInstances;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumActiveInstances;  // 0x0294, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumDestroyedInstances;  // 0x0298, size 0x4

    UFUNCTION() void ExecuteUbergraph_UMG_FLODDebugOverlay_LoadedTileEntry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitForTile(AFLODTile* Tile);  // parameters 0x8
};
