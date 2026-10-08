// /Game/UI/Components/UMG_QuickCrafting.UMG_QuickCrafting_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x289, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_QuickCrafting_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RetainerBox_0;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CraftingProgressbar_C* UMG_CraftingProgressbar;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RecipeElement_C* UMG_RecipeElement;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* VisibleBox;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x0288, size 0x1

    UFUNCTION() void ExecuteUbergraph_UMG_QuickCrafting(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnProcessingItemUpdated(FProcessingItem Item);  // parameters 0x24
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
