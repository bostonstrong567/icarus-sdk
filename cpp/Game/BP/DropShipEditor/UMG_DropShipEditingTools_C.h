// /Game/BP/DropShipEditor/UMG_DropShipEditingTools.UMG_DropShipEditingTools_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x274, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DropShipEditingTools_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* Parts;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Limit;  // 0x0270, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_DropShipEditingTools(int32 EntryPoint);  // parameters 0x4
};
