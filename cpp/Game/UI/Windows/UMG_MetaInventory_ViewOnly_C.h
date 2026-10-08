// /Game/UI/Windows/UMG_MetaInventory_ViewOnly.UMG_MetaInventory_ViewOnly_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x271, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MetaInventory_ViewOnly_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* MainInventory;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x0270, size 0x1

    UFUNCTION() void ExecuteUbergraph_UMG_MetaInventory_ViewOnly(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(UInventory* Main);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
