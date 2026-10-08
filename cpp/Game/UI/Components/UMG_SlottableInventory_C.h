// /Game/UI/Components/UMG_SlottableInventory.UMG_SlottableInventory_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x29C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SlottableInventory_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Background;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryGrid_C* InventoryGrid;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SlottableType;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InventoryWidth;  // 0x0280, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Query;  // 0x0284, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_SlottableInventory(int32 EntryPoint);  // parameters 0x4
};
