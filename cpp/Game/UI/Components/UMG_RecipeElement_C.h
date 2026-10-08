// /Game/UI/Components/UMG_RecipeElement.UMG_RecipeElement_C
// Derives from: UUMG_ListElement_C > UUserWidget > UWidget > UVisual > UObject
// size 0x608, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RecipeElement_C : public UUMG_ListElement_C, public IUserListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E8, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* CompleteAnimation;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ClassificationImage;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CornersImage;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* CraftingProgressBar;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* DarkenBorder;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* desaturater;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HoverCorners;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ItemIconDynamic;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OutputAmount;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OutputAmountBorder;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_1;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* RankImage;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* RecipeFrame;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ResourceText;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UnlockGlow;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UnlockLines;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDPressedImage;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDHoveredImage;  // 0x0380, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDNormalImage;  // 0x0388, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor NameColor;  // 0x0390, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor HighlightColor;  // 0x03B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDInvalidNormalImage;  // 0x03E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDInvalidHoverImage;  // 0x03E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OLDInvalidPressedImage;  // 0x03F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentProgress;  // 0x03F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Query;  // 0x03FC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ClientRequestAlterationsItem;  // 0x0418, size 0x1F0

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckForOverrideIcon(FProcessorRecipesRowHandle RecipeRow, TSoftObjectPtr<UTexture2D>& IconOut);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void Clear();
    UFUNCTION(BlueprintCallable) void ClientRequestAlterationData(const FItemData& Item);  // parameters 0x1F0
    UFUNCTION() void ExecuteUbergraph_UMG_RecipeElement(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Finished_1A93246B4B7271E4B7205CB7080352F3();
    UFUNCTION(BlueprintCallable) void Get_Alteration_Preview(FItemData Item, bool& Custom);  // parameters 0x1F1, named "Get Alteration Preview"
    UFUNCTION(BlueprintCallable, BlueprintPure) UOverlay* GetHoverCornerWidget();  // parameters 0x8
    UFUNCTION(BlueprintCallable) UOverlay* GetOverlay();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FProcessorRecipesRowHandle GetProcessorRecipe();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void InitMainItemIcon(const FItemData& Item, const FResourceItem& ResourceItem);  // parameters 0x208
    UFUNCTION(BlueprintCallable) void InitialiseIcons();
    UFUNCTION(BlueprintCallable) void OnClientRequestAlterationDataResponse(const TArray<FItemResourceGeneratedAlterationResult>& Results);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B784BA064E(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetMainIcon(TSoftObjectPtr<UObject> Icon, TSoftObjectPtr<UObject> CustomAlpha, bool IsCustomItem);  // parameters 0x51
    UFUNCTION(BlueprintCallable) void SetNonInteractive(bool RecipeSelected);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetProgress(float Percent, FProcessorRecipesRowHandle CurrentQueueRecipe, bool QueueEmpty);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) void SetState(bool Valid);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FSlateBrush UpdateRecipeFrame();  // parameters 0x88
    UFUNCTION(BlueprintCallable) void ValidRecipe(bool& Valid);  // parameters 0x1
};
