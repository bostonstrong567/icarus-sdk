// /Game/UI/Components/UMG_LootDisplay.UMG_LootDisplay_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x294, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_LootDisplay_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ChanceText;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ItemDisplay_C* UMG_ItemDisplay;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Item;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Chance;  // 0x0290, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_LootDisplay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
