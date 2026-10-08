// /Game/UI/Components/UMG_RecipeInputResource.UMG_RecipeInputResource_C
// Derives from: UUMG_RecipeElementBase_C > UUserWidget > UWidget > UVisual > UObject
// size 0x2D0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RecipeInputResource_C : public UUMG_RecipeElementBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BackgroundImage;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* IconImage;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RecipeItemAmount_C* UMG_RecipeItemAmount;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSelected Selected;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Output;  // 0x02B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredResourceAmount;  // 0x02BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum ResourceInput;  // 0x02C0, size 0x10

    UFUNCTION(BlueprintCallable) void CheckElement(bool& bCanSatisfy);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CreateTooltip(UUserWidget*& Tooltip);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CurrentAmountUpdated();
    UFUNCTION() void ExecuteUbergraph_UMG_RecipeInputResource(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Intialise(FIcarusResourcesEnum NewResourceType, int32 Multiplier, bool Output);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOutput();  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Selected__DelegateSignature(UUMG_RecipeInputItem_C* SelectedRecipe);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateBackgroundImage(UTexture2D* Texture, TEnumAsByte<ProcessorPreview> Selected);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void UpdateTooltip(TEnumAsByte<ProcessorPreview> State);  // parameters 0x1
};
