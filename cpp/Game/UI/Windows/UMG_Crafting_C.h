// /Game/UI/Windows/UMG_Crafting.UMG_Crafting_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x339, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Crafting_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ClearQueueButton;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CraftAmountBorder;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CraftButton;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableText* CraftingAmount;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Keyprompts;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* LeftButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* LefterButton;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* MaxButton;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* MinButton;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RecipeName;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGridPanel* RequiredElementGrid;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* RightButton;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* RighterButton;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* StopButton;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CraftingPreview_C* UMG_CraftingPreview;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EncumbranceBarLight_C* UMG_EncumbranceBarLight;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* UMG_Inventory;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryDropZone_C* UMG_InventoryDropZone;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Queue_C* UMG_Queue;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RecipeList_C* UMG_RecipeList;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Sort_C* UMG_Sort;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProcessorRecipesRowHandle Recipe;  // 0x0310, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UProcessingComponent* ProcessingComponent;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UpdateTrigger;  // 0x0330, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool QueueFull;  // 0x0331, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Multiplier;  // 0x0334, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FullUpdateRequested;  // 0x0338, size 0x1

    UFUNCTION(BlueprintCallable) void BindInventoryEvent();
    UFUNCTION(BlueprintCallable) void BindProcessingEvent();
    UFUNCTION() void BndEvt__ClearQueueButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__CraftingAmount_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION() void BndEvt__CraftingAmount_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION() void BndEvt__LeftButton_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__RightButton_1_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__StopButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_3_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Crafting_LefterButton_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Crafting_MinButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Crafting_RighterButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CanQueueItem(FProcessorRecipesRowHandle ProcessorRecipe, bool& Craftable);  // parameters 0x19
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void ElementClicked(FProcessorRecipesRowHandle Element);  // parameters 0x18
    UFUNCTION() void ExecuteUbergraph_UMG_Crafting(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(UInventory* Inventory, UProcessingComponent* Processor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnItemUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void PanelClosed();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ProcessingUpdated();
    UFUNCTION(BlueprintCallable) void QueueElementClickedHandler(int32 Location);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RefreshRecipes();
    UFUNCTION(BlueprintCallable) void RequestFullUpdate();
    UFUNCTION(BlueprintCallable) void Selected_Recipe_Updated(FProcessorRecipesRowHandle NewRecipe);  // parameters 0x18, named "Selected Recipe Updated"
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Update_All_Recipes();  // named "Update All Recipes"
    UFUNCTION(BlueprintCallable) void UpdateCount(int32 Count);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateCrafting(bool IsCrafting);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateRecipes();
};
