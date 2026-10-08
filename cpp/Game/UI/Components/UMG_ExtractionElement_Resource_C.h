// /Game/UI/Components/UMG_ExtractionElement_Resource.UMG_ExtractionElement_Resource_C
// Derives from: UUMG_ListElement_C > UUserWidget > UWidget > UVisual > UObject
// size 0x3DC, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ExtractionElement_Resource_C : public UUMG_ListElement_C, public IUserListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E8, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* CompleteAnimation;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CornersImage;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* CraftingProgressBar;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* DarkenBorder;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* desaturater;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HoverCorners;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OutputAmount;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OutputAmountBorder;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_1;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* RecipeFrame;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UnlockGlow;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UnlockLines;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDPressedImage;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDHoveredImage;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDNormalImage;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor NameColor;  // 0x0370, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor HighlightColor;  // 0x0398, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDInvalidNormalImage;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDInvalidHoverImage;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDInvalidPressedImage;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentProgress;  // 0x03D8, size 0x4

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Clear();
    UFUNCTION() void ExecuteUbergraph_UMG_ExtractionElement_Resource(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Finished_FAA5EDD049D2A09D5EFE40BB0DDFC97F();
    UFUNCTION(BlueprintCallable, BlueprintPure) UOverlay* GetHoverCornerWidget();  // parameters 0x8
    UFUNCTION(BlueprintCallable) UOverlay* GetOverlay();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FProcessorRecipesRowHandle GetProcessorRecipe();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void InitialiseIcons();
    UFUNCTION(BlueprintCallable) void SetProgress(float Percent, FProcessorRecipesRowHandle CurrentQueueRecipe, bool QueueEmpty);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) void SetState(bool Valid);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Setup(FIcarusResourcesEnum Item);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Update(float Progress);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FSlateBrush UpdateRecipeFrame();  // parameters 0x88
};
