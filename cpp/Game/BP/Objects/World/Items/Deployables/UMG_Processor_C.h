// /Game/BP/Objects/World/Items/Deployables/UMG_Processor.UMG_Processor_C
// Derives from: UUMG_ProcessorBase_C > UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x4E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Processor_C : public UUMG_ProcessorBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02A0, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShelterWarning;  // 0x02A8, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x02B0, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* DeviceWarningPulse;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ActivateFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* AutoActivationSwitcher;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* AutoCraftPrompt;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* AutomatedBox_NoActivation;  // 0x02D8, size 0x8, named "AutomatedBox-NoActivation"
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BenchName;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BenchName2;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Border;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ClearQueueButton2;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CloseButton;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CountNumber;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CoverUpButton;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CoverUpButton_1;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* CraftAndDeviceVertBox;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* CraftAutoSwitcher;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CraftButton2;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CraftFrame;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableText* CraftingAmount;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CraftingBox;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CraftingDeviceInfo;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* CraftingQueueBox;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* CraftingSectionBox;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DeviceInfo;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DeviceNotSheltered;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* EnergyActivationButton;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Injection;  // 0x0380, size 0x8
    UPROPERTY(Instanced) UBorder* InteractionBorder;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* LeftButton;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* LefterButton;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* MaxButton;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* MinButton;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* Player;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* QueueControls;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* RecipeAndInventoryVertBox;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGridPanel* RequiredElements;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RequiredMaterialsText;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* RequireScale;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* RightButton;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* RighterButton;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ShelterNotRequiredBorder;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* SplitStack;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* StopButton2;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* StoreAllButtonInput;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKeyPrompt_C* Transfer;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* TransferLikeButton;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CraftingPreview_C* UMG_CraftingPreview;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CraftingPreview_C* UMG_CraftingPreview_Auto;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeployableModifiersList_C* UMG_DeployableModifiersList_C_1;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeviceInventory_C* UMG_DeviceInventory;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EncumbranceBarLight_C* UMG_EncumbranceBarLight;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EnvirosuitSlots_C* UMG_EnvirosuitSlots;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FuelInventory_C* UMG_FuelInventory;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKey_C* UMG_PhysicalKey;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PhysicalKey_C* UMG_PhysicalKey_96;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Queue_C* UMG_Queue;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RecipeList_C* UMG_RecipeList;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Sort_C* UMG_Sort;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* PlayerInventory;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AutoSelect;  // 0x0488, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CurrentlyOn;  // 0x0489, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool QueueFull;  // 0x048A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool QueueEmpty;  // 0x048B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UpdateTrigger;  // 0x048C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CraftButtonUpdate;  // 0x048D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Multiplier;  // 0x0490, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProcessorRecipesRowHandle LastSelected;  // 0x0494, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseInput;  // 0x04AC, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_WidgetHighlightBase_C* CachedHighlightWidget;  // 0x04B0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventoryComponent* Inventory_Component;  // 0x04B8, size 0x8, named "Inventory Component"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LastDeviceOn;  // 0x04C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseProgressBarInterpolation;  // 0x04C1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ProgressBarInterpRate;  // 0x04C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastProgressBarValue;  // 0x04C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentProgressBarValue;  // 0x04CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentProgressBarTime;  // 0x04D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasCorrectContainer;  // 0x04D4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum CurrentResource;  // 0x04D8, size 0x10

    UFUNCTION() void BndEvt__ClearQueueButton2_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__CraftButton2_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__CraftingAmount_K2Node_ComponentBoundEvent_11_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION() void BndEvt__EnergyActivationButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__LeftButton_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__StopButton2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__StoreAllButtonInput_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_BasicButton_1_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_ButtonIcon_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Processor_LefterButton_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Processor_MinButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Processor_RighterButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_Processor_TransferLikeButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CanQueueItem(FProcessorRecipesRowHandle Recipe, bool& Craftable);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void CloseUI(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Processor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetBPNetworkProxy(UBP_NetworkProxyComponent_C*& AsBP_Network_Proxy_Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UUMG_CraftingPreview_C* GetCraftingPreview();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetInjectionContainer(UBorder*& Injection);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetJoules();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetLocalPlayerCharacter(AIcarusPlayerCharacterSurvival*& Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetProcessingComponent(UProcessingComponent*& Processing);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTransmutationRemaining();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetWattage();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Initialise(UInventory* Processor, UInventory* Fuel, UInventory* Player, UInventory* Suit, AIcarusPlayerCharacter* Character);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void InputInventoryItemAdded(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void InputInventoryUpdated();
    UFUNCTION(BlueprintCallable) void IsContainerValid(FProcessorRecipesRowHandle RowHandle, bool& Valid);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void OnProcessingStopped(EProcessorStoppedReason Reason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ProcessingItemChanged();
    UFUNCTION(BlueprintCallable) void ProcessorRecipeSelected(FProcessorRecipesRowHandle ProcessorRecipe);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void QueueElementClickedHandler(int32 Location);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RecipeValid(const FProcessorRecipesRowHandle& ProcessorRecipe, bool& Valid);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void ShouldShowShelterWarning(bool& ShowWarning);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShowShelterWarningStyle(bool Sheltered);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) ESlateVisibility ShowShelteredIndicator();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartAutoCraft(int32 Slot);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void ToggleEnergyActive();
    UFUNCTION(BlueprintCallable) void UpdateAllRecipeStates();
    UFUNCTION(BlueprintCallable) void UpdateAutoCraftingPreview();
    UFUNCTION(BlueprintCallable) void UpdateCount(int32 Count);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateEnergyButton();
    UFUNCTION(BlueprintCallable) void UpdatePreview();
    UFUNCTION(BlueprintCallable) void UpdateProgressBarInterp(float& NewProgressPercent);  // parameters 0x4
};
