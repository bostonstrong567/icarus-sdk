// /Game/UI/Windows/UMG_DropShip.UMG_DropShip_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x370, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_DropShip_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AnglePiece;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* Backpack;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CloseButton;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DropshipInventoryPrompt;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* Equipment;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_106;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* Loadout;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MissionEndPrompt;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* Return;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* TakeAllButton;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryIDEnum Inventory_ID;  // 0x02E8, size 0x10, named "Inventory ID"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle Mission;  // 0x02F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectListRowHandle Mission_Prospect;  // 0x0310, size 0x18, named "Mission Prospect"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle Session_Flag;  // 0x0328, size 0x18, named "Session Flag"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLaunchItemReturnInfo> PlayerOwnedItemsToReturn;  // 0x0340, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> NonReturnableItems;  // 0x0350, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasValidatedReturnItems;  // 0x0360, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerController* ControllerRef;  // 0x0368, size 0x8

    UFUNCTION() void BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_DropShip_TakeAllButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DoNothing();
    UFUNCTION() void ExecuteUbergraph_UMG_DropShip(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetIcarusMap(FTalentArchetypesRowHandle& Archetype);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void HostConfirmation();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsHostWithClients(bool& Result);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsTryingToReturnNonPlayerOwnedItems() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnItemsValidated(const TArray<FLaunchItemReturnInfo>& OwnedItems, const TArray<FItemData>& NonReturnableItems);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void ReturnItemsConfirm();
    UFUNCTION(BlueprintCallable) void ReturnToStation();
};
