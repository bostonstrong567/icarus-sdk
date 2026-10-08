// /Game/UI/Windows/UMG_CargoRequest.UMG_CargoRequest_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2FC, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CargoRequest_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* AnimateIn;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* MainInventory;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MountWarning;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MountWarningPrompt;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* RequestButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_NumSelectedMounts;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Rerequest;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DropCargo_C* UMG_DropCargo;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InsurancePanel_C* UMG_InsurancePanel;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ItemsOnDropsList_C* UMG_ItemsOnDropsList;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PersistentMountList_C* UMG_PersistentMountList;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnRequestButtonClicked OnRequestButtonClicked;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequestButtonLockedByTimer;  // 0x02D0, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* CargoInventory;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumSelectedMounts;  // 0x02E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle Query;  // 0x02E4, size 0x18

    UFUNCTION() void BndEvt__UMG_CargoRequest_RequestButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_CargoRequest(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetInsuranceEnabled(bool& Insured);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetSelectedLoadoutData(FPlayerLoadoutData& LoadoutData);  // parameters 0x3E0
    UFUNCTION(BlueprintCallable) void InitInventory(UInventory* CargoInventory, UInventory* MetaInventory);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCargoInventoryItemChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnPersistentMountSelectionStateUpdated(UUMG_PersistentMountInfo_C* PersistentMountWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRequestButtonClicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void PlayOpenAnimation();
    UFUNCTION(BlueprintCallable) void SetInsuranceLocked(bool Locked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetRequestButtonEnabled(bool Enabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetRequestTimeVisibility(bool Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateMountWarning();
    UFUNCTION(BlueprintCallable) void UpdateRequestButtonEnabled();
    UFUNCTION(BlueprintCallable) void UpdateRequestTime(FText RemainingTimeText);  // parameters 0x18
};
