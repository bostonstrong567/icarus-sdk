// /Game/UI/Windows/UMG_MainInventory.UMG_MainInventory_C
// Derives from: UMainInventoryWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x358, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MainInventory_C : public UMainInventoryWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenStats;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* AnimatePointers;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Titlebar_C* Character_Titlebar;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Dropshadow;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FoodBuffs;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Titlebar_C* Inventory_Titlebar;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* KeyPrompts;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectTimeElapsed;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ShowMoreButton;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ShowMoreText;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* StatsWindow;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SuitImage;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_CurrentHealth;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EncumbranceBarLight_C* UMG_EncumbranceBarLight;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EnvirosuitSlots_C* UMG_EnvirosuitSlots;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* UMG_Inventory;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryAuxilarySlots_C* UMG_InventoryAuxilarySlots;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryDropZone_C* UMG_InventoryDropZone;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryEnvirosuit_C* UMG_InventoryEnvirosuit;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryPaperDoll_C* UMG_InventoryPaperDoll;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryStatusBox_C* UMG_InventoryStatusBox;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Sort_C* UMG_Sort;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatDisplay_C* UMG_StatDisplay;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_UserInterface_C* UserInterface;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_PlayerPreview_Survival_C* PlayerPreview;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UDLSSMode Old_DLSS_Mode;  // 0x0338, size 0x1, named "Old DLSS Mode"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle TimerHandle;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EBPLogVerbosity DebugVerbosity;  // 0x0348, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TickAccumulation;  // 0x034C, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_StatsWindow_C* StatWindowWidget;  // 0x0350, size 0x8

    UFUNCTION() void BndEvt__UMG_MainInventory_Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_MainInventory_ShowMoreButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_MainInventory_ShowMoreButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CleanupStatsWindow();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MainInventory(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(UInventory* BoundInventory, UInventory* EnvirosuitInventory, UInventory* EquipmentInventory, UInventory* UpgradeInventory, UInventory* VisionInventory, UUMG_UserInterface_C* Parent);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsInventoryVisible();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void QuickShiftInventoryHandler(int32 Location, UInventory* Inventory);  // parameters 0x10
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void VisibilityChanged(ESlateVisibility NewVisbility);  // parameters 0x1
};
