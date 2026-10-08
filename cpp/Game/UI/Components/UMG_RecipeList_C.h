// /Game/UI/Components/UMG_RecipeList.UMG_RecipeList_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3F8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RecipeList_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CheckboxBorder;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ContainerIcon;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ContainerTipBox;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* DoNameSort;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* FilterList;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* Grid;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainBorder;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* ScrollBox_0;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* SearchBox;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* SortHorizontalBox;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ScaleableFrame_C* UMG_ScaleableFrame;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCheckBox* ValidOnly;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FRecipeSelected RecipeSelected;  // 0x02C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemClassificationsIconsRowHandle> PrimaryItemTypes;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RecipeAutoSelect;  // 0x02F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Visible_Recipes_X;  // 0x02F4, size 0x4, named "Visible Recipes X"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ValidOnlyValue;  // 0x02F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle SelectedQuery;  // 0x02FC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Visible_Recipes_Y;  // 0x0314, size 0x4, named "Visible Recipes Y"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_ListElement_C*> RecipeElements;  // 0x0320, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_RecipeElementNonInteractive_C*> RecipeElementNonInteractives;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Visible_Recipes_Auto_X;  // 0x0340, size 0x4, named "Visible Recipes Auto X"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_RecipeElementMulti_C*> RecipeElementsMulti;  // 0x0348, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Visible_Recipes_Multi_X;  // 0x0358, size 0x4, named "Visible Recipes Multi X"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RecipeMultiOutput;  // 0x035C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRecipeSetsRowHandle CachedRecipeSet;  // 0x0360, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FProcessorRecipesRowHandle, FSessionFlagsRowHandle> RecipeHighlightMap;  // 0x0378, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasCorrectContainer;  // 0x03C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum Current_Resource;  // 0x03D0, size 0x10, named "Current Resource"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum CurrentResource;  // 0x03E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DoNameSortValue;  // 0x03F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Visible_Recipes_Auto_Multi_X;  // 0x03F4, size 0x4, named "Visible Recipes Auto Multi X"

    UFUNCTION() void BndEvt__SearchBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_RecipeList_DoNameSort_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION() void BndEvt__ValidOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CanCraftItem(UObject* Widget, TArray<UInventory*>& Inventories, UProcessingComponent* Processing, bool& Valid);  // parameters 0x21
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_RecipeList(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Filter();
    UFUNCTION(BlueprintCallable) void FilterAvaliable();
    UFUNCTION(BlueprintCallable) void FilterRecipesByName(TArray<FProcessorRecipeResult>& ProcessorRecipeResult);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void FilterText();
    UFUNCTION(BlueprintCallable) void FilterTypes();
    UFUNCTION(BlueprintCallable) void FilterValid();
    UFUNCTION(BlueprintCallable) void FixLayout();
    UFUNCTION(BlueprintCallable) void FullUpdate();
    UFUNCTION(BlueprintCallable) FSessionFlagsRowHandle GetHighlightFlag(FProcessorRecipesRowHandle Recipe);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void Initialise(FRecipeSetsRowHandle RecipeSet, bool AutoSelect, bool UseInput);  // parameters 0x1A
    UFUNCTION(BlueprintCallable) void ItemClickedHandler(FTagQueriesRowHandle TagQuery);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void On_Recipe_Selected(FProcessorRecipesRowHandle Recipe);  // parameters 0x18, named "On Recipe Selected"
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void PreFilterRecipes(TArray<FProcessorRecipeResult>& Recipes);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RecipeSelected__DelegateSignature(FProcessorRecipesRowHandle ProcessorRecipe);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateStates(UProcessingComponent* Processing, TArray<UInventory*>& Additional_Inventories);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateTrigger();
};
