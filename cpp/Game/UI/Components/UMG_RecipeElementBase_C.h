// /Game/UI/Components/UMG_RecipeElementBase.UMG_RecipeElementBase_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RecipeElementBase_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentAmount;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUserWidget* CachedTooltip;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DisableTooltip;  // 0x0280, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Multiplier;  // 0x0284, size 0x4

    UFUNCTION(BlueprintCallable) void CheckElement(bool& bCanSatisfy);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CreateTooltip(UUserWidget*& Tooltip);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CurrentAmountUpdated();
    UFUNCTION() void ExecuteUbergraph_UMG_RecipeElementBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetPlayerInventories(TArray<UInventory*>& Array);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOutput();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCurrentAmount(int32 CurrentAmount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateBackgroundImage(UTexture2D* Texture, TEnumAsByte<ProcessorPreview> Selected);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void UpdateStateRecipe(bool ForceSetColor, TEnumAsByte<ProcessorPreview> ForcedColor);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void UpdateTooltip(TEnumAsByte<ProcessorPreview> State);  // parameters 0x1
};
