// /Game/UI/Components/UMG_ItemPopup.UMG_ItemPopup_C
// Derives from: UItemTooltipBase > UUserWidget > UWidget > UVisual > UObject
// size 0x6C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ItemPopup_C : public UItemTooltipBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_Seed_Biome;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_StackMultiplier;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BuildingTier;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Description;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DescriptionText;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DevelopmentText;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_2;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Durability;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* DynamicContent;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FeatureLevel_Text_1;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FlavourText;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* FunctionBorder;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* FunctionBorder_1;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FunctionText;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Header;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_FeatureLevel;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_52;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LW;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ModifierList;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0510, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OwnedBy;  // 0x0518, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OwnedByText;  // 0x0520, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* ScaleBox_Itemname;  // 0x0528, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SlotHelperIcon;  // 0x0530, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* Spacer_FeatureLevelMargin;  // 0x0538, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SpoilText;  // 0x0540, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* SpoilTimer;  // 0x0548, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Stack;  // 0x0550, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Tags;  // 0x0558, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TagText;  // 0x0560, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_Seed_Biome;  // 0x0568, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_StackMultiplier;  // 0x0570, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon;  // 0x0578, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FeatureLevelIcon_C* UMG_FeatureLevelIcon_Small;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ItemContainerDisplay_C* UMG_ItemContainerDisplay;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ItemStats_C* UMG_ItemStats_C_0;  // 0x0590, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LurePopupInfo_C* UMG_LurePopupInfo;  // 0x0598, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ResourceNetworkPreviewContainer_C* UMG_ResourceNetworkPreviewContainer;  // 0x05A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ValidItemAttachments_C* UMG_ValidItemAttachments;  // 0x05A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ValidMounts_C* UMG_ValidMounts;  // 0x05B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Variations;  // 0x05B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* VariationText;  // 0x05C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Weight;  // 0x05C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D CalculatedSize;  // 0x05D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor RegularItemColour;  // 0x05D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor MetaItemColour;  // 0x0600, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatsEnum> Blacklist;  // 0x0628, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor MissionItemColour;  // 0x0638, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MetaItem;  // 0x0660, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool QuestItem;  // 0x0661, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TalentBuildingTier;  // 0x0664, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Query_Light;  // 0x0668, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Query_Bulky;  // 0x0680, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LegendaryWeapon;  // 0x0698, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor LegendaryItemColour;  // 0x06A0, size 0x28

    UFUNCTION(BlueprintCallable) void AddDynamicContent(UUserWidget* WidgetToAdd);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ClearDynamicContent();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ItemPopup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetDamageVariation(FItemData Item, bool Melee);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetOptimalBiomesString(TArray<FAtmospheresRowHandle>& Biomes, FText& Text1);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void GetSize(FVector2D& Size);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GramsToOutputString(int32 Weight, FText& WeightString);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void HandleUpdateTooltip();
    UFUNCTION(BlueprintCallable) void PopulateAfflictions(FItemData ItemData);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void Show_for_Item(FItemData Item, int32 Slot, UInventory* ItemInventory, bool& Shown);  // parameters 0x201, named "Show for Item"
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable, BlueprintPure) FText ToResourceText(int32 InInt);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void UpdatePopupColour();
    UFUNCTION(BlueprintCallable) void UpdateTagText();
    UFUNCTION(BlueprintImplementableEvent) void UpdateTooltip();
};
