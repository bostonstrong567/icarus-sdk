// /Game/BP/UI/Talents/Blueprint/UMG_TalentTooltip_Blueprint.UMG_TalentTooltip_Blueprint_C
// Derives from: UTalentTooltipWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x528, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TalentTooltip_Blueprint_C : public UTalentTooltipWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ExpandProgress_Instant;  // 0x0288, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ExpandProgress;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ActionText;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BenchIcons;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BlueprintDescription;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BlueprintFlavour;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BlueprintName;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BuildingTier;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ClickToUnlockSection;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CostAmount;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CostSection;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CraftedAtListText;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CraftedAtOverlay;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CraftingLocation;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* DynamicContent;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* EnergyOutput;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ExpandProgressBar;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* FlavourTextSizeBox;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* GroupDescriptionText;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Variations;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_52;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MultiMaterialsLabel;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NumberCrafted;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* OverallSize;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* RecipeSetDetailsVBox;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RecipeSetItemList;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGridPanel* RequiredElementsBox;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* RequiredMatsSection;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* SingleItemDetailsVBox;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BlueprintItemBaseRecipes_List_C* UMG_BlueprintItemBaseRecipes_List;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BlueprintRecipeSet_List_C* UMG_BlueprintRecipeSet_List;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ItemStats_C* UMG_ItemStats;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ItemStats_C* UMG_ItemStats_Recipe;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ResourceNetworkPreviewContainer_C* UMG_ResourceNetworkPreviewContainer;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UnlockImage;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* VariationText;  // 0x03A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProcessorRecipesRowHandle Recipe;  // 0x03B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasMaterials;  // 0x03C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatsEnum> Blacklist;  // 0x03D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LoadAsGroup;  // 0x03E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText UnlockedBlueprintList;  // 0x03E8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText CraftedAtListTextBuilder;  // 0x0400, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<FRecipeSetsRowHandle> GroupCraftedSets;  // 0x0418, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<FItemTemplateRowHandle> ProcessedGroupRecipes;  // 0x0468, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBuildingTypesRowHandle TalentBuildingType;  // 0x04B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TalentBuildingTier;  // 0x04D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, int32> SummedArmorStats;  // 0x04D8, size 0x50

    UFUNCTION(BlueprintCallable) void AddDynamicContent(UUserWidget* WidgetToAdd);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ClearDynamicContent();
    UFUNCTION(BlueprintCallable) void ClearHoverAnimation();
    UFUNCTION() void ExecuteUbergraph_UMG_TalentTooltip_Blueprint(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetArmourStats(TArray<FIcarusStatReplicated>& Array);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetRecipeSlow(FProcessorRecipesRowHandle& Recipe);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnStateChanged();
    UFUNCTION(BlueprintImplementableEvent) void OnTalentSet();
    UFUNCTION(BlueprintCallable) void PlayHoverAnimation();
    UFUNCTION(BlueprintCallable) void Update_Item_Stats(FItemData Item);  // parameters 0x1F0, named "Update Item Stats"
    UFUNCTION(BlueprintCallable) void UpdateVisibility();
};
