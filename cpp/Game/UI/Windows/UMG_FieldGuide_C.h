// /Game/UI/Windows/UMG_FieldGuide.UMG_FieldGuide_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x448, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuide_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* BackButton;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Backglow;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* BeastContainer;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* BeastGrid;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BestiaryCategory;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* BestiaryToggle;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BorderBeastContainer;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BorderFishContainer;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ButtonBox;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* CategoryButton;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CheatIncreaseFishCaught;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CheatIncreaseKillsAI;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CheatItemButton;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CheatItemSet;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CheatRecipeButton;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* CheatsBox_Bestiary;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* CheatsBox_Fish;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* CheatsBox_Items;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CheatSpawnAI;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* CloseButton;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* Content;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* EntryDisplay;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FishCategory;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* FishContainer;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* FishGrid;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* FishingToggle;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* HomeButton;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ItemsContainer;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItemSearch_C* ItemSearch;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ItemsToggle;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* LeftPaneOverlay;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainBorder;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* SearchButtonBox;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* SearchSwitcher;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* TitleButtons;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* TitleContainer;  // 0x0388, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0390, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TempFishUnlocked;  // 0x0398, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TempCreaturePercent;  // 0x039C, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBestiaryManagerComponent* BestiaryManagerComponent;  // 0x03A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText BuiltString;  // 0x03A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFieldGuideBackButtonItem> BackList;  // 0x03C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EFieldGuideCategory> LastFieldGuideCategory;  // 0x03D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle CurrentItem;  // 0x03D4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle CheatItem;  // 0x03EC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemsStaticRowHandle> CheatItemArray;  // 0x0408, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBestiaryDataRowHandle CurrentAI;  // 0x0418, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFishDataRowHandle CurrentFish;  // 0x0430, size 0x18

    UFUNCTION(BlueprintCallable) void BeastLinkClicked(const FItemsStaticRowHandle& BeastRow);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_Bestiary_UMG_CloseButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_FieldGuide_BackButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_FieldGuide_BestiaryToggle_K2Node_ComponentBoundEvent_10_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_FieldGuide_CategoryButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_FieldGuide_CheatIncreaseFishCaught_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_FieldGuide_CheatIncreaseKillsAI_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_FieldGuide_CheatItemButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_FieldGuide_CheatItemSet_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_FieldGuide_CheatRecipeButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_FieldGuide_CheatSpawnAI_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_FieldGuide_FishingToggle_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_FieldGuide_HomeButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_FieldGuide_ItemsToggle_K2Node_ComponentBoundEvent_12_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ChildResourceClicked(const FFieldGuideCategoriesRowHandle& CategoryRow, const FItemsStaticRowHandle& ItemRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void ClearLeftSideBarSelection();
    UFUNCTION(BlueprintCallable) void ClickedTitleButton(TEnumAsByte<EFieldGuideCategory> Category);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ConditionalAddToBackList();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CreateBestiary(UVerticalBox* LeftSideBar);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CreateFieldGuideItems(UVerticalBox* LeftSideBar);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CreateFishingRecord(UVerticalBox* LeftSidebar);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DebugPrintBackList();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuide(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FilterBestiary(FTerrainsRowHandle Map, FAtmospheresRowHandle Atmosphere);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void FilterBosses(FTerrainsRowHandle Map, FAtmospheresRowHandle Atmosphere);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void FilterFish(EFishRarity Rarity, EFishType Type);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void FilterItemCategories(FFieldGuideCategoriesRowHandle CategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void FilterItems(FFieldGuideCategoriesRowHandle CategoryRow, FFieldGuideSubcategoriesRowHandle SubcategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void FishLinkClicked(const FItemsStaticRowHandle& FishRow);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetCurrentItemsView(FFieldGuideCategoriesRowHandle& CategoryRow, FItemsStaticRowHandle& ItemRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void HideSearchShowItem(FFieldGuideCategoriesRowHandle CategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void InitContentView(TEnumAsByte<EFieldGuideCategory> Cateogry);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Initialize_Back_List(TEnumAsByte<EFieldGuideCategory> Category);  // parameters 0x1, named "Initialize Back List"
    UFUNCTION(BlueprintCallable) void LinkedActorDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PeakLastBackListItem(FFieldGuideCategoriesRowHandle& CategoryRow, FItemsStaticRowHandle& ItemRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void PopBackListItem(FFieldGuideCategoriesRowHandle& CategoryRowOut, FItemsStaticRowHandle& ItemRowOut);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void PopViewFromBackList();
    UFUNCTION(BlueprintCallable) void Populate();
    UFUNCTION(BlueprintCallable) void PopulateTopLevel();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RemoveEntryDisplay();
    UFUNCTION(BlueprintCallable) void RemoveFishDisplay();
    UFUNCTION(BlueprintCallable) void RemoveItemDisplay();
    UFUNCTION(BlueprintCallable) void SetContent(TEnumAsByte<EFieldGuideCategory> Category);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetupObjectInventory(UInventory* ContainerInventory);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ShowBeastFromItem(FItemsStaticRowHandle ItemRow);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ShowCreature(FBestiaryDataRowHandle Creature, int32 Percent);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void ShowCurrentCategoryView();
    UFUNCTION(BlueprintCallable) void ShowFish(FFishDataRowHandle Creature, bool Discovered);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void ShowFishFromItem(FItemsStaticRowHandle ItemRow);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ShowItem(FFieldGuideCategoriesRowHandle Category, FFieldGuideSubcategoriesRowHandle Subcategory, FItemsStaticRowHandle Item);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void ToggleCategory();
};
