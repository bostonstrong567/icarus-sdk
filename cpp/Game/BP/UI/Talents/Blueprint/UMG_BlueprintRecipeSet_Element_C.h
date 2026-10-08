// /Game/BP/UI/Talents/Blueprint/UMG_BlueprintRecipeSet_Element.UMG_BlueprintRecipeSet_Element_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x49C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BlueprintRecipeSet_Element_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CountText;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_128;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Inputs;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemImage;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProcessorRecipesRowHandle Recipe;  // 0x0290, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Item_Template;  // 0x02A8, size 0x1F0, named "Item Template"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x0498, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BlueprintRecipeSet_Element(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
