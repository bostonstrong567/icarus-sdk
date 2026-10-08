// /Game/BP/DropShipEditor/UMG_DropShipOperationClear.UMG_DropShipOperationClear_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DropShipOperationClear_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InteractionBorder;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PartName;  // 0x0270, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_DropShipOperationClear(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0xA8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnMouseLeave(const FPointerEvent& MouseEvent);  // parameters 0x70
};
