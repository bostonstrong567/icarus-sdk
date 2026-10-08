// /Game/BP/Tools/CheatFunctions/Widgets/FLODTileRow.FLODTileRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UFLODTileRow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_56;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText FLODTileName;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AFLODTile* FLODTile;  // 0x0288, size 0x8

    UFUNCTION() void ExecuteUbergraph_FLODTileRow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFLODTile(AFLODTile* FLODTile);  // parameters 0x8
};
