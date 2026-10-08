// /Game/UI/Components/UMG_RecipeElementNonInteractive.UMG_RecipeElementNonInteractive_C
// Derives from: UUMG_ListElement_C > UUserWidget > UWidget > UVisual > UObject
// size 0x328, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RecipeElementNonInteractive_C : public UUMG_ListElement_C, public IUserListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ContainerImage;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* LeftSide;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Output;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_1;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* RecipeBase;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* RecipeFrame;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ResourceText;  // 0x0320, size 0x8

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_RecipeElementNonInteractive(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) UOverlay* GetOverlay();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FProcessorRecipesRowHandle GetProcessorRecipe();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetResourceIcon(TSoftObjectPtr<UTexture2D>& Icon, int32& Units);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) void InitialiseIcons();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
