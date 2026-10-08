// /Game/UI/Windows/UMG_Exotic_Transport_Interface.UMG_Exotic_Transport_Interface_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x358, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Exotic_Transport_Interface_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AnglePiece;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BiolabButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CanRequest;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CloseButton;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CloseEquipmentButton;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* EquipmentPanels;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* EquipmentPanelToggleButton;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* IncorrectBiome;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* LoadoutToggleButton;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBackgroundBlur* MainPanel;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MissionsAvailable;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* NoMissionsAvailable;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Requested;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* RequestFeedbackPanel;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* Return;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Rerequest;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_Space_C* UMG_BioLab_Space;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CargoRequest_C* UMG_CargoRequest;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Unsheltered;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* WorkshopButton;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* WorkshopPanelSlot;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryIDEnum Inventory_ID;  // 0x0330, size 0x10, named "Inventory ID"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RequestCooldownTime;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NextRequestGameTime;  // 0x0344, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DoesRespawnPodExist;  // 0x0348, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_EquipmentRequestInventoryContainer_C* EquipmentInventoryContainer;  // 0x0350, size 0x8

    UFUNCTION() void BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Exotic_Transport_Interface_BiolabButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Exotic_Transport_Interface_CloseEquipmentButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Exotic_Transport_Interface_LoadoutToggleButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Exotic_Transport_Interface_WorkshopButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_Exotic_Transport_Interface_WorkshopToggleButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckForPods();
    UFUNCTION(BlueprintCallable) void CheckRequestPod();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION(BlueprintCallable) void DoNothing();
    UFUNCTION() void ExecuteUbergraph_UMG_Exotic_Transport_Interface(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetLinkedActorInventoryComponent(UInventoryComponent*& InventoryComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsHostWithClients(bool& Result);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsRequestingNewDropship() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnEquipmentRequestButtonClicked();
    UFUNCTION(BlueprintCallable) void RequestPod();
    UFUNCTION(BlueprintCallable) void SetPendingLoadoutExtension();
    UFUNCTION(BlueprintCallable) void ShowBiolab();
    UFUNCTION(BlueprintCallable) void ShowLoadouts();
    UFUNCTION(BlueprintCallable) void ShowWorkshop();
    UFUNCTION(BlueprintCallable) void UpdateNextRequestCooldown();
};
