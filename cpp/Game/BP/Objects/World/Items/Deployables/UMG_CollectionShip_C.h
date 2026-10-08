// /Game/BP/Objects/World/Items/Deployables/UMG_CollectionShip.UMG_CollectionShip_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2CA, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CollectionShip_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShelterWarning;  // 0x0288, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x0290, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* DeviceWarningPulse;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ActivatePrompt;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CloseButton;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* LaunchButton;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DeviceInventory_C* UMG_DeviceInventory;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerInventory_C* UMG_PlayerInventory;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GeneratorState;  // 0x02C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSheltered;  // 0x02C9, size 0x1

    UFUNCTION() void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__EnergyActivationButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CloseUI();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_CollectionShip(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnInventoryChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnLinkedActorDestroyed(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void UpdateLaunchButton();
};
