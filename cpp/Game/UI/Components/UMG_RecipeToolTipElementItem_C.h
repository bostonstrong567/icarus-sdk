// /Game/UI/Components/UMG_RecipeToolTipElementItem.UMG_RecipeToolTipElementItem_C
// Derives from: UUMG_RecipeElementBase_C > UUserWidget > UWidget > UVisual > UObject
// size 0x2F0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RecipeToolTipElementItem_C : public UUMG_RecipeElementBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_1;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* NameBorder;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Picture;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ResourceUnits;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RecipeItemAmount_C* UMG_RecipeItemAmount;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Units;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowName;  // 0x02C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ElementPadding;  // 0x02CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Output;  // 0x02D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowRecipeAmount;  // 0x02D1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCraftingInput ItemInput;  // 0x02D4, size 0x1C

    UFUNCTION(BlueprintCallable) void CheckElement(bool& bCanSatisfy);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CurrentAmountUpdated();
    UFUNCTION() void ExecuteUbergraph_UMG_RecipeToolTipElementItem(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOutput();  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateBackgroundImage(UTexture2D* Texture, TEnumAsByte<ProcessorPreview> Selected);  // parameters 0x9
};
