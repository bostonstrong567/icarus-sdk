// /Game/UI/Components/UMG_ItemDisplay.UMG_ItemDisplay_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ItemDisplay_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Item;  // 0x0270, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ItemDisplay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Setup(FItemsStaticRowHandle Item, FItemableRowHandle Itemable);  // parameters 0x30
};
